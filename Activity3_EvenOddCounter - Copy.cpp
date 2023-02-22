#include <iostream>
using namespace std;
int main()
{
    int arr[10],even[10],odd[10],ec=0,oc=0,x;
    cout<<"Input numbers in the array";
    for(x=0;x<10;x++)
        cin>>arr[x];
    for(x=0;x<10;x++)
    {
            if(arr[x]%2==0)
                even[ec++]=arr[x];
            else
                odd[oc++]=arr[x];
    }
    cout<<"The even numbers are: ";
    for(x=0;x<ec;x++)
        cout<<even[x]<<" ";
    cout<<"\nThe odd numbers are: ";
    for(x=0;x<oc;x++)
        cout<<odd[x]<<" ";
}
