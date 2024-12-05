#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    CCarre c1;
    c1.Setsx(15);
    c1.Setsy(25);
    c1.Setcote(35);

    // Afficher les caractéristiques
    c1.Afficher();

    
    cout << "Valeur de sx: " << c1.Getsx() << endl;
    cout << "Valeur de sy: " << c1.Getsy() << endl;
    cout << "Valeur de cote: " << c1.Getcote() << endl;

    return 0;
}
