#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    CCarre c1, c2, c4;

    c1.Setsx(10);
    c1.Setsy(20);
    c1.Setcote(30);

    c2 = CCarre(50, 60, 40);

    // Allouer dynamiquement un carré pour c3
    CCarre* c3 = new CCarre(60, 88, 95);

    c4.Setsx(95);
    c4.Setsy(100);
    c4.Setcote(40);

    // Afficher les caractéristiques initiales de c1, c2, c3, c4
    cout << "Caracteristiques de c1:" << endl;
    c1.Afficher();
    cout << endl;

    cout << "Caracteristiques de c2:" << endl;
    c2.Afficher();
    cout << endl;

    cout << "Caracteristiques de c3:" << endl;
    c3->Afficher(); // Utiliser l'opérateur flèche pour accéder aux membres de c3
    cout << endl;

    cout << "Caracteristiques de c4:" << endl;
    c4.Afficher();
    cout << endl;

    // Déplacer c1
    c1.Deplacer('n', 2);
    cout << "Apres deplacement de c1 vers le nord de 2 pixels:" << endl;
    c1.Afficher();
    cout << endl;

    // Déplacer c2 avec la méthode surchargée
    c2.Deplacer(5, -5);
    cout << "Apres deplacement de c2 avec un vecteur (5, -5):" << endl;
    c2.Afficher();
    cout << endl;

    // Déplacer c3
    c3->Deplacer('n', 10);
    cout << "Apres deplacement de c3 vers le nord de 10 pixels:" << endl;
    c3->Afficher();
    cout << endl;

    /* Tester les méthodes Get et afficher les valeurs retournées pour c1
    cout << "Valeur de sx de c1: " << c1.Getsx() << endl;
    cout << "Valeur de sy de c1: " << c1.Getsy() << endl;
    cout << "Valeur de cote de c1: " << c1.Getcote() << endl;
    cout << endl;

    // Tester les méthodes Get et afficher les valeurs retournées pour c2
    cout << "Valeur de sx de c2: " << c2.Getsx() << endl;
    cout << "Valeur de sy de c2: " << c2.Getsy() << endl;
    cout << "Valeur de cote de c2: " << c2.Getcote() << endl;
    cout << endl;
    */

    cout << endl;
    cout << endl;

    // Initialiser un tableau de 4 carrés
    CCarre carres[4] = { c1, c2, *c3, c4 }; // Déréférencer c3 pour obtenir l'objet carré

    // Afficher les caractéristiques de chaque carré dans le tableau
    for (int i = 0; i < 4; ++i) {
        cout << "Caracteristiques du carre " << i + 1 << " :" << endl;
        carres[i].Afficher();
        cout << endl;
    }

    // Libérer la mémoire allouée pour c3
    delete c3;

    return 0;
}
