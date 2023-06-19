#include<iostream>
#include<cmath>
using namespace std;

class point{
    private:
    int x,y;
    public:
    point(int = 0 ,int=0); // constructor
    point(const point &); // copy constructor 
    void setpoint(point);
    void setxy(int,int);
    friend float findDistance(point,point);
    void input();
    void print();
};

point::point(int x,int y){
    this->x = x;
    this->y = y;
}
point::point(const point &right){
    x = right.x;
    y = right.y;
}
void point::setpoint(point right){
    x = right.x;
    y = right.y;
}
void point::setxy(int x,int y){
    this->x = x;
    this->y = y;
}
void point::print(){
    cout << "x = " << endl;
    cout << "y = " << endl; 
}
void point::input(){
    cout << "input x? ";cin>> x;
    cout << "input y? ";cin>> y;
}
float findDistance(point p1,point p2){
    return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
}
int main(){
    point p1,p2,p3;
    p1.input();
    p2.input();
    p3.input();
    cout << "Distance between (p1,p2) " << findDistance(p1,p2) << endl;
    cout << "Distance between (p1,p3) " << findDistance(p1,p3) << endl;
    cout << "Distance between (p2,p3) " << findDistance(p2,p3) << endl;
    return 0;
}