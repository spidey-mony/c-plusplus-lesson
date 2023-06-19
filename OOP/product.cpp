#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class product{
  private:
   string name;
   int qty;
   float price,amount;
  public:
   product();
   product(string,int ,float);
   float getamount();
   string  getname();
   void input();
   void print();
};
// 
product::product(): name("NA"),qty(0),price(0.0)
{ //strcpy(name,"N/A");
  amount=qty*price;
}
product::product(string name,int qty, float price)
:name(name),qty(qty),price(price)
{
   //strcpy(this->name,name);
   amount=this->qty*this->price;
}
void product::print(){
  cout <<left <<fixed<<setprecision(2)
       <<setw(13)<<name<<setw(10)<<qty<<setw(10)<<price
       <<amount <<endl;
  }
void product::input(){
  cin.sync();
  cout <<"input product name : ";
  getline(cin,name);
  cout <<"input product qty  :";
  cin>>qty;
  cout <<"input product price:";
  cin>>price;cin.sync();
  amount=qty*price;
}
char ask_inform(const char *ask, const char *words){
  char c; cin.sync();
  while(cout <<ask,        
     strchr(words,c=cin.get())==NULL)
       cin.sync();
    return c;
}
float product::getamount()
{
  return amount;
}
string product::getname(){
  return name;
}
void inputProduct(product pr[],int &n){
  int i; char c;
  cout <<"we have  " << n <<" products in list"<<endl;
  if(n!=0){   
    cin.sync();
      c=ask_inform("press <c> continue\n\t<r>estart, press ? ","CrcR");
      if(c=='r' && c=='R')
         i=n=0;  // restart inputting
      else 
      i=n;  // continue inputting
  }
  else i=0; // starting input for first time
  cout <<string(50,'-') <<endl;
  do{
    cout <<"product #"<< i+1 <<endl;
    pr[i].input();
      cout <<string(50,'-') <<endl;
      c=ask_inform("continue(y/n)","ynYN");
    ++i;
    } while(c=='y' && c=='Y');
    n=i;
  cout <<endl;
}
void printProduct(product pr[],int n){
  for(int i=0;i<n; ++i) 
    pr[i].print();
  cout<<endl;
}
product *getMaxAmount(product pr[],int n){
  product *obj;
  obj=&pr[0];
  for(int i=1;i<n; ++i) 
    if(obj->getamount()<pr[i].getamount())
       obj=&pr[i];
  return obj;
}
void menu(){
  cout <<"=======Menu OpTiOn=========="<<endl;
  cout <<"[1] input product \n";
  cout <<"[2] print product \n";
  cout <<"[3] get max amount\n";
  cout <<"[4] exit \n";
  cout<<string(28,'=')<<endl;
}
int main(){
  /*product p1;
  product p2("laptop",3,550.0);
  p1.print();
  p2.print();
  */
  product *obj=NULL;
  product p[50];
  int n=0; char myop;
  while(1){
    menu(); cin.sync();
    cout <<"Please select ? ";
    myop=cin.get();
    switch(myop){
      case '1':{
        inputProduct(p,n);
        break;
      }
      case '2':{
        printProduct(p,n);
        break;
      }
      case '3':{
        cout <<"finding max amount product\n";
        obj=getMaxAmount(p,n);
        if(obj!=NULL)
          obj->print();
        break;
      }
      case '4':{
        exit(0);
      break;
      }
      default:
        cout <<">>>sorry invalid....\n";
    }
  }
  
}