#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long x;   
long long go(long long x)
{
    long long a=1,b=1,res=0;
    while(a<=x)
    {
        swap(a,b);
        
        if(b%2==0)res+=b;
        a=a+b;
    }
    return res;
}
int main() {
    int t;
    cin>>t;

    
    while(t--)
    {
        cin>>x;cout<<go(x)<<endl;
    }
    return 0;
}
