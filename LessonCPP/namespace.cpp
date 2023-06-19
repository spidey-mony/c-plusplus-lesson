#include<iostream>


namespace First{
    int x;
    void read(){
       
        while(!x){
            x=0;
             std::cout<<"Input Value x ? " << std::endl;
             std::cin>>x; 
        }
    }
    void output(){
        std::cout << "Value x = " << x << '\n';
    }
};
int main(){
    First::read();
    First::output();

    return 0;
}

