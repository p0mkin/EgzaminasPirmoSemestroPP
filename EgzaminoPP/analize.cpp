#include "analize.h"
#include <iostream>
#include <cstring>

using namespace std;

bool arSurikiuotaMazejanciai(const Mokestis m[], int n)
{
    for (int i = 0; i < n - 1; i++)
        if (m[i].proc < m[i + 1].proc)
            return false;
    return true;
}

void rikiuotiMazejanciai(Mokestis m[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (m[j].proc < m[j + 1].proc)
                swap(m[j], m[j + 1]);
}

int skirtinguRusiuSkaicius(const Mokestis m[], int n)
{
    int kiek = 0;

    for (int i = 0; i < n; i++) {
        bool nauja = true;
        for (int j = 0; j < i; j++) {
            if (strcmp(m[i].kodas, m[j].kodas) == 0) {
                nauja = false;
                break;
            }
        }
        if (nauja) kiek++;
    }
    return kiek;
}

void spausdinti(const Mokestis m[], int n)
{
    for (int i = 0; i < n; i++)
        cout << m[i].kodas << " " << m[i].pav << " " << m[i].proc << endl;
}

