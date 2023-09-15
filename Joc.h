#include <iostream>
#include <time.h>
#include <unordered_map>
#include <stdio.h>
#include <fstream>
#include <cstring>
#include <array>

using namespace std;
ifstream fin("cuvinte.in");

int number_of_words = 11453;
char words_matrix[12000][6];///matricea cu words_matrixinte
char solution_word[6];///nu stiu dc e aici
int frequnce_array_letters[300];///vector pt litere si frequnce_array_lettersitii, daca o sa fie nevoie
unordered_map<string, int>used_words;///mapa de words_matrixinte folosite

void Read_words()///read_words words_matrixintele in matrice
{
    char word[6];
    for (int i = 0; i <= 11453; ++i)
    {
        fin >> word;
        strcpy(words_matrix[i], word);
    }
}

void Generate_solution()///functie de generat un word random
{
    int random_word = rand() % number_of_words + 1;
    strcpy(solution_word, words_matrix[random_word]);
    for (int i = 0; i <= 4; ++i)
        frequnce_array_letters[solution_word[i]]++;
}

string Play(string try_word)///functia de jucat ca persoana
{
    used_words[""]++;  ///aici tre sa vad daca read_words mapa de words_matrixinte folosite la WHILE
    char try_word_converted[6];
    char word_review[6];
    string converter;
    strcpy(try_word_converted, try_word.c_str());
    used_words[try_word_converted]++;

    for (int i = 0; i <= 4; ++i)
    {
        if (try_word_converted[i] == solution_word[i])
            word_review[i] = 'C';
        else if (frequnce_array_letters[try_word_converted[i]])
            word_review[i] = 'A';
        else
            word_review[i] = 'G';
    }
    converter = word_review;
    return converter;
}

void Generate_Random_Word()
{

    srand(time(NULL));

    Read_words();

    Generate_solution();

}