#include<iostream>
#include<cmath>
#include<iomanip>
#include<stdio.h>
#include<sstream>
using namespace std;

class point{
    private:
    int x,y;
    public:
        point(){
           // cout << "Calling default constructor \n";
            x = y = 0;
        }
        void setx(int x){  
            this->x = x;
        }
        void sety(int yy){
            y = yy;
        }
        int getx(){
            return x;
        }
        int gety(){
            return y;
        }
        void input(){
            cout << "------ Input point -----\n";
            cout <<"Input X=" ;
            cin >> x;
            cout << "Input Y=";
            cin >> y;
        }
        void print(){
    
            cout<< "Point (x=" << x << ",y=" << y << ")" << endl;
        }
  string to_string()const{
        stringstream ss;
        ss << "(" << x << "," << y << ")";
        return ss.str();
    }
};
	void show(){
		cout << left << setw(10) << "p1(x,y)" << setw(10) << "p2(x,y)" << "Distance" << endl;
		cout << string(50,'-') << endl;

}
int main(){
	point p1[5],p2[5];
	int x1[5]={5,4,7,9,10};
	int y1[5]={7,8,10,12,21};
	//..
	int x2[5]={7,10,9,12,16};
	int y2[5]={8,9,12,21,20};
	for(int i=0;i<5;++i){
		p1[i].setx(x1[i]);
		p1[i].sety(y1[i]);
		//..
		p2[i].setx(x2[i]);
		p2[i].sety(y2[i]);
	}
	show();
	double distance;
	// char s1[20],s2[20];
    stringstream ss;
	for(int i=0;i<5;++i){
		// sprintf(s1,"(%d,%d)",p1[i].getx(),p1[i].gety()); 
		// sprintf(s2,"(%d,%d)",p2[i].getx(),p2[i].gety());	
    ss << p1[i].to_string();
    string s1 = ss.str();
    ss.str("");
    ss << p2[i].to_string();
    string s2 = ss.str();
    ss.str("");
		distance = sqrt(pow(p2[i].getx()-p1[i].getx(),2)+ pow(p2[i].gety()-p1[i].gety(),2));
		// cout << fixed << setprecision(2);  // use this to kat kbeas 2 ktong kroy jenh
		cout << left << setw(10) << s1 << setw(10) << s2 << distance << endl;
}
	//.......................................
//	cout << "5 array object p1" << endl;
//	for(int i=0;i<5;++i){
//		cout << "P1[" << i << "]";
//		p1[i].print();
//	}
//		cout << endl;
//			cout << "5 array object p2" << endl;
//	for(int i=0;i<5;++i){
//			cout << "P2[" << i << "]";
//				p2[i].print();
//	}
	///.....................
//    cout << "object p1\n";
//    p1.input();
//    p1.print();
//    cout << "object p2\n";
//    p2.print();
//    point p[10];
//    cout << "10 array object of point\n";
//    for(int i=0;i<10;++i)
//        p[i].print();
//        cout << endl;
    return 0;
}
