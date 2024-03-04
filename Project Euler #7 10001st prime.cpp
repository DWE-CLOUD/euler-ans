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

vector<int>v;
void check(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return;
    }
    v.push_back(n);
}
int main(){
    for(int i=2;i<1000000;i++)
        check(i);
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<v[n-1]<<endl;
    }
    return 0;
}
