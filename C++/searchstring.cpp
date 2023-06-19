#include<iostream>
#include<cstring>
using namespace std;
	
int main(){
	// cannot use string s="JASASD"; 
	char s[]="Hello C++ Lang";
	char c='e';
	char *p=NULL;	
	p=strchr(s,c);   // strchr is exist in include<cstring>
	if(p!=NULL){
	cout<< "P = " << p << endl;
}
	else{
		cout << "P is NULL ";
}
	cout << endl;
	return 0;
}
