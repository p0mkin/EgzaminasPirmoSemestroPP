#include "mokestis.h"
#include <fstream>
#include <iostream>
using namespace std;
int nuskaitytiMokescius(const char* failoVardas, Mokestis mokesciai[], int max)
{
    ifstream failas(failoVardas);
    if (!failas.is_open()) {
        cout << "Failo nepavyko rasti ir atidaryti\n";
        return -1;
    }

    int eil;
    failas >> eil;

    if (eil > max) eil = max;

    for (int i = 0; i < eil; i++) {
        failas >> mokesciai[i].kodas >> mokesciai[i].pav >> mokesciai[i].proc;
    }

    return eil; // grazina kiek irasu nuskaityta
}