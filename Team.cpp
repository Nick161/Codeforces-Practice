#include<iostream>

using namespace std;

int main(void)
{
    int n,a,b,c,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        if(a+b+c>1)
            s++;
    }
    cout<<s;
    return 0;
}