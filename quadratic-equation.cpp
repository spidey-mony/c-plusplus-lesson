#include <iostream>
#include <cmath>

using namespace std;

float a,b,c ,delta , x1,x2,real_part,imaginary_part;

int main(){
  cout<< "This program can help you to solve quadratic equation!!" << endl;
  cout <<"Typical quadratic equation = ax^2 + bx + c = 0" << endl;
  
  // give users to input 3 values of a , b , and c

  cout << "Input value:" << endl;
  cin >> a >> b >> c;
 
 // defined delta value 
  delta = b*b - 4*a*c; 
  cout << delta << endl;  // just a output to check 
 
  if( delta > 0){
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    cout << "There are two roots" < endl;
    cout << "X1 = " << x1 << endl;
    cout << "X2 = " << x2 << endl;
  } 
  if (delta == 0){
    x1 = x2 = -b/(2*a);
    cout << "There is only one root" << endl;
    cout << "X1 =  "  << x1 << endl;
  }
  if(delta < 0){
    real_part = -b/(2*a);
    imaginary_part = sqrt(abs(delta))/(2*a);
    cout << "There are two roots in complex" << endl;
    cout << "X1 = " << real_part << "+" << imaginary_part << "i" << endl;
    cout << "X2 = " << real_part << "-" << imaginary_part << "i" << endl;
  }
   return 0;
}