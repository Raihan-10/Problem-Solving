#include<iostream>
#include<iomanip>
using namespace std;

void plusMinus (int n, int arr[],float &pCount, float &nCount, float &zCount )
{

    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
            pCount++;
        if(arr[i]<0)
            nCount++;
        if(arr[i]==0)
            zCount++;
    }


}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    float P=0,N=0,Z=0;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    plusMinus(n,arr,P,N,Z);

    P=P/n;
    N=N/n;
    Z=Z/n;
    cout<<fixed<<setprecision(6)<<P<<endl;
    cout<<fixed<<setprecision(6)<<N<<endl;
    cout<<fixed<<setprecision(6)<<Z;

}
