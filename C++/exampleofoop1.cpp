#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class Person{
	private:
		char name[20];
		char tel[20];
		float salary;
	public:
		void setName(const char name1[]){
			strcpy(name,name1);
		}
		char *getName(){
			return name;
		}
		void setTel(const char tel1[]){
		strcpy(tel,tel1);
		}
		char *getTel(){
			return tel;
		}
		void setSalary(float Salary){
			salary = Salary;
		}
		float getSalary(){
			return salary;
		}
	void input(){
		cout << "Input Name? ";
		cin.getline(name,20);
		cout << "Input Tel? ";
		cin.getline(tel,20);
		cout << "Input Salary? ";
		cin >>salary;
		cin.sync();
	}
};
Person getPerson1(){
	Person obj;
	obj.input();
	return obj;
}
Person getPerson(){
	Person obj;
	char name1[20];
	char tel1[20];
	float salary;
	cout << "Input Name? " ;
	cin.getline(name1,20);
	cout << "Input Tel? ";
	cin.getline(tel1,20);
	cout << "Input Salary? ";
	cin>>salary;
	obj.setName(name1);
	obj.setTel(tel1);
	obj.setSalary(salary);
	cin.sync();
	return obj;
}
void print(Person p){	
	cout << fixed << setprecision(2); // used to show .00 with float variable!
	cout << " Name : " << p.getName() << "  Tel: " << p.getTel() << "  Salary: " << p.getSalary() << "($)" << endl;
}
Person *getAnotherPerson(){
	Person *obj;
	obj = new Person();
	// obj = (person *)malloc(sizeof(person));
	obj->input();
	return obj;
}
void *printAnotherPerson(Person *p){
	cout << fixed << setprecision(2);
	cout << "Name      :" << p->getName() << endl;
	cout << "Tel       :" << p->getTel() << endl;
	cout << "Salary    :" << p->getSalary() << endl;
	return 0;
}
int main(){
	Person p1,p2;
	p1=getPerson();
	print(p1);
	cout << "Input new data object p2" << endl;
	p2=getPerson1();
	cout << "object p2" << endl;
	print(p2);
	Person *ps = NULL;
	cout << "Input person ps: " << endl;
	ps=getAnotherPerson();
	cout << "object ps" << endl;
	printAnotherPerson(ps);
	delete ps;
	return 0;
}
