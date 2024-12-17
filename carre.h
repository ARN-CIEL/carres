/// @file carre.h 
/// @brief Programme principal du TP sur la manipulation de carrés en C++
/// @details Ce programme utilise la classe CCarre pour gérer des carrés, les initialiser, les afficher et les déplacer.
/// @version 0.1 - Visual Studio 2019 
/// @date 17/12/2024 
/// @author Nathan ARNOULD

/// @brief Classe CCarre
class CCarre {
private:
    /// @brief Coordonnées x du sommet du carré
    int sx;
    /// @brief Coordonnées y du sommet du carré
    int sy;
    /// @brief Longueur du côté du carré
    int cote;

public:
    /// @brief Constructeur par défaut qui initialise les coordonnées à (0,0) et le côté à 1
    CCarre();

    /// @brief Constructeur paramétré
    /// @param sx1 Coordonnées x du sommet du carré
    /// @param sy1 Coordonnées y du sommet du carré
    /// @param cote1 Longueur du côté du carré
    CCarre(int sx1, int sy1, int cote1);

    /// @brief Affecte la valeur de sx1 à sx
    /// @param sx1 La nouvelle valeur de sx
    void Setsx(int sx1);

    /// @brief Affecte la valeur de sy1 à sy
    /// @param sy1 La nouvelle valeur de sy
    void Setsy(int sy1);

    /// @brief Affecte la valeur de cote1 à cote
    /// @param cote1 La nouvelle valeur de cote
    void Setcote(int cote1);

    /// @brief Affiche les caractéristiques du carré
    void Afficher();

    /// @brief Retourne la valeur de sx
    /// @return La valeur de sx
    int Getsx();

    /// @brief Retourne la valeur de sy
    /// @return La valeur de sy
    int Getsy();

    /// @brief Retourne la valeur de cote
    /// @return La valeur de cote
    int Getcote();

    /// @brief Déplace le carré dans une direction donnée avec un certain saut
    /// @param direction La direction du déplacement ('n', 's', 'o', 'e')
    /// @param saut Nombre de pixels de déplacement du carré
    void Deplacer(char direction, int saut);

    /// @brief Déplace le carré selon un déplacement en x et en y
    /// @param dx Déplacement en x
    /// @param dy Déplacement en y
    void Deplacer(int dx, int dy);
};
