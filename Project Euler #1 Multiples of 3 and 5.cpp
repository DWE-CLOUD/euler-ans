#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long go(long long x)
{
    x=(3+x/3*3)*(x/3)/2+(5+x/5*5)*(x/5)/2-(15+x/15*15)*(x/15)/2;
    return x;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x;cin>>x;cout<<go(x-1)<<endl;
    }
    return 0;
}
