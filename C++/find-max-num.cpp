#include<iostream>
using namespace std;

void max(){
	int ans;
	if(a1>a2 && a1>a3){
		ans = a1;
	}
	if(a2>a1 && a2>a3){
		ans = a2;
	}
	else {
		ans = a3;
	}
}

int main(){
	int a1,a2,a3,ans;
	cout << "Enter Number :  " << endl;
	cin >> a1 >> a2 >> a3;
	max();
	cout << "Max Number Is: " << ans << endl;
	return 0;
 }
 
