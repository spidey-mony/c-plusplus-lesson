#include<iostream>
#include<cstring>
using namespace std;

char *getstring(){
	static char s[20];
	cout << "Input String S ? ";
	cin.getline(s,20);
	return s;
}
int *getnumber1(){
		int x;
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
int *getmax_elm(int *arr,int n){
	int *max_elm;
	max_elm=&arr[0];
	for(int i=1;i<n;++i){
		if(*max_elm<arr[i])
		max_elm=&arr[i];
	}
	return max_elm;
}
int main(){
//	cout << "Sum " << '\t' << "Static_Sum  " << endl;
//	cout << string(40,'-')<<endl;
//	for(int i=1;i<=10;++i)
//	cout << "Sum" << "(" << i << ")" << sum(i) << '\t' <<'\t'<<"Static_SUM" << "(" << i <<")"<< static_sum(i) << endl;
//	cout << string(40,'-') << endl;
//	char *myPtr = NULL;
//	myPtr = getstring();
//	if(myPtr == NULL)
//	cout << "myPtr is NULL!" << endl;
//	else
//	cout << "myPtr = " << myPtr << endl;
    int arr[]={19,99,130,51,18};
    int n = 5;
	int *maxp;
	for ( int i=0;i<5;++i){
		cout << arr[i] << endl;
	}
	maxp=getmax_elm(arr,n);
	for(int i =0;i<5;i++){
	cout << "Address &a = " <<"[" << i << "]" << &arr[i] << endl;
}
	cout << "Max element is : " << *maxp << endl;
	cout << "Max element is : " << maxp << endl;
	return 0;
}
