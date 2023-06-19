#include <iostream>
using namespace std;

struct StudentResult {
    int id;
    string name;
    char gender;
    float *score;
};

int main() {
    float scores[] = { 85.5, 90.0, 76.0 };
    StudentResult stu = { 1, "John", 'M', scores };
    StudentResult *pStu = &stu;

    // Example 1: using "*stu.score"
    cout << "Example 1: " << *stu.score << endl;

    // Example 2: using "pStu->score"
    cout << "Example 2: " << pStu->score << endl;

    // Example 3: using "(*pStu).score"
    cout << "Example 3: " << (*pStu).score << endl;

    // Example 4: using "*pStu->score"
    cout << "Example 4: " << *pStu->score << endl;

    // Example 5: using "*(*pStu).score"
    cout << "Example 5: " << *(*pStu).score << endl;

    return 0;
}