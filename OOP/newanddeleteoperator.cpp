#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(){
    // int *p;
    // int n = 10;
    // p =(int *)malloc(n*sizeof(int));
    // memset(p,0,n*sizeof(int));
    // cout << "address \n";
    // for(int i=0; i<n; ++i)
    //     cout << "address p[" << i << "]=" << p+i << endl;
    // for (int i=0; i<n; ++i)
    //     cout << "*(p+" << i << ")=" << *(p+i)<< endl;
    int *p;
    int n = 5;
    p = new int;
    // memset(p,0,n*sizeof(int));
    cout << "Input 5 numbers: " << endl;
    for(int i=0;i<n;++i){
        cin >> *(p+i);
    }
    for (int i=0; i <n;++i)
    cout << "address p[" << i << "]=" << p+i << endl;
    for (int i=0; i<n; ++i)
    cout << "*(p+" << i << ")=" << *(p+i) << endl;
    delete []p;
    return 0;

  
}