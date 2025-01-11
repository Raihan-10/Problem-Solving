#include<iostream>
#include<cmath>
using namespace std;
int diagonalDifference (int n,int a[][100])
{
    int lDiagonal=0,rDiagonal=0;
    for(int i=0; i<n; i++)
    {
        lDiagonal+=a[i][i];
        rDiagonal+=a[i][n-i-1];
    }

    return abs(lDiagonal-rDiagonal);

}

int main()
{
    int  n;
    cin>>n;
    int arr[100][100];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<diagonalDifference(n,arr)<<endl;

    return 0;
}
