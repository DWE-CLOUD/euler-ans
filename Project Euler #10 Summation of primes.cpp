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
long long a[1000005];
void check(int x){
    for(int i=2;i*i<=x;i++)
        if(x%i==0)return ;
    a[x]=x;
    return;
}
int main(){
    for(int i=2;i<=1000000;i++){check(i);a[i]+=a[i-1];}
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<a[n]<<endl;
    }
    return 0;
}
