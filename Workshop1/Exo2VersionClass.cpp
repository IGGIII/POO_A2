#include <iostream>
using namespace std;


class Fraction{
    private :
        double num,denom;//ou definir 1 ici
    public : 
        Fraction():num(1),denom(1){}
        Fraction(double num_f,double denom_f)
            :num(num_f),denom(denom_f){
            }
        double getNumerateur(){
            return num;
        }
        double getDenominateur(){
            return denom;
        }
        Fraction add(Fraction x){//car on veut un autre objet
            double numerateur = (num * x.denom)+(x.num*denom);
            double denominateur = denom * x.denom;
            return Fraction(numerateur,denominateur);
        }
        Fraction minuns(Fraction x){
            double numerateur = (num * x.denom)-(x.num*denom);
            double denominateur = denom * x.denom;
            return Fraction(numerateur,denominateur);

        }
        Fraction multiply(Fraction x){
            double numerateur = num * x.num;
            double denominateur = denom * x.denom;
            return Fraction(numerateur,denominateur);            
        }
        Fraction divide(Fraction x){
            double numerateur = num * x.denom;
            double denominateur = x.num * denom;
            return Fraction(numerateur,denominateur);
        }


};

int main()
{
 /* Test constructors */
 Fraction f0;
 if (f0.getNumerateur() == 1 && f0.getDenominateur() == 1) {
    cout << "[OK] Default constructor works" << endl;
 }

 else {
    cout << "[FAILURE] Default constructor doesn't work" << endl;
 }

 Fraction f1(1, 2);
 if (f1.getNumerateur() == 1 && f1.getDenominateur() == 2) {
 cout << "[OK] Constructor with parameters works" << endl;
 }

 else {
 cout << "[FAILURE] Constructor with parameters doesn't work" << endl;
 }
 Fraction f2(3, 4);

 /* Test add */ 

 Fraction f3 = f1.add(f2);

 if (f3.getNumerateur() == 10 && f3.getDenominateur() == 8) {
 cout << "[OK] Add method works" << endl;
 }
 else {
 cout << "[FAILURE] Add method doesn't work" << endl;
 }

 /* Test minus */
 f3 = f1.minuns(f2);
 if (f3.getNumerateur() == -2 && f3.getDenominateur() == 8) {
 cout << "[OK] Minus method works" << endl;
 }
 else {
 cout << "[FAILURE] Minus method doesn't work" << endl;
 }
 
 /* Test multiply */
 f3 = f1.multiply(f2);
 if (f3.getNumerateur() == 3 && f3.getDenominateur() == 8) {
 cout << "[OK] Multiply method works" << endl;
 }
 else {
 cout << "[FAILURE] Multiply method doesn't work" << endl;
 }
 /* Test divide */
 f3 = f1.divide(f2);
 if (f3.getNumerateur() == 4 && f3.getDenominateur() == 6) {
 cout << "[OK] Divide method works" << endl;
 }
 else {
 cout << "[FAILURE] Divide method doesn't work" << endl;
 }
 return 0;
}