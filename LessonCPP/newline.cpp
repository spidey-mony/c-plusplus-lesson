#include<iostream>
#include<cstdio>


int main(){
    int x,y,z;
    char c;
    std::cout << "Input X ? " << '\n';
    std::cin >> x;
    std::cout << "Input Y ? " << '\n';
    std::cin >> y;
    std::cout << "Input Z ? " << '\n';
    std::cin >> z;
     std::cout << "Input char A to Z ? " << '\n';
    std::cin >> c;

    while(c=getchar()!='\n');
    std::cout << "Press Enter: " << std::endl;
    std::cin.get();
    std::cout << "X = " << x << "   Y = " << y << "   Z = " << z << "   Char = " << c << std::endl;

    return 0;
}