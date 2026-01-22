#include <iostream>
#include "mokestis.h"
#include "analize.h"

using namespace std;

int main()
{
    const int MAX = 100;
    Mokestis mokesciai[MAX];

    int kiekis = nuskaitytiMokescius("Duomenys.txt", mokesciai, MAX);
    if (kiekis < 0) return 1;

    if (arSurikiuotaMazejanciai(mokesciai, kiekis)) {
        cout << "Failas jau surikiuotas\n";
    }
    else {
        cout << "Failas nesurikiuotas, rikiuojama...\n";
        rikiuotiMazejanciai(mokesciai, kiekis);
    }

    spausdinti(mokesciai, kiekis);
 
    cout << "Skirtingu mokesciu rusiu: "
        << skirtinguRusiuSkaicius(mokesciai, kiekis) << endl;

    return 0;
}
