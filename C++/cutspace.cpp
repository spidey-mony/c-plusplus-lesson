#include <iostream>
#include<string.h>
using namespace std;

void removeSpaces(char str[])
{
	int count = 0;
	for(int i = 0; str[i]; i++){
		if (str[i] != ' '){
		str[count]=str[i];
		count++;   // you can use str[count++] = str[i]; instead
	}
	str[i]='\0';
}

}
int main()
{
	char str[] = "      HELLO C++ PROGRAMMING";
	removeSpaces(str);
	cout << str << endl;
    cout << "Length of the Str is: " <<  strlen(str);
	return 0;
}
