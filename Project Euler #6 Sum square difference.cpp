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

#define ll long long
ll kvad[500005];
int main(){
    for(int i=1;i<=10000;i++)kvad[i]=kvad[i-1]+i*i;
    
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        ll n;
        cin >> n;
        cout<<(n*(n+1)/2)*(n*(n+1)/2)-kvad[n]<<endl;
    }
    return 0;
}
