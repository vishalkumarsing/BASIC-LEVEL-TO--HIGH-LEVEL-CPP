#include <iostream>
using namespace std;
int main() {
    float a,b,c,s,area;
    
    cout<<"enter a three side of traingle:";
    cin>>a>>b>>c;
    
    s=(a+b+c)/2;
    
    area= (s*(s-a)*(s-b)*(s-c));
    cout<<"area of traingle is:";


    return 0;
}
