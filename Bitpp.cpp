#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    int n,x=0;
    string s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        x+=s[1]=='+'?1:-1;
        s="";
    }
    cout<<x;
}