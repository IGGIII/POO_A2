#include <iostream>
#include <random>
#include <string>
using namespace std;//sup les std::


class Creature{
    private :
        int pv,pa,niveau;
    public :
        Creature():pv(50),pa(100),niveau(15){}
        Creature(int pv,int pa, int niv):pv(pv),pa(pa),niveau(niv){}
        /*        
        int getStat(){PAS BESOIN
            return pv,pa,niveau;
        }*/
        void affichage(){
            cout << "Le monstre a "<< this->pv << " pv, a " << this->pa << " points d'attaque" << " et est niveau " << this->niveau << endl; 
        }
        double attaque(){
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<> dis(1, pa);
            cout << dis(gen) << " sont les DMG du monstre "<< endl;
            return dis(gen);   
        }

        void subitDegat(int degat){
            pv = pv - degat;
        }

        bool estVivant(){
            if (pv <= 0){
                return false;
            }
            else(pv);
                return true; 

        }
};



class Heros{
    private :
        string nom;
        int pv,pa;
    public :
        Heros():nom("The Knight of the Dawn"),pv(100),pa(15){}
        Heros(string nom,int pv, int pa):nom(nom),pv(pv),pa(pa){}
        /*        
        int getStat(){PAS BESOIN
            return pv,pa;
        }*/

        void affichage(){
            cout << "Le héro se nomme "<< this->nom << ", il a " << this->pv << "pv" << " et a " << this->pa << " d'attaque." << endl; 
        }
        double attaque(){
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<> dis(0, pa);
            cout << dis(gen) << " sont les DMG du héro "<< endl;
            return dis(gen);

        }
        void subitDegat(int degat){
            pv -= degat;
        }

        bool estVivant(){
            if (pv <= 0){
                return false;
            }
            else(pv);
                return true ; 
        }


};


int main(){
Heros personnage("Hing",10,8);
Creature monstre(15,2,3);

//personnage.getStat(); PAS BESOIN
//monstre.getStat(); PAS BESOIN

int save_dmg_personnage = personnage.attaque();
int save_dmg_monstre = monstre.attaque();

personnage.affichage();
monstre.affichage();

cout << "\n" << endl;

monstre.subitDegat(save_dmg_personnage);
personnage.subitDegat(save_dmg_monstre);

personnage.affichage();
monstre.affichage();




return 0;
}