#include<iostream>
using namespace std;
class point{
    private:
    int x,y;
    public:
    point(int=0,int=0);   // constructor
    point(const point &);  //copy constructor
    void operator=(const point &); // assignment operator(=)
    void setx(int);
    void sety(int);
    void print();
    void input();
};
point::point(int x,int y){
    this->x = x;
    this->y = y;
}
point::point(const point &right){   // copy constructor syntax
    x=right.x;
    y=right.y;
  //  cout << "Calling copy constructor...\n";
}
void point::operator=(const point &right){   // assignment operator syntax 
    x=right.x;
    y=right.y;
    cout << "calling assignment operator(=)" << endl;
}
void point::setx(int x){
    this->x=x;
}
void point::sety(int y){
    this->y=y;
}
void point::print(){
    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
}
void point::input(){
    cout << "Input x? "; cin >> x;
    cout << "Input y? "; cin >> y;
}
void printPoint(point p){  // passsing obj to function
    p.print();
}
point getPoint(point p){ // getting input from obj
    p.input();
    return p;
}
int main(){
    point p1(3,5);
    point p2(p1);
    printPoint(p1);
    printPoint(p2);
    // getPoint(p2);
    p2.setx(8);
    p2.sety(10);
    printPoint(p2);
    printPoint(p1);
    point p3(12,3);
    p1 = p3;
    printPoint(p1);
    return 0;
}