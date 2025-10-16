#include<iostream>
int abs(int);
int main(void)
{
    int a,s,i,flag=1;
    for(i=1;i<=5&&flag;i++)
    {
        for(int j=1;j<=5;j++)
        {
            std::cin>>a;
            if(a==1)
            {
                s=abs(i-3)+abs(j-3);
                flag=0;
            }
        }
    }
    for(;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
            std::cin>>a;
    }
    std::cout<<s;
    return 0;
}
int abs(int n)
{
    return n<0?-n:n;
}