#include <iostream>
#include <iomanip>
using namespace std; 
typedef struct  {
  int id;
  char name[20];
  float average;
  char grade;
} STD;
char getGrade(float average) {
	if(average >= 95.00) 
	return 'A';
	else if(average >- 85.00)
	return 'B';
	else if(average >=75.00)
	return 'C';
	else if(average >=65.00)
	return 'D';
	else if (average >=50.00)
	return 'E';
	else 
	return 'F';
}
STD getStudent(){
  STD s;
  cout << "Enter Student ID ? " << endl;
  cin>> s.id;
  cout << "Enter Student Name ? " << endl;
  cin>>s.name;
  cout << "Enter Student Average ? " << endl;
  cin>>s.average;
  s.grade = getGrade(s.average);
  return s;
}

void printStudent(STD st){
 // print a record of student
}
void inputStudent(STD *st,int n) {
  // input n records of student 
}
void outputStudent(STD *st,int n) {
 // print n records of student  
}
STD *getMaxAverageAddr(STD *st,int n) {
  // return maxaverage address of a record
}
void search(STD *st,int ) {
  // searching name of a student ....
}
void sort_asc(STD *st,int n) { 
  // sorting average of n students by asc..
  
}
void sort_dsc(STD *st,int n) {
  // sorting average of n students by dsc   
}
void insertStudentAtPos(STD s,int p, STD *st,int &n){
  
}
