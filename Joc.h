#include <iostream>
#include <time.h>
#include <unordered_map>
#include <stdio.h>
#include <fstream>
#include <cstring>
#include <array>

using namespace std;
ifstream fin("cuvinte.in");

int limita = 11453;
char cuv[12000][6];///matricea cu cuvinte
char solutie[6];///nu stiu dc e aici
int apar[300];///vector pt litere si aparitii, daca o sa fie nevoie
unordered_map<string, int>pls;///mapa de cuvinte folosite

double entropie(double posibilitate)///functie de calculat entropia pentru posibilitate
{
    return posibilitate * log2(1 / posibilitate);
}

void bag()///bag cuvintele in matrice
{
    char cuvant[6];
    for (int i = 0; i <= 11453; ++i)
    {
        fin >> cuvant;
        strcpy(cuv[i], cuvant);
    }
}

void genereaza_cuv()///functie de generat un cuvant random
{
    int susta = rand() % limita + 1;
    // cout<<susta<<'\n';
    strcpy(solutie, cuv[susta]);
    //  cout<<solutie<<'\n';
    for (int i = 0; i <= 4; ++i)
        apar[solutie[i]]++;
    /*for(int i=0;i<=30;++i)
        if(apar[i])
        cout<<apar[i]<<" ";*/

}

string Joc_Om(string cuvant_incercat)///functia de jucat ca persoana
{
    pls[""]++;  ///aici tre sa vad daca bag mapa de cuvinte folosite la WHILE
    char incerc[6];
    int pasi = 0;
    char afisaj[6];
    string convertitor;
    int ebun = 0;
    strcpy(incerc, cuvant_incercat.c_str());
    pls[incerc]++;
    if (pls[incerc] == 1)
        pasi++;

    
    for (int i = 0; i <= 4; ++i)
    {
        if (incerc[i] == solutie[i])
            afisaj[i] = 'C';
        else if (apar[incerc[i]])
            afisaj[i] = 'A';
        else
            afisaj[i] = 'G';
    }
    convertitor = afisaj;
    return convertitor;
}

void Genereaza_Cuvant()
{

    srand(time(NULL));

    bag();

    genereaza_cuv();

}