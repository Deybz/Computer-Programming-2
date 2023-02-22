#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;
char letters;
double r,l,w,b,h,aoc,aor,aot;

int main()
{
        cout<<"\t\t----------------------------------------";
    cout<<"\n\t\t\tAREA COMPUTATION\n";
    cout<<"\t\t\t[C] Circle\n";
    cout<<"\t\t\t[R] Rectangle\n";
    cout<<"\t\t\t[T] Triangle\n";
        cout<<"\t\t----------------------------------------";

    cout<<"\n\n\t\tInput Letter \t\t:\t";
    cin>>letters;
    letters=toupper(letters);
        switch(letters)
{
            case 'C': {
               cout<<"\n\t\tInput Radius\t\t:\t";
                    cin>>r;
                        aoc=3.14*r*r;
                cout<<"\n\t\t----------------------------------------\n";
                cout<<"\t\tArea of Circle\t\t:\t"<<aoc<<endl;
            break;
                   }
            case 'R':  {
                cout<<"\n\t\tInput Length\t\t:\t";
                    cin>>l;
                cout<<"\n\t\tInput Width\t\t:\t";
                    cin>>w;
                        aor=l*w;
                cout<<"\n\t\t----------------------------------------\n";
                cout<<"\t\tArea of Rectangle\t:\t"<<aor<<endl;
            break;
                   }
            case 'T':   {
                cout<<"\n\t\tInput Base\t\t:\t";
                    cin>>b;
                cout<<"\n\t\tInput Height\t\t:\t";
                    cin>>h;
                        aot=0.5*(b*h);
                cout<<"\n\t\t----------------------------------------\n";
                cout<<"\n\t\tArea of Triangle\t:\t"<<aot<<endl;
            break;
                   }
            default:  {
                cout<<"\t\t----------------------------------------\n";
                cout<<"\n\t\tInvalid Character\n";
            break;
                   }
}
    cout<<"\n\t\t----------------------------------------\n";

    return 0;
}
