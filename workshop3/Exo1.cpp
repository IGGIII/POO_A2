#include <iostream>
using namespace std;

class Vehicule {
private:
    int max_speed;
    int mileage;

public:
    //constructeur par defaut
    Vehicule() : max_speed(240), mileage(0) {}

    //getter,setter pour max_speed
    int getmax_speed() const {
        return max_speed;
    }

    void setmax_speed(int speed) {
        if (speed < 200)
            max_speed = 240;
        else
            max_speed = speed;
    }

    //getter,setter pour mileage
    int getmileage() const {
        return mileage;
    }

    void setmileage(int km) {
        if (km < 0)
            mileage = 0;
        else
            mileage = km;
    }
};

class Bus:
    public Vehicule {

    private :
        
        int seat_capacity;
    public :
    Bus(){
        int seat_capacity=10;//version courte 
    }
        int getseating_capacity() const {
            return seat_capacity;
        }

        void setseating_capacity(int capacity){
        if (capacity > 50 || capacity<10)
            seat_capacity = 50;
        else
            seat_capacity = capacity;
        }
        void get_info()const{

            cout 
            << getseating_capacity() << " -> places assises ; " 
            << getmax_speed() << " -> vitesse ; " 
            << getmileage() << " -> compteur km" 
            << endl;
        }

};

class SchoolBus : public Bus {
    private:
        string school_name;
    public:
        // Constructeur
        SchoolBus(string sn) {
        school_name = sn;
        }
        // Getter pour school_name
        string getSchoolName() {
        return school_name;
        }
        // Setter pour school_name
        void setSchoolName(string sn) {//par de constructeur par defaut donc permet de que changer le nom
            school_name = sn;
        }

        static int countbigbus(SchoolBus t[],int n){
            int compteur=0;
            for (int i = 0 ; i < n ; i++ ){
                if (t[i].getseating_capacity() >= 40 && t[i].getmileage() >= 200000){
                    compteur++;
                }
            }
            return compteur;
        } 
};


int main() {
    Bus b;
    b.setmax_speed(200); 
    b.setmileage(4000);
    b.setseating_capacity(5);
    Bus b2;
    SchoolBus sb("bruh");
    sb.setmax_speed(180); 
    sb.setmileage(47000);
    sb.setseating_capacity(48);
    SchoolBus sb2("bruh2");
    sb2.setmax_speed(230); 
    sb2.setmileage(200800);
    sb2.setseating_capacity(41);

    int n = 2;
    SchoolBus t[]={sb,sb2};
    //sb.countbigbus(t,n);
    cout << sb.countbigbus(t,n) << endl;
    return 0;
}
