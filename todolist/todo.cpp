#include<iostream>
#include<string>
#include "16todo.h"  // called headerfile 

using namespace std;
struct MyToDo ToDoList[100]; // since we've declared struct in 16todo.h already, so we called and named the struct to use!


bool addtoList(string description, int priority , string dueDate){

    if(listSize<101){
        MyToDo y = {description, priority, dueDate};
        ToDoList[listSize] = y;
        listSize++;
        return true;
    }
    else {
        return false;
    }
}
void getNextItem(MyToDo &mytodo){

    if(listSize == 0){
        return false;
    }
    else if (listSize < positionInList){
        positionInList = 0;
        mytodo = ToDoList[positionInList];
        positionInList++;
    }
    else{
        mytodo = ToDoList[positionInList];
        positionInList++;
    }
}
bool getByPriority(MyToDo matches[100], int search){
    int count = 0;
    for(int i = 0; i< listSize; i++){
        if(ToDoList[i].priority == search){
            matches[count] = ToDoList[i];
            count++;
        }
    }
    return true;
}
void printToDo(){
    for(int i=0;i<listSize;i++){
        cout << ToDoList[i].description << endl;
        cout << ToDoList[i].priority << endl;
        cout << ToDoList[i].dueDate << endl;
        cout << " " << endl;
        
    }
}