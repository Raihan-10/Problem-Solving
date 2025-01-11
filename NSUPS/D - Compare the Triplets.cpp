#include<iostream>
using namespace std;

void compareTriplets(int alice[],int bob[])
{
    int a=0,b=0;

    for(int i=0; i<3; i++)
    {
        if(alice[i]>bob[i])
            a++;
        else if(alice[i]<bob[i])
            b++;
    }
    cout<<a<<" "<<b;
}

int main()
{
    int a[3],b[3];


    for(int i=0; i<3; i++)
        cin>>a[i];

    for(int i=0; i<3; i++)
        cin>>b[i];
    compareTriplets(a,b);

    return 0;
}
