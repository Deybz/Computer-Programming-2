#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;
char pc;
double quantity, up;

int main()
{
        cout<<"\t-------------------------------------------------------------\n\n";
            cout<<"\t\tInput Product Code\t\t:\t";
                cin>>pc;
        if((pc == 'A')||(pc == 'a'))
            {
               cout<<"\n\t\tQuantity\t\t\t:\t";
                    cin>>quantity;
                        if((quantity >=1)&&(quantity <=20))
                           {
                              up =quantity*120.00;
        cout<<"\t\t-----------------------------------------------\n\n";

                                cout<<"\t\tUnit Price\t\t\t:\t120.00\n"<<endl;
                                cout<<fixed<<setprecision(2)<<"\t\tAmount Due\t\t\t:\t"<<up<<endl;
                           }else if (quantity <0)
                                {
        cout<<"\n\t\t-----------------------------------------------\n\n";
                                    cout<<"\t\t\t     Invalid Quantity\n";
                                }else
                                    {
        cout<<"\n\t\t-----------------------------------------------\n\n";
                                        cout<<"\t\t\t    Stocks not Sufficient\n";
                                    }}
                else if((pc == 'B')||(pc == 'b'))
                {
               cout<<"\n\t\tQuantity\t\t\t:\t";
                    cin>>quantity;
                        if((quantity >=1)&&(quantity <=30))
                           {
                              up =quantity*100.00;
        cout<<"\t\t-----------------------------------------------\n\n";
                                cout<<"\t\tUnit Price\t\t\t:\t100.00\n"<<endl;
                                cout<<fixed<<setprecision(2)<<"\t\tAmount Due\t\t\t:\t"<<up<<endl;
                           }else if (quantity <0)
                                {
        cout<<"\n\t\t-----------------------------------------------\n\n";
                                    cout<<"\t\t\t     Invalid Quantity\n";
                                }else
                                    {
        cout<<"\n\t\t-----------------------------------------------\n\n";
                                        cout<<"\t\t\t    Stocks not Sufficient\n";
                }}else
                    {
        cout<<"\n\t\t-----------------------------------------------\n\n";
                                cout<<"\t\t\t   Product Not Available\n\n";
                    }
    cout<<"\n\t-------------------------------------------------------------\n";


    return 0;
}
