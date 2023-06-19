#include<iostream>
#include<cstring>
using namespace std;

void replaceString(char ss[], char s , char w){
	for( int i=0;i<strlen(ss);i++)
	if(ss[i]==s)
		ss[i]=w;
}

int main(){
	char name[30];
	char sex;
	int age;
  	cout << "Input Username: " << endl; cin >> name;
  	cout << "Input Sex: " << endl; cin >> sex;
	cout << "Input Age: " << endl; cin >> age;
	replaceString(name,"_","  ");
	cout << "Username is = " << name << endl;
	cout << "Sex is = " << sex << endl;
	cout << "Age is = " << age << endl;
    return 0;
}
