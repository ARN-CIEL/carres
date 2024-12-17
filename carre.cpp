#include "carre.h"
#include <iostream>

using namespace std;


CCarre::CCarre() : sx(0), sy(0), cote(1) {}


CCarre::CCarre(int sx1, int sy1, int cote1) : sx(sx1), sy(sy1), cote(cote1) {}



void CCarre::Setsx(int sx1) {
    sx = sx1;
}

void CCarre::Setsy(int sy1) {
    sy = sy1;
}

void CCarre::Setcote(int cote1) {
    cote = cote1;
}

void CCarre::Afficher() {
    cout << "Carre de sommet (" << sx << ", " << sy << ") avec cote de longueur " << cote << " et surface " << cote * cote << endl;
}

int CCarre::Getsx() {
    return sx;
}

int CCarre::Getsy() {
    return sy;
}

int CCarre::Getcote() {
    return cote;
}

void CCarre::Deplacer(char direction, int saut)
{
    switch (direction) 
    {
    case 'n':
        // Nord 
        sy -= saut;
        break;
    case 's': // Sud 
        sy += saut;
        break;
    case 'o': // Ouest 
        sx -= saut;
        break;
    case 'e': // Est 
        sx += saut;
        break;
    }
}
void CCarre::Deplacer(int dx, int dy)
{
    sx += dx; sy += dy;
}