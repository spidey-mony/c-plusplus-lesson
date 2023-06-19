#include<iostream>
using namespace std;
enum Days{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
int main(){
   Days day;
   day = Saturday;
   if(day == Saturday){
    cout << "I wear blue T-Shirt" << endl;
   } 
   day != Sunday;
   if(day == Sunday){
    cout << "I naked" << endl;
}
}

