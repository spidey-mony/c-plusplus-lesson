#include<iostream>
#include<vector>

 
// typedef std::vector<std::pair<std:: string, int >> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
//otherwise this is another way that recommended 
using text_t = std::string;
using number_t = int;
int main(){
    text_t text = "Hello This is Typedef";
    std::cout << text << std::endl;
    number_t number = 19;
    std::cout << number << std::endl;
    return 0;
}