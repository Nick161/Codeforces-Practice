#include<iostream>

int main(void)
{
    int a;
    std::cin>>a;
    if(a>3 && a%2==0)
        std::cout<<"YES";
    else
        std::cout<<"NO";
}
