#include<iostream>

using namespace std;

int grpa[5],grpb[5];
int x;

int main(){
for(x=0;x<=4;x++)
    {
        cout<<"Input Values for Group A: ";
        cin>>grpa[x];

    }

    cout<<"\nValues Encoded in Group A";

for(x=0;x<=4;x++)
    {
        cout<<"\n\t\t"<<grpa[x];
    }
        cout<<endl;

for(x=0;x<=4;x++)
    {
        cout<<"Input Values for Group B: ";
        cin>>grpb[x];

    }

    cout<<"\nValues Encoded in Group B";

for(x=0;x<=4;x++)
    {
        cout<<"\n\t\t"<<grpb[x];
    }
        cout<<endl;

return 0;
}
