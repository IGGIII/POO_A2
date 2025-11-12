#include <iostream>
#include <cmath>
//using namespace std;
//#include "Cricle.cpp"
class Circle{
    private : 
    public : 
        double x,y,r;
        Circle(double coor_x,double coor_y,double ray_r)
            :x(coor_x),y(coor_y),r(ray_r){
            }

        void set_pos(double pos_x, double pos_y) {
            pos_x=x;//this->x=x;
            pos_y=y;//this->y=y;
        }
        double perimeter() {
            return 2 * M_PI * r;//this -> r
        }
        double area(){
           return 2 * M_PI * r*r; //this -> r*this -> r
        }
};



class Rectangle{
    private : 
    public : 
        double x,y,w,h;
        Rectangle(double coor_x,double coor_y,double width, double height):x(coor_x),y(coor_y),w(width),h(height){}

        void set_pos(double pos_x, double pos_y) {
            pos_x=x;//this->x=x;
            pos_y=y;//this->y=y;
        }
        double perimeter() {
             return 2 * (w + h);//(this->w+this->h)
        }
        double area(){
            return w*h;//this->w*this->h
        }
};
        

int main(){

Circle c{0, 0, 1};
Rectangle r{0, 0, 1, 2};
std::cout << "Le perimetre du cercle est de : " <<c.perimeter()  << std::endl;
std::cout << "L'air du cercle est de : " <<c.area()  << std::endl;
c.set_pos(-1,1);
std::cout << "Le perimetre du rectangle est de : " <<r.perimeter()  << std::endl;
std::cout << "L'air du rectangle est de : " <<r.area()  << std::endl;

}