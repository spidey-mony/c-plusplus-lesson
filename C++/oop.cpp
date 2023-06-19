#include<iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;

class AbstractEmployee{   // this is call Abstraction 
	virtual void AskForPromotion()=0; // this is Pure virtual void
};

class employee:AbstractEmployee {
// this called access modifier 
     	private:
		string Name; // this is Attribute
		string Company; // this is Attribute 
		int Age;

		public:  // How to access Private Modifier and its called Encapsulation!
			void setName(string name){
				Name = name;
			}
			string getName(){
				return Name;
			}
			void setCompany(string company){
				Company = company;
			}
			string getCompany(){
				return Company;
			}
			void setAge(int age){
				Age = age;
			}
			int getAge(){
				return Age;
			}
	void introduce(){  		// this is method 
		cout << " Name -  " << Name << endl;
		cout << " Company -  " << Company << endl;
		cout << " Age -  " << Age << endl;
 }
 class FavProgramming:public employee{
		public:
		string ProgrammingLanguage;
};
	 employee (string name, string company , int age){ 	// this is constructor with parameters
	 	Name = name;
		Company = company;
	    Age = age;	
	}
	void AskForPromotion(){   // declare function for Abstraction Pure!
		if (Age > 30)
			cout << "You Got Promoted!" << endl;
		else 
		 	cout << "Sorry, No Promotion for you!" << endl;
	}
};
int main(void){
	// this is how to use constructor
	employee mr1 = employee("Mony","HACKING-COMPANY",19);
	mr1.introduce();
	employee mr2 = employee("Pisey","Beauty-Store",32);
	mr2.introduce();
	// How to Use Encapsulation 
	cout << mr1.getName() << " " << mr1.getCompany() << " " << mr1.getAge() << endl; // how to print values
	mr1.AskForPromotion();
	mr2.AskForPromotion();
	
	return 0;
}
