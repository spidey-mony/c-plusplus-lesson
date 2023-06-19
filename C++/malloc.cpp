#include<iostream>
#include<cstdlib>
using namespace std;

char *getstring(){
	char *s;
	s=(char *)malloc(30*sizeof(char));
	cout << "Input String S ?"; 
	cin.getline(s,30);
	return s;
}
int main(){
	char *myPtr = NULL;
	myPtr = getstring();
	cout << "Your String is = " << myPtr << endl;
	free(myPtr);
	return 0;
}
