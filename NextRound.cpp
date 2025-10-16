#include<iostream>

using namespace std;

int main(void)
{
    int n,k,s=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0,t=a[k-1];i<n&&a[i]>=t&&a[i]>0;i++,s++);
    cout<<s;
    return 0;
}