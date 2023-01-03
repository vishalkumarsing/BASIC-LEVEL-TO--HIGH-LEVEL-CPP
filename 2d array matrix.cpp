#include <iostream>
using namespace std;
int main() {
    int arr[2][2];
    cout<<"enter a value of 2-d array:"<<endl;
    for(int i=0;i<2;i++){
       	for(int j = 0; j<2;j++){
            cin>>arr[i][j];
            
        }
    }
    
    cout<<"value of 2d array;"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
