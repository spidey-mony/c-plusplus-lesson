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
  STD st;
  cout << "Enter Student ID ? " << endl;
  cin>> st.id;
  cout << "Enter Student Name ? " << endl;
  cin>>st.name;
  cout << "Enter Student Average ? " << endl;
  cin>>st.average;
  st.grade = getGrade(st.average);
  return st;
}
 void printStudent(STD st){
	cout << setw(8) << "Student_ID" << setw(10) << "Student_Name" << setw(15) << "Average" << setw(15) << "Grade" << endl;
    cout << setw(8) << st.id << setw(10) << st.name << setw(15) << st.average << setw(15) << st.grade << endl;
}
void inputStudent(STD *st,int n) {
	STD st1[n]; 
	for (int i = 0; i < n; i++) {
 	 cout << "Enter details of student " << i+1 << endl;
	  st[i] = getStudent(); 
}
}
void outputStudent(STD *st,int n) {
 	for (int i = 0; i < n; i++) {
 	 cout << "Details of students " << i+1 << endl;
 	 printStudent(st[i]);
} 
}
int main(){
	int n;
	STD students[n];
	cout << "Enter number of students ? " ;
	cin >> n;
	inputStudent(students,n);
	outputStudent(students,n);
	return 0;
}