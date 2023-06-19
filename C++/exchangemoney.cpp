#include<iostream>
using namespace std;

int main(){
	int option;
	float riel,usd,baht;
	cout << "-----Choose Option To Exchange Money(1-6)-----" << endl;
	cout << "[1].Riel to USD " << endl;
	cout << "[2].USD to Riel " << endl;
	cout << "[3].USD to Baht " << endl;
	cout << "[4].Riel to Baht " << endl;
	cout << "[5].Baht to USD " << endl;
	cout << "[6].Baht to Riel " << endl;
	cout << "[7].Exit Program" << endl;
	cout << "Enter Option: " << endl;
	cin >> option;
	switch(option){
		case 1:
			cout << "Enter Money(RIEL->USD): " << endl;
			cin >> riel;
			usd = riel/4100;
			cout << "USD = " << usd << "$" << endl;
			break;
		case 2:
			cout << "Enter Money(USD->RIEL): " << endl;
			cin >> usd;
			riel = usd*4100;
			cout << "Riel = " << riel << "Riel" << endl;
			break;
		case 3:
			cout << "Enter Money(USD->BAHT): " << endl;
			cin >> usd;
			baht = usd*34.58;
			cout << "USD = " << baht << "Baht" << endl;
			break;
	}
	
	return 0;
}