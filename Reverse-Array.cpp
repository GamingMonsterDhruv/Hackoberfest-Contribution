#include <iostream>
using namespace std;

int main() {

    int a;
    cout<<"Enter the size of the array"<<endl;
    cin>>a;
    int array[a];
    for(int i=0;i<a;i++)
    {
        cout<<"Enter the value of the array"<<endl;
        cin>>array[i];
    }
    for(int i=0;i<a;i++)
    {
        cout<<array[a-i-1]<<" ";
    }
    return 0;
}