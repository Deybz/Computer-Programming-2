#include<iostream>
#include<stdio.h>
using namespace std;
int dd, dr, q, r;

int main()
{
      //Input given/data
      cout<<"\n\t\t__________________________________";
      cout<<"\n\t\t     ------------------------";
      cout<<"\n\t\t\tDividend:\t";
      cin>>dd;
      cout<<"\t\t\tDivisor:\t";
      cin>>dr;

      if(dd<=0)
      {
          cout<<"\n\t\t     ------------------------";
          cout<<"\n\t\tZero/Negative number/s not accepted";
          cout<<"\n\t\t     ------------------------";
          cout<<"\n\t\t__________________________________";
      } else if (dr<=0)
        {
            cout<<"\n\t\t     ------------------------";
            cout<<"\n\t\tZero/Negative number/s not accepted";
            cout<<"\n\t\t     ------------------------";
            cout<<"\n\t\t__________________________________";
        } else if (dd<dr)
            {
                cout<<"\n\t\t     ------------------------";
                cout<<"\n\t\t\tUnable to process";
                cout<<"\n\t\t     ------------------------";
            cout<<"\n\t\t__________________________________";
            } else
                {

      while(dd >= dr)//Condition
      {
        //Formula
            dd = dd - dr;
        //Increment
            q++;//Storing of quotient
      }

        //Storing of Remainder
      r=dd;
      if(r>0)
      {
        cout<<"\t\t     ------------------------";
        cout<<"\n\t\t\tQuotient:\t"<<q;
        cout<<"\n\t\t\tRemainder:\t"<<r;
        cout<<"\n\t\t     ------------------------";
        cout<<"\n\t\t__________________________________";
      } else
        {
          cout<<"\t\t     ------------------------";
          cout<<"\n\t\t\tQuotient:\t"<<q;
          cout<<"\n\t\t     ------------------------";
          cout<<"\n\t\t__________________________________";
        }}

      return 0;
}
