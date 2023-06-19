#include<iostream>
using namespace std;

int getValue(){
	int v;
	int isTrue=1;
	while(isTrue){
		cout<<"Input a value: " << endl;
		cin >> v;
		if(cin.fail()){
			cout<< "Sorry Wrong Data...\n";
			cin.clear();
			cin.ignore(100,'\n');
		}
		else isTrue=0;
	}
	return v;
}
int sum(void){
	int n,s;
	while(n=getValue(),n<=0 || n>=100); s=0;
	while(n>0){
		s+=n;
		--n;
	}
	return s;
}
char getNext(){
	char c;
	do{
		cin.sync();
		cout<< "Next(y/n)?";
		c=cin.get();
	}while(c!='y' && c!='n');
	return c;
}
int main(){
//	getValue();
do{
	int s = sum();
	cout << "The value is : " << s << endl;
	} while(getNext()=='y');
	cout << "Stop using this !!!" << endl;
	return 0;
}
