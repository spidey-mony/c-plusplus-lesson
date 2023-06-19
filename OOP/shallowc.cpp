#include<iostream>
using namespace std;

class point{
    private: 
    int *x,*y;
    public:
    point(int = 0,int = 0);  // set default value to 0
    ~point();
    void setx(int);
    void sety(int);
    void print();
    void input();
};
point::point(int x,int y){
    cout << "Calling Constructor" << endl;
    this->x= new int(x);
    this->y= new int(y);
    // *this->x = x;
    // *this->y = y;
}
point::~point(){
    cout << "Calling Deconstructor" << endl;
    delete x;
    delete y;
}
void point::setx(int x){
    *this->x = x;
}
void point::sety(int y){
    *this->y = y;
}
void point::print(){
    cout << "*x = " << *x << endl;
    cout << "*y = " << *y << endl;
}
void point::input(){
    cout << "Input (*x) = "; cin >>*x;
    cout << "Input (*y) = "; cin >>*y;
}
int main(){
    point p1(10,20);
    point p2(p1); // instead you can use this point p2=p1;
    cout << "obj(1)" << endl; // object 1 intialize value
    p1.print();
    cout << "obj(2)" << endl; // object 2 copy from object 1
    p2.print();
    p2.setx(13); // change value at obj 2
    p2.sety(30);    // change value at obj2
    cout << "obj(2)" << endl; // print object 2
    p2.print();
    cout << "obj(1)" << endl; // we didn't change on obj 1 but it also changed because we're using shallow copy
    p1.print();
    return 0;
}