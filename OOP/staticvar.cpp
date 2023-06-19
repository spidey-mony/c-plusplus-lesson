#include<iostream>
using namespace std;

// syntax
class obj{
	private:
	static int countobj; // static
	int noncountobj=0; // non static
	public:
	obj();
	~obj();
	static int getcountobj();
	int getnoncountobj();
};
	// assign value to static countobj
	int obj::countobj = 0; // initialize value
	//.....
	obj::obj(){
	++countobj;
	++noncountobj;
	cout << "Starting countobj=" << countobj << endl;
	cout << "Starting non countobj= " << noncountobj << endl;
}
	obj::~obj(){
	if(countobj>0)
	cout << "Destroying by count obj :" << countobj-- << endl;
	if(noncountobj>0)
	cout << "Destroying by non count obj: " << noncountobj-- << endl;
}
	int obj::getcountobj(){
	return countobj;
}
	int obj::getnoncountobj(){
	return noncountobj;
}
	int main(){
	obj obj1,obj2,obj3,obj[5]; // total is 8 obj
	cout <<string(50,'-')<< endl;
	cout <<"Total objs= " << obj::getcountobj() << endl;
    cout << "Total obj by obj1=" << obj1.getcountobj() << endl;
    cout << "Total obj by obj2=" << obj2.getcountobj() << endl;
    cout << "Total obj by obj3=" << obj3.getcountobj() << endl;
	system("pause");  // waiting for user to press any key to continue the process of code.
    cout << "Total non count obj1= " << obj1.getnoncountobj() << endl;
    cout << "Total non count obj2= " << obj2.getnoncountobj() << endl;
    cout << "Total non count obj3= " << obj3.getnoncountobj() << endl;
	return 0;
}