#include <iostream>
#include <string>
using namespace std;


class Piece {
private:
    int nb_windows;
    string color;
public:
    Piece(int nb_windows, const string& color): nb_windows(nb_windows), color(color) {}

    int getNbWindows() const { return nb_windows; }
    string getColor() const { return color; }

    void setNbWindows(int n) { 
        nb_windows = n; 
    }

    void setColor(const string& c) { 
        color = c; 
    }
    virtual bool estChambre(){return false;}//idk
    virtual bool estSalleDeBain(){return false;}//
};


class SalleDeBain : public Piece {
    private:
        bool has_Shower;

    public:

        SalleDeBain(int nb_windows, const string& color, bool has_Shower): Piece(nb_windows, color), has_Shower(has_Shower) {}

        bool getHasShower() const { return has_Shower; }
        
        void setHasShower(bool h) { has_Shower = h; }

        bool estSalleDeBain()override{return true;}//
};

class Chambre : public Piece {
private:
    int nb_beds;

public:
    Chambre(int nb_windows, const string& color, int nb_beds): Piece(nb_windows, color), nb_beds(nb_beds) {}

    int getNbBeds() const { return nb_beds; }

    void setNbBeds(int b) { nb_beds = b; }
};


class Maison {
private:
    int nb_pieces;
    Piece** pieces;   // tableau de pointeurs vers des pièces

public:

    Maison(int nb_pieces): nb_pieces(nb_pieces)
    {
        pieces = new Piece*[nb_pieces];  
        for(int i = 0; i < nb_pieces; i++)
            pieces[i] = nullptr;
    }

    // Getter
    int getNbPieces() const { 
        return nb_pieces; 
    }

    Piece* getPiece(int index) const {
        if(index >= 0 && index < nb_pieces)
            return pieces[index];
        return nullptr;
    }

    void setPiece(int index, Piece* p) {
        if(index >= 0 && index < nb_pieces)
            pieces[index] = p;
    }

    ~Maison() {
        for(int i = 0; i < nb_pieces; i++)
            delete pieces[i];
        delete[] pieces;
    }
};
