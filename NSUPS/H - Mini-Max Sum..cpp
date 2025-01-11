#include<iostream>
#include<algorithm>
using namespace std;

void miniMaxSum (long int a[], long int &minSum, long int &maxSum)
{
    sort(a,a+5);
    for(int i=0; i<5-1; i++)
        minSum+=a[i];

    for(int i=1; i<5; i++)
        maxSum+=a[i];
}

int main()
{
    long int arr[5],minSum=0,maxSum=0;

    for(int i=0; i<5; i++)
        cin>>arr[i];

    miniMaxSum(arr,minSum,maxSum);
    cout<<minSum<<" "<<maxSum;
    return 0;
}
