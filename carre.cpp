#include "carre.h"
#include <iostream>

using namespace std;


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
