class CCarre {
private:
    int sx, sy, cote;

public:
    // Constructeur par d�faut
    CCarre();

    // Constructeur param�tr�
    CCarre(int sx1, int sy1, int cote1);

    void Setsx(int sx1);
    void Setsy(int sy1);
    void Setcote(int cote1);
    void Afficher();
    int Getsx();
    int Getsy();
    int Getcote();
    void Deplacer(char direction, int saut);
    void Deplacer(int dx, int dy);
};
