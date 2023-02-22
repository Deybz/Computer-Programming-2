#include<iostream>
using namespace std;

int input[10],even[10],odd[10];
int x,ec,oc,ecount,ocount;

int main()
{
    cout<<"\n\tInput 10 numbers: ";
    for(x=0;x<=9;x++)
    {
      cin>>input[x];
    }
    cout<<"\n\t  Input"<<endl;
    cout<<"\t     ";
        for(x=0;x<=9;x++)
            {
                cout<<input[x]<<" ";
            }
    cout<<"\n\n\t  Output ";
    for(x=0;x<10;x++)
   {
      if(input[x]%2==0)
         ecount++;
      else
         ocount++;
   }
    if(ecount==10&&ocount==0)
    {
        cout<<"\n\t\t   All numbers are even.\n";
    }
      else if (ocount==10&&ecount==0)
      {
          cout<<"\n\t\t   All numbers are odd.\n";
      }
      else{
        for(x=0;x<=9;x++)
            {
            if(input[x]%2==0)
                even[ec++]=input[x];
            else
                odd[oc++]=input[x];
        }
    cout<<"\n\tEven "<<endl;
    cout<<"\tCount:\t";
        cout<<ecount;
    cout<<"\n\tList:\t";
        for(x=0;x<ec;x++)
        cout<<even[x]<<" ";
    cout<<"\n\n\tOdd "<<endl;
    cout<<"\tCount\t";
        cout<<ocount;
    cout<<"\n\tList:\t";
        for(x=0;x<oc;x++)
        cout<<odd[x]<<" ";
        }
return 0;
}
