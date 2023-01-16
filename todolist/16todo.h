
// create headerfile of todo.cpp

#ifndef TODO
#define TODO

using std::string;
using std::int16_t;



//  declared static integer which means it's always increment the value!

static int positionInList = 0;
static int listSize = 0;

// make struct MyToDo

struct MyToDo{
    string description;
    int priority;
    string dueDate;
};

#endif