#include<iostream>
#include<string.h>
using namespace std;
class student{
	public:
		int age;
		string firstname;
		string lastname;
};
class subject: public student{
	 public:
	 string subject1;
	 string subject2;
};
int main(){
	subject sb1;
	student s1;
	s1.firstname("Yun");
	s1.lastname("Mony");
	
	return 0;
}