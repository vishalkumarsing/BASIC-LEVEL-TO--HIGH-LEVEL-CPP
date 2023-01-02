#include <iostream>
using namespace std;
int main() {
    int num;
    cout <<"enter a number of month 1 and 12:";
    cin>>num;

    switch (num)
    {
        case 1:
        cout<<"january";
        break;


        case 2:
        cout<<"feb ";
        break;


        case 3:
        cout<<" march";
        break;


        case 5:
        cout<<"may";
        break;


        case 6:
        cout<<"june ";
        break;

        case 7:
        cout<<" july";
        break;


        case 8:
        cout<<" aug";
        break;


        case 9:
        cout<<"sep ";
        break;


        case 10:
        cout<<"oct ";
        break;


        case 11:
        cout<<"nov ";
        break;


        case 12:
        cout<<" dec";
        break;
    }
    return 0;
}
