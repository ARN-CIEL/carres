#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    CCarre c1, c2;

    
    c1.Setsx(10);
    c1.Setsy(20);
    c1.Setcote(30);

    
    c2.Setsx(50);
    c2.Setsy(60);
    c2.Setcote(40);

    // Afficher les caractéristiques initiales de c1 et c2
    cout << "Caracteristiques de c1:" << endl;
    c1.Afficher();
    cout << endl;

    cout << "Caracteristiques de c2:" << endl;
    c2.Afficher();
    cout << endl;

    // Déplacer c1
    c1.Deplacer('n', 2);
    cout << "Apres deplacement de c1 vers le nord de 2 pixels:" << endl;
    c1.Afficher();
    cout << endl;

    // Déplacer c2
    c2.Deplacer('e', 5);
    cout << "Apres deplacement de c2 vers l'est de 5 pixels:" << endl;
    c2.Afficher();
    cout << endl;
    
    cout << "Valeur de sx de c1: " << c1.Getsx() << endl;
    cout << "Valeur de sy de c1: " << c1.Getsy() << endl;
    cout << "Valeur de cote de c1: " << c1.Getcote() << endl;

    cout << endl;

    cout << "Valeur de sx de c2: " << c2.Getsx() << endl;
    cout << "Valeur de sy de c2: " << c2.Getsy() << endl;
    cout << "Valeur de cote de c2: " << c2.Getcote() << endl;

    return 0;
}
