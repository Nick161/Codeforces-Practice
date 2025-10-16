#include<iostream>
#include<string>

using namespace std;

string shorten(string);

int main(void)
{
    int n=5;
    cin>>n;
    string s[n];

    for(int i=0;i<n;i++)
        cin>>s[i];

    for(int i=0;i<n;i++)
        cout<<shorten(s[i])<<endl;
    return 0;
}

string shorten(string a)
{
    int l=a.length();

    if(l<11)
        return a;
    
    return a[0]+to_string(l-2)+a[l-1];
}