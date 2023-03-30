#include<iostream>
#include<cstring>
using namespace std;

class product{
    private:
    char name[20];
    int qty;
    float price,amount;

    public:
    product();
    product(const char[],int,float);
    void setName(const char name[]){
        strcpy(this->name,name);
    }
    char* getName(){
        return name;
    }
    void setQty(int qty){
        this->qty = qty;
    }
    int getQty(){
        return qty;
    }
    void setPrice(float price){
        this->price = price;
    }
    float getPrice(){
        return price;
    }
    void setAmount(float amount){
        this->amount = amount;
    }
    float getAmount(){
        return amount;
    }
    void print(){
        cout << "Name:" << name << "," << " Qty:" << qty << "," << " Price:" << price << "$" << "," << " Amount:" << amount << "$" << endl; 
    }
};
product::product(){
    cout << "This is default constructor()" << endl;
    strcpy(name,"No Name");
    qty=0;
    price=amount=0.0;
}
product::product(const char name[],int qty,float price ){
    cout << "This is constructor with 4 parameters()" << endl;
    strcpy(this->name,name);
    this->qty = qty;
    this->price = price;
    amount = qty * price;
}
int main(void){
    product p1;
    product p2("Anchor Beer",20,10);
    p1.print();
    p2.print();
    return 0;
}