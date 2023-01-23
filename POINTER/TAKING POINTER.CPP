#include <iostream>
using namespace std;
int main()
{
    int a=9;
    
    int *p;  
    p=&a;
    
    cout<<"address of a : "<<p<<endl;
    cout<<"Value  : "<<*p<<endl;
    cout<<&p<<endl;
    
}
