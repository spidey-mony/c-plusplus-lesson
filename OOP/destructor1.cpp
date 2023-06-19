#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

class emp {
private:
    char *name;
    float salary;
public:
    emp(const char *nm = " ", float sl = 0.0);
    ~emp();
    char *getname();
    float getsalary();
    void input();
    void print();
};

emp::emp(const char *nm, float sl) {
    name = new char[strlen(nm) + 1];
    strcpy(name, nm);
    salary = sl;
}

emp::~emp() {
    delete[] name;
    cout << "Calling ~emp()" << endl;
}

char *emp::getname() {
    return name;
}

float emp::getsalary() {
    return salary;
}

void emp::input() {
    char name1[30];
    cout << "Input Name?";
    cin.getline(name1, 30, '\n');
    delete[] name;
    name = new char[strlen(name1) + 1];
    strcpy(name, name1);
    cout << "Input salary?";
    cin >> salary;
    cin.sync();
}

void emp::print() {
    cout << left << fixed << setprecision(2) << setw(15) << name << setw(10) << salary << endl;
}

int main() {
    emp e1("chan dara", 2000.00);
    emp e2("Heng Heng", 150.00);

    e1.print();
    e2.print();
    cout << string(40,'-') << endl;
    cout << "input e1:\n";
    e1.input();
    cout << "input e2:\n";
    e2.input();
    e1.print();
    e2.print();
    emp *ep = new emp();
    cout << "input ep\n";
    ep->input();
    ep->print();
    delete ep;
    return 0;
}