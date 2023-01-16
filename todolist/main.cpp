#include<iostream>
#include<string>
#include "16todo.h"
#include "todo.cpp"

using namespace std;

bool addtoList(string description, int priority , string dueDate);
bool getNextItem(MyToDo &mytodo);
bool getByPriority(MyToDo matches[100], int search);
void printToDo();

int main(){
    int choice = 0;
    char nextmove = 'y';

      while('y' == nextmove){
        cout << "This will keep things you need to do! " << endl;
        cout << "What would you like to do? " << endl;
        cout << "[1]-> Add to my To Do List  " << endl;
        cout << "[2]-> Display the next item in my list " << endl;
        cout << "[3]-> Search for activies of a certain priority  " << endl;
        cout << "[4]-> Print Out my entire list  " << endl;

        cin >> choice;
        if(choice == 1){
            string description;
            int priority;
            string dueDate;
            

            cout << "what is description of the activity? " << '\n' ;
            cin.ignore();
            getline(cin,description);
            cout << "How urgent is this? (1-5) 1 for not really important , 5 for very important " << endl;
            cin >> priority;
            cout << "When is the due date? is day/month format" << endl;
            cin >> dueDate;

            addtoList(description,priority,dueDate); 
        }
        else if (choice == 2){
            MyToDo y;

            getNextItem(y);
            cout << "Description: " << endl;
            cout << "Priority: " << endl;
            cout << "Due Date: " << endl;
        }
        else if (choice == 3){

            struct MyToDo matches[100];
            int search = 0;
            cout << "Enter a priority level to search for 1-5 " << endl;
            cin >> search;
            getByPriority(&matches[100], search);
            for(int i=0;i<10;i++){
                    cout << "Description: " << matches[i].description << endl;
                     cout << "Priority: " << matches[i].priority << endl;
                      cout << "Due Date: " << matches[i].dueDate << endl;  
            }
        }
        else if(choice == 4){
            printToDo();
        }
        else {
            cout << "That was an incorrect choice! " << endl;
        }
        cout << "would you like to keep doing again> y for Yes" << endl;
        cin >> nextmove; 
      }  
    cout << "Good job Keep Yourself on Schedule! " << endl;
    return 0;
}

