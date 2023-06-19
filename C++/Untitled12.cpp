#include<iostream>
using namespace std;


int main(){
	int myVariable = 10;
	while(true){
		if(myVariable >= 20) break;
		cout << myVariable << endl;
		myVariable += 2;
	} 
	return 0;
}