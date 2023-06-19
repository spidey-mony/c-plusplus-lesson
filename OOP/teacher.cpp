#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
using namespace std;
class teacher {
  private:
   char name[30];
   char subj[30];
   float hour,rate,salary;
  public:
   teacher(const char []="NULL",const char []="NULL",float=0.0 ,float=0.0 );
   float findSalary();
   float getSalary();
   char *getName();
   void input();
   void output();
};
teacher::teacher(const char name[],const char subj[],float hour, float rate)
: hour(hour),rate(rate) {
  strcpy(this->name,name);
  strcpy(this->subj,subj);
  salary=findSalary();
}
float teacher::findSalary(){
  return hour*rate;
}
float teacher::getSalary(){
  return salary;
}
char *teacher::getName(){
  return name;
}
void teacher::input(){
  cout <<"input teacher name    : ";
  cin.getline(name,30);
  cout <<"input teacher subj    : ";
  cin.getline(subj,30);
  cout <<"input teachcer hour   : ";
  cin>>hour;
  cout <<"input teacher rate    : ";
  cin>>rate; cin.sync();
  salary=findSalary();
}
void teacher::output(){
  cout <<left <<fixed<<setprecision(2) 
       <<setw(13)<<name<<setw(10)<<subj<<setw(10)<<hour
       <<setw(10)<<rate <<salary <<endl;
}
void inputTeacher(teacher *t,int n) {
  cout <<"input " << n << " teachers "<<endl;
  for(int i=0;i<n; ++i){
    cout <<"teacher # "<<i+1 <<endl;
    cout <<string(50,'-') <<endl;
    t[i].input();
    cout <<endl;
  } 
    
  cout <<endl;
}
void outputTeacher(teacher *t,int n) {
   for(int i=0;i<n; ++i) 
   t[i].output();
  cout <<endl;
}
float totalSalary(teacher *t, int n) {
  float total=0.0;
  for(int i=0;i<n; ++i) {
    cout <<left <<fixed<<setprecision(2) 
         <<setw(15)<<t[i].getName()<<t[i].getSalary() <<endl;
    total+=t[i].getSalary();
  }
  cout <<string(50,'-') <<endl;
  return total;
}
void searchTeacher(teacher *t,int n) {
  char tname[30];
  char c;
  bool found;
 do{
   cout <<"Searching a teacher name  ....."<<endl;
  cout <<"input a search teacher name ? ";
  if(cin.peek()=='\n') 
     cin.sync();
  cin.getline(tname,30);
  found=false;
  for(int i=0;i<n; ++i) 
   if(strcmp(tname,t[i].getName())==0){
     found=true;
     t[i].output();
   }
  if(!found)
    cout<<">>Sorry a teacher name :" << tname <<"  does not exist..."<<endl;
    cout <<">> please try again!!" <<endl;
    while(cout <<"searching another name(y/n) ? ",
          strchr("yn",c=cin.get())==NULL) cin.sync();
  
 } while(c=='y' || c=='Y');
}
int ascmp(float a,float b){
  return a>b;
}
int dscmp(float a,float b){
  return a<b;
}
void myswap(teacher &a, teacher &b) {
  teacher t;
  t=a;
  a=b;
  b=t;
}
void sortSalary(teacher *t,int n, int (*cmp)(float ,float )) {
  for(int i=0;i<n-1; ++i) 
    for(int j=i+1;j<n; ++j) 
      if((*cmp)(t[i].getSalary(),t[j].getSalary()))
       {
          myswap(t[i],t[j]);
     }
  cout<<"Completed...........\n";
}
void mainmenu() {
  cout <<"========main menu============"<<endl;
  cout <<"[0] number of teacher\n";
  cout <<"[1] input teacher   \n";
  cout <<"[2] output teacher  \n";
  cout <<"[3] total salary    \n";
  cout <<"[4] search teacher  \n";
  cout <<"[5] sort teacher    \n";
  cout <<"[x] exit program    \n";
  cout <<"============================="<<endl;
}
void sortmenu() {
  cout <<"=========sort salary menu========="<<endl;
  cout <<setw(4)<<""<<"[a]scending \n";
  cout <<setw(4)<<""<<"[d]dscending\n";
  cout <<setw(4)<<""<<"[b]ack\n";
  cout <<"=================================="<<endl;
}
int main(){
  char choice;
  int n=0;
  teacher t[100];
  while(1) {
    mainmenu();
    cout <<">>> please select : "; cin.sync();
    cin.get(choice); 
    switch(choice){
      case '0':{
        cout <<"input number of teachers : ";
        cin>>n; 
        break;
      }
      case '1': {
        cin.sync();  
        inputTeacher(t,n);
        break;
      }
      case '2':{
        outputTeacher(t,n);
        break;
      }
      case '3':{
       float total=totalSalary(t,n);
       cout <<"Total Salary: " << total <<endl;
        break;
      }
      case '4':{
        searchTeacher(t,n);
        break;
      }
      case '5':{
        int b=1,invalid;
        char s;
        while(b) {
          sortmenu(); invalid=0;
          cout <<"select sort :";
          cin.sync();
          s=cin.get(); 
          
          switch(s){
            case 'a':{
              cout <<"Sorting Salary by Asc...."<<endl;
              sortSalary(t,n,ascmp);
              //cout <<"Completely......"<<endl;
              break;
            }
            case 'd':{
              cout <<"Sorting Salary by Asc...."<<endl;
              sortSalary(t,n,dscmp);
              //cout <<"Completely......"<<endl;
              break;
            }
            case 'b':{
              b=0;
              break;
            }
            default:{
              cout <<">>>Sorry invalid option" <<endl;
              invalid=1;
            //  break;
            }
             
          }
          if(b!=0 && invalid==0){
            cout <<"After sorting........"<<endl;
             outputTeacher(t,n);
             cout <<string(50,'-') <<endl;
            }
        }
          break;  
      }
      case 'x':{
         system("cls");
         cout <<"Bye Bye " <<endl;
         exit(0);
        //break;
      }
    }
     system("pause");
     system("cls");
  }
}