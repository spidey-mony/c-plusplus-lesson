#include<iostream>
using namespace std;

class point{
    private:
    int x,y;

    public:
    point(){ 
        cout << "This is default constructor()" << endl;
        x=y=0;}
    point(int v){
        cout << "This is constructor with one parameter()" << endl;
        x=y=v;
    }
    point(int xx,int yy){
         cout << "This is constructor with two parameters()" << endl;
        x = xx;
        y = yy;
    }
    void setx(int x){
        this->x = x;
    }
    int getx(int x){
        return x;
    }
    void sety(int y){
        this->y = y;
    }
    int gety(int y){
        return y;
    }
    void print(){
        cout << "X=" << x << "," << "Y=" << y << endl;
    }
};

int main(void){
    point p[5]={ {},{1},{2,3},{},{9}};
    for(int i=0;i<5;++i){
        p[i].print();
    }   
     return 0;
}