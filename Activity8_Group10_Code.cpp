#include<iostream>
using namespace std;
int multi1,multi2,prod;

int main()
{
    //Input Gicen Data
cout<<"\n\t\t__________________________________";
    cout<<"\n\t\t     ------------------------";
cout<<"\n\t\t\tMultiplier:\t";
cin>>multi1;
cout<<"\t\t\tMultiplicand:\t";
cin>>multi2;


if(multi1<0) //Condition 1
{
    cout<<"\t\t --------------------------------";
    cout<<"\n\t\t  Negative number/s not accepted";
    cout<<"\n\t\t --------------------------------";
    cout<<"\n\t\t__________________________________\n";

}
    else if (multi2<0) //Condition 2
    {
        cout<<"\t\t --------------------------------";
        cout<<"\n\t\t  Negative number/s not accepted";
        cout<<"\n\t\t --------------------------------";
        cout<<"\n\t\t__________________________________\n";
    }
    else //Condition 3
{
    for(int i=0;i<multi1;i++) //Loop
    {prod = prod + multi2;}

    cout<<"\t\t     ------------------------";
    cout<<"\n\t\t\t Product:\t"<<prod;
    cout<<"\n\t\t     ------------------------";
    cout<<"\n\t\t__________________________________\n";
}

return 0;}


