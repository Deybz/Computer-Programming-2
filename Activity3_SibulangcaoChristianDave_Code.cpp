#include<iostream>
#include<iomanip>
using namespace std;
int x,y,z;

int main()
{
for (y=10;y>2;y-=4)
{
z=0;
for (x=1;x<=y;x+=3)
{
    z=z+2;
}
cout<<z<<endl;

}

    return 0;
}
