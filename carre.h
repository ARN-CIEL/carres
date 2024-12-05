
class CCarre {
private:
    int sx, sy, cote;

public:
    /**
     * @brief Affecte la valeur de sx1 � sx
     * @param sx1 La nouvelle valeur de sx
     */
    void Setsx(int sx1);

    /**
     * @brief Affecte la valeur de sy1 � sy
     * @param sy1 La nouvelle valeur de sy
     */
    void Setsy(int sy1);

    /**
     * @brief Affecte la valeur de cote1 � cote
     * @param cote1 La nouvelle valeur de cote
     */
    void Setcote(int cote1);

    /**
     * @brief Affiche les caract�ristiques du carr�
     */
    void Afficher();

    /**
     * @brief Retourne la valeur de sx
     * @return La valeur de sx
     */
    int Getsx();

    /**
     * @brief Retourne la valeur de sy
     * @return La valeur de sy
     */
    int Getsy();

    /**
     * @brief Retourne la valeur de cote
     * @return La valeur de cote
     */
    int Getcote();

    /**
     * @brief D�place le carr� sans le dessiner.
     * Modifie les attributs x et y en fonction de la direction et de la valeur de saut.
     * @param direction La direction du d�placement ('n', 's', 'o', 'e')
     * @param saut Nombre de pixels de d�placement du carr�
     */
    void Deplacer(char direction, int saut);

    void Deplacer(int dx, int dy);
};

