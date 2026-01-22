#ifndef MOKESTIS_H
#define MOKESTIS_H

#include <string>

struct Mokestis {
    char kodas[4];
    std::string pav;
    double proc;
};
int nuskaitytiMokescius(const char* failoVardas, Mokestis mokesciai[], int max);
#endif