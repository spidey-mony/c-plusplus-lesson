#include<iostream>
#include<iomanip>
using namespace std;


int main(){
	// cout << right << setfill('.');
	// cout << fixed << setprecision(5);
	cout << setw(8) << "ID" << setw(15) << "Product" << setw(10) << "QTY" << '\n';
	cout << string(33,'_') << endl;
	cout << setw(8) << "100" << setw(15) << "Anchor Beer" << setw(10) << 100 << endl;
	cout << setw(8) << "20" << setw(15) << "ABC Beer"<<setw(10) << 7 << endl;
	cout << setw(8) << "100" << setw(15) << "Fanta Juice" << setw(10) << 20 << endl;
	return 0;
}
