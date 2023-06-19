#include<iostream>
using namespace std;

 class emp{
        public:
        emp(){
            cout << "Starting obj = " << this << endl;
        }
        ~emp(){
            cout << "Destructoring obj = " << this << endl;
 }
};
int main(void){
    emp p1,p2,p3;
    return 0;
}