#include<iostream>
#include<cmath>

int main(){
    double a;
    double b;
    double c;

    std:: cout << "Enter Value Of A: " << '\n';
    std:: cin >> a;
    std:: cout << "Enter Value Of B: " << '\n';
    std:: cin >> b;
    c = sqrt(pow(a,2)+pow(b,2));
    std::cout << "SQRT A2,B2 Of C is: "<< c << '\n'; 
    return 0;
}