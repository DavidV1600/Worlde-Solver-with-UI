#include <iostream>
#include <time.h>
#include <unordered_map>
#include <stdio.h>
#include <fstream>
#include <cstring>
#include <map>

using namespace std;
ifstream ffin("cuvinte.in");

int number_of_tries = 0;
int number_of_possible_words = 11453;
int number_of_total_words = 11453;
char matrix_with_possbile_words[12000][6];///matricea cu cuvinte
char matrix_with_all_words[12000][6];///copie pentru incercari matricea cu cuvinte
char best_word_choice[6];///cuvantul cel mai entropic per stage
double max_entropy_for_word = 0;///entropia maxima per stage
double letter_per_position_probability[30][6];///posibilitatea [litera]/[pozitie]
char copy_matrix[12000][6];
double posibiliy_for_letter_to_appear_word[30];
unordered_map<char, int>used_letter;


double calculate_entropy(double probability)///functie de calculat entropia pentru posibilitate
{
    return probability * log2(1 / probability);
}

void insert_words()///bag cuvintele in matrice
{
    char word[6];
    for (int i = 0; i <= 11453; ++i)
    {
        ffin >> word;
        strcpy(matrix_with_possbile_words[i], word);
        strcpy(matrix_with_all_words[i], word);
    }
}


void insert_posibilities()
{

    for (int j = 0; j <= 25; ++j)
    {
        double favorable_case_2 = 0;
        for (int i = 0; i <= number_of_possible_words; ++i)
        {
            if (matrix_with_possbile_words[i][0] == j + 'A' || matrix_with_possbile_words[i][1] == j + 'A' || matrix_with_possbile_words[i][2] == j + 'A' || matrix_with_possbile_words[i][3] == j + 'A' || matrix_with_possbile_words[i][4] == j + 'A')
                favorable_case_2++;
        }
        posibiliy_for_letter_to_appear_word[j] = favorable_case_2 / (number_of_possible_words + 1);
    }
}



void find_best_word()
{
    double max_entropy = 0;
    if (number_of_possible_words) {

        strcpy(best_word_choice, matrix_with_possbile_words[0]);
        for (int i = 0; i <= number_of_total_words; ++i)
        {
            for (int j = 0; j <= 25; ++j)
                used_letter[j + 'A'] = 0;
            double entrop = 0;
            for (int j = 0; j <= 4; ++j)
            {
                if (used_letter[matrix_with_all_words[i][j]] == 0)
                    entrop += calculate_entropy(posibiliy_for_letter_to_appear_word[matrix_with_all_words[i][j] - 'A']);
                used_letter[matrix_with_all_words[i][j]] = 1;
            }
            if (entrop > max_entropy)
            {
                max_entropy = entrop;
                strcpy(best_word_choice, matrix_with_all_words[i]);
            }
        }
    }
    else
    {
        strcpy(best_word_choice, matrix_with_possbile_words[0]);
    }
}


void delete_impossible_words(string word_guess, string word_review)
{
    int unavailable_words[12000] = { 0 };/// rezul[i] e 1 cand tre sa sterg cuvantul i din lista
    for (int i = 0; i <= 4; ++i)
    {
        if (word_review[i] == 'C')///daca e litera buna
            for (int j = 0; j <= number_of_possible_words; ++j)
            {
                if (matrix_with_possbile_words[j][i] != word_guess[i])
                    unavailable_words[j] = 1;
            }

        if (word_review[i] == 'G')///daca e litera gresita
            for (int j = 0; j <= number_of_possible_words; ++j)
            {
                for (int k = 0; k <= 4; ++k)
                    if (matrix_with_possbile_words[j][k] == word_guess[i])
                        unavailable_words[j] = 1;
            }

        if (word_review[i] == 'A')///daca e aprox buna
            for (int j = 0; j <= number_of_possible_words; ++j)
            {
                if (matrix_with_possbile_words[j][i] == word_guess[i])
                    unavailable_words[j] = 1;
                int good_letter_bad_place = 0;
                for (int k = 0; k <= 4; ++k)
                    if (matrix_with_possbile_words[j][k] == word_guess[i])
                        good_letter_bad_place++;
                if (good_letter_bad_place == 0)
                    unavailable_words[j] = 1;
            }
    }
    int wrong_words = 0;
    for (int i = 0; i <= number_of_possible_words; ++i)///stergere efectiva (cum naiba se facea fara vector aditional???)
    {
        if (!unavailable_words[i])
            strcpy(copy_matrix[wrong_words++], matrix_with_possbile_words[i]);
    }
    number_of_possible_words = wrong_words - 1;
    for (int i = 0; i <= number_of_possible_words; ++i)
        strcpy(matrix_with_possbile_words[i], copy_matrix[i]);

}

string start_AI(string word_review_result)
{
    if (word_review_result == "") {
        insert_words();
    }
    insert_posibilities();
    find_best_word();
    number_of_tries++;
    string best_word = best_word_choice;
    return best_word;
}