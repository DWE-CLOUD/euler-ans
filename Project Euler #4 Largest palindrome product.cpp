#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int a[1000005];
void check(int x){
    int st=x;
    vector<int>v;
    while(x){
        v.push_back(x%10);
            x/=10;
    }
    for(int i=0;i<v.size();i++)
        if(v[i]!=v[v.size()-1-i])return;
        
    a[st]=st;
}
int main(){
    
    for(int i=100;i<=999;i++)
        for(int j=i;j<=999;j++)
            check(i*j);
    
    
    for(int i=0;i<=1000000;i++)
        if(!a[i])a[i]=a[i-1];
    
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<a[n-1]<<endl;
    }
    return 0;
}
