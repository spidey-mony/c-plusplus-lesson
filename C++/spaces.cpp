#include<iostream>
using namespace std;

/* int ConvertSpace(char s[],char space, char newline){
	int i=0;
	int b=0;
	while(s[i]!='\0'){
		if(s[i]!=space && b==1){
			s[i-1]=newline;
			b=0;
		}else if(s[i]==space){
			b=1;
		}
		++i;
	}
}

int main(){
	char words[255];
	cout << "Input Words With Long Space" << endl;
	cin.get(words,255);
	ConvertSpace(words,' ','\n');
	cout << words;
	return 0;
}
*/ 

void printword(const char s[]){
	for(int i=0;s[i];++i){
		if(s[i]== ' ' && s[i+1]!=' '){
			cout << endl;
		}
		else if(s[i]!= ' '){
			cout << s[i];
		}
	}
}
int main(){
	char words[50];
	cout << "Input any words with long spaces" << endl;
	cin.get(words,100);
	printword(words);
	return 0;
}
