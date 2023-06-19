#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class emp {
private:
   char* name;
   float sell_amount, salary;

public:
   emp(const char* nm = "null", float sell_amount = 0.0);
   emp(const emp& right); // copy constructor
   ~emp();
   void setname(const char* nm);
   void print();
   float findsalary();
};

float emp::findsalary() {
   if (sell_amount >= 1000.00)
      return sell_amount * 0.05 + 100;
   return sell_amount * 0.05;
}

emp::emp(const char* nm, float sell_amount)
   : sell_amount(sell_amount) {
   name = new char[strlen(nm) + 1];
   strcpy(name, nm);
   salary = findsalary();
}

emp::emp(const emp& right)
   : sell_amount(right.sell_amount), salary(right.salary) {
   name = new char[strlen(right.name) + 1];
   strcpy(name, right.name);
}

emp::~emp() {
   delete[] name;
}

void emp::setname(const char* nm) {
   delete[] name;
   name = new char[strlen(nm) + 1];
   strcpy(name, nm);
}

void emp::print() {
   cout << fixed << setprecision(2);
   cout << left << setw(12) << name << setw(10) << sell_amount << findsalary() << endl;
}

int main() {
   emp e1("sok heng", 800.00);
   emp e2(e1); // default copy
   e1.print();
   e2.print();
   cout << "set new name to e1\n";
   e1.setname("sok chandara");
   e1.print();
   e2.print();
   return 0;
}
