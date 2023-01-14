#include<iostream>

int main(){
    // ternary operator ?: = replacement to an if/else statements
    // condition ? expression 1 : expression 2;
    // expression 1 = if 
    // expression 2 = else
    // int grade = 100;


//  grade >= 60 ? std::cout << "Congrats, You Passed!" : std::cout << "Sorry, You Failed!" ;
    int number = 8;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "Even";

    return 0;
}
