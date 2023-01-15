#include<iostream>

  double num1,num2;
double addition(){
    return num1 + num2;
}
double subtraction(){
    return num1 - num2;
}
double multiplication(){
    return num1 * num2;
}
double division(){
    return num1 / num2;
}
  char op;
int main(){
    double result;
    std::cout << "Input Arithmetic(+ , - , * , / )" << '\n';
    std::cin >> op;
    std::cout << "Input Num1: " << std::endl;
    std::cin >> num1;
    std::cout<<"Input Num2: " << std::endl;
    std::cin >> num2;
    switch (op){
        case '+':
            result = addition();
            std::cout << result << std::endl;
            break;
        case '-':
            result = subtraction();
            std::cout << result << std::endl;
            break;
        case '*':
            result = multiplication();
            std::cout << result << std::endl;
            break;
        case '/': 
            result = division();
            std::cout << result << std::endl;
            break;      
        default:
            std::cout << "Invalid Operators!" << std::endl;
            break;
    }
    return 0;
}