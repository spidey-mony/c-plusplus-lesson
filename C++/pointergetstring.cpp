#include<iostream>
#include<cstring>
using namespace std;

char *getstring(){
	static char s[20];
	cout << "Input String S ? ";
	cin.getline(s,20);
	return s;
}
int *getnumber1(int x){
		cout << "Input any number ? ";
		cin>>x;
		return &x; 
}
int sum(int n){
	int s;
	s=0;
	while(n>0){
		s+=n;
		--n;
	}
	return s;
}
int static_sum(int n){
	static int s=0;
	while(n>0){
		s+=n;
		--n;
	}
	return s;
}
int main(){
//	cout << "Sum " << '\t' << "Static_Sum  " << endl;
//	cout << string(40,'-')<<endl;
//	for(int i=1;i<=10;++i)
//	cout << "Sum" << "(" << i << ")" << sum(i) << '\t' <<'\t'<<"Static_SUM" << "(" << i <<")"<< static_sum(i) << endl;
//	cout << string(40,'-') << endl;
	char *myPtr = NULL;
	myPtr = getstring();
	if(myPtr == NULL)
	cout << "myPtr is NULL!" << endl;
	else
	cout << "myPtr = " << myPtr << endl;
	return 0;
}
