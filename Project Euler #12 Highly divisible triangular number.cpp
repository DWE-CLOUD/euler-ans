#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[1000005],ma;
int main() {
    int i=0;
    for(int q=1;q<=100000;q++){
        i+=q;
        int rao=0;
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                rao++;
                if(j*j!=i)rao++;
            }
        }
        if(rao<ma)continue;
        if(!a[rao])a[rao]=i;
        ma=max(ma,rao);
        if(rao>1000)break;
    }
    for(int i=10001;i>=1;i--)if(!a[i])a[i]=a[i+1];
        
        int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<a[n+1]<<endl;
    }
    return 0;
}
