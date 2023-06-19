#include<iostream>
using namespace std;

class Myclass{
    public:
    void setID(int myid);
    void setMark(float mymark);
    void print();
    private:
        int id;
        float mark;
};

int main(){
    Myclass object;
    object.setID(4);
    object.setMark(50.00);
    object.print();
    return 0;
}