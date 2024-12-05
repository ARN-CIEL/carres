#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    CCarre carre(10, 20, 30);

    carre.Setsx(15);
    carre.Setsy(25);
    carre.Setcote(35);

    carre.Afficher();

    return 0;
}
