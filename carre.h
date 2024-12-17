/// @file carre.h 
/// @brief Programme principal du TP sur la manipulation de carr�s en C++
/// @details Ce programme utilise la classe CCarre pour g�rer des carr�s, les initialiser, les afficher et les d�placer.
/// @version 0.1 - Visual Studio 2019 
/// @date 17/12/2024 
/// @author Nathan ARNOULD

/// @brief Classe CCarre
class CCarre {
private:
    /// @brief Coordonn�es x du sommet du carr�
    int sx;
    /// @brief Coordonn�es y du sommet du carr�
    int sy;
    /// @brief Longueur du c�t� du carr�
    int cote;

public:
    /// @brief Constructeur par d�faut qui initialise les coordonn�es � (0,0) et le c�t� � 1
    CCarre();

    /// @brief Constructeur param�tr�
    /// @param sx1 Coordonn�es x du sommet du carr�
    /// @param sy1 Coordonn�es y du sommet du carr�
    /// @param cote1 Longueur du c�t� du carr�
    CCarre(int sx1, int sy1, int cote1);

    /// @brief Affecte la valeur de sx1 � sx
    /// @param sx1 La nouvelle valeur de sx
    void Setsx(int sx1);

    /// @brief Affecte la valeur de sy1 � sy
    /// @param sy1 La nouvelle valeur de sy
    void Setsy(int sy1);

    /// @brief Affecte la valeur de cote1 � cote
    /// @param cote1 La nouvelle valeur de cote
    void Setcote(int cote1);

    /// @brief Affiche les caract�ristiques du carr�
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

    /// @brief D�place le carr� dans une direction donn�e avec un certain saut
    /// @param direction La direction du d�placement ('n', 's', 'o', 'e')
    /// @param saut Nombre de pixels de d�placement du carr�
    void Deplacer(char direction, int saut);

    /// @brief D�place le carr� selon un d�placement en x et en y
    /// @param dx D�placement en x
    /// @param dy D�placement en y
    void Deplacer(int dx, int dy);
};
