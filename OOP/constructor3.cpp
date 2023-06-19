#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class product{
    private:
    char name[20];
    int qty;
    float price,amount;

    public:
    product();    // default constructor
    product(const char[],int,float); // constructor with 4 arguments
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
    void output(){
        cout << left << fixed << setprecision(2);
        cout << setw(13) << name << setw(10) << qty << "$" << setw(10) << price << "$" << setw(8) << amount << endl; 
    }
    void input(){
        cout << "Input Name?" << endl;
        cin.getline(name,20);
        cout << "Input Qty?" << endl;
        cin >> qty;
        cout << "Input Price?" << endl;
        cin >> price;
        cin.sync();
        setName(name);
        setQty(qty);
        setPrice(price);
        setAmount(qty * price);
    }
};
product::product(){
    cout << "This is default constructor()" << endl;
    strcpy(name,"N/A");
    qty=0;
    price=amount=0.0;
}
product::product(const char name[],int qty,float price){
    cout << "This is constructor with 4 parameters()" << endl;
    strcpy(this->name,name);
    this->qty = qty;
    this->price = price;
    amount = qty * price;
}
int main(void){
    // const int n=3;
    product p1[3];  
    product p2("Anchor Beer",20,10);
    product p3[] = {{"Coca Cola",13,8},{},{"Vatanac Beer",23,13}};
    // p1.print();
    p2.output();
    for(int i=0;i<3;++i){
        p3[i].output();
    }
    for(int i=0;i<3;++i){
        p1[i].input();
    }
      for(int i=0;i<3;++i){
        p1[i].output();
    }
    return 0;
}