#include<iostream>
using namespace std;

class Base{
    private:
        int prt;
    protected:
        int pro;
    public:
        int pub;
    void setprt(int pv){  // how to access private data members as a private specifier 
        prt=pv;
    }
    int getprt(){  // this too !!
        return prt;
    }
        // int getPvt(){
        //     return prt;
        // }
};
// class Derived is inherited from class Base with Private inheritance specifier 
class Derived : private Base{ 
    private:    // cannot inherit private member from base class 
                // could possibly inherit these twos  // base::pro
                 // base::pub
    public:
        Derived(int pv,int pr, int pu){  // constructor of Derived class which called child class. 
            Base::setprt(pv);
            pro=pr; // inherited data member from base class that named Base class.
            pub=pu;
        }
    void setpro(int pr){
        pro=pr;
    }
    void setpub(int pu){
        pub=pu;
    }
    void setPrt(int pv){  // Use Base:: (scope resolution) in case there are too many class that has the same class name
        Base::setprt(pv);
    }
    int getPrt(){
        return Base::getprt();
    }
    void print(){
        cout << "pvt= " << Base::getprt() << " pro = " << pro << ", pub =" << pub << endl;
    }
    void input(){
        cout << "input pro? ";cin >> pro;
        cout << "input pub? "; cin>> pub;
    }
};

int main(){
    Derived dr(2,5,10);
    cout << "pvt = " << dr.getPrt() << endl;
    dr.print();
    dr.setPrt(30);
    dr.setpro(10);
    dr.setpub(20);
    dr.print();
    cout << string(40,'-') << endl;
    dr.input();
    dr.print();
    return 0;
}