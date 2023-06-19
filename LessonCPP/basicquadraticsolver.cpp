#include <iostream>
#include <cmath>

float a,b,c ,delta , x1,x2,real_part,imaginary_part;

int main(){
  std::cout<< "This program can help you to solve quadratic equation!!" << std::endl;
  std::cout <<"Typical quadratic equation = ax^2 + bx + c = 0" << std::endl;
  
  // give users to input 3 values of a , b , and c

  std::cout << "Input value:" << std::endl;
  std::cin >> a >> b >> c;
   if(std::cin.fail()){   // check if input doesn't equal to number give users an output to tell that they are wrong!
    std::cout << "Wrong Formatted!" << '\n' ;
    std::cin.clear();
    return 0;
   }
 
 // defined delta value 
  delta = b*b - 4*a*c; 
  std::cout << delta << std::endl;  // a output to check if the value of delta is correct!
 
  if( delta > 0){
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    std::cout << "There are two roots" << std::endl;
    std::cout << "X1 = " << x1 << std::endl;
    std::cout << "X2 = " << x2 << std::endl;
  
  } 
  else if (delta == 0){
    x1 = x2 = -b/(2*a);
    std::cout << "There is only one root" <<  std::endl;
    std::cout << "X1 =  " << x1 << std::endl;
  }
  else if(delta < 0){
    real_part = -b/(2*a);
    imaginary_part = sqrt(abs(delta))/(2*a);
    std::cout << "There are two roots in complex" << std::endl;
    std::cout << "X1 = " << real_part << "+" << imaginary_part << "i" << std::endl;
    std::cout << "X2 = " << real_part << "-" << imaginary_part << "i" << std::endl;
  }
   return 0;
}