#include<iostream>
using namespace std;

class fruit{
	public:
		string name;
		int quantity;
		
	void say(){
		cout << "You ate " << quantity << " " << name << "!" << endl;
	}
};

int main(){
	fruit f;
	f.name = "Apple";
	f.quantity = 2;
	f.say();
	return 0;	
}

