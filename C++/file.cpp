#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!" << endl;
  MyFile << "Hello My name is Yun Mony And I'm almost 20years old this year!" << endl;

  // Close the file
  MyFile.close();
  
  // declare a variable as a string to read file
  string MyText;
  
  fstream MyReadFiles("filename.txt");
  while(getline(MyReadFiles,MyText)){
  	cout << MyText << endl ;	
  }
  MyReadFiles.close();
}
