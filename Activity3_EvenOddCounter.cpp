#include<iostream>
using namespace std;

//Global Initialization
int x,i[10],even[10],odd[10],ec,oc;

int main()
{
    cout<<"\t  --------------------------------------------------";
    cout<<"\n\t\tInput 10 numbers: ";
    for(x=0;x<=9;x++)
    {
      cin>>i[x];
    }
    cout<<"\t  --------------------------------------------------";
    cout<<"\n\t       ----------------------------------------";
    cout<<"\n\t\t  -Output";
    for(x=0;x<=9;x++)
    {
        if(i[x]%2==0)
        even[ec++]=i[x];
        else
        odd[oc++]=i[x];
        }
    if(oc==0)
    {
        cout<<"\n\t\t\t   All numbers are even.\n";
    }
      else if (ec==0)
      {
          cout<<"\n\t\t\t   All numbers are odd.\n";
      }
      else{
    cout<<"\n\t       ----------------------------------------";
    cout<<"\n\t\tEven "<<endl;
    cout<<"\t\tCount:\t\t";
        cout<<ec;
    cout<<"\n\t\tList:\t\t";
        for(x=0;x<ec;x++)
        cout<<even[x]<<" ";
    cout<<"\n\t       ----------------------------------------";
    cout<<"\n\t\tOdd "<<endl;
    cout<<"\t\tCount\t\t";
        cout<<oc;
    cout<<"\n\t\tList:\t\t";
        for(x=0;x<oc;x++)
        cout<<odd[x]<<" ";
    cout<<"\n\t       ----------------------------------------";
        }

return 0;
}
