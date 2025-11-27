#include<iostream>
using namespace std;
int fact(int x)
{
    if(x==0||x==1)
    return 1;
    else
    {
        return x*fact(x-1);
    }
}
int main()
{
    int n;
    long res;
    cout<<"Kindly Enter the Number to find factorial:\n";
    cin>>n;
    res=fact(n);
    cout<<"\nFactorial of "<<n<<" is:"<<res;
}