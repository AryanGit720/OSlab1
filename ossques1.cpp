#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,avg;
    cin>>n;
    int arr[n];
    cout<<"input your numbers: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    cout<<avg;
}
