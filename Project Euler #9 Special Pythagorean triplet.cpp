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
int a[100005];
void solve(){
    
        for(int i=2;i<=1500;i++)
            for(int j=i+1;j<=1500;j++){
                int fes=sqrt(i*i+j*j);
                int q=fes;
                if(i*i+j*j==q*q)a[i+j+q]=max(a[i+j+q],i*j*q);
            }
}
int main(){
    int t;
    cin >> t;
    solve();
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        if(!a[n])cout<<-1<<endl;else cout<<a[n]<<endl;
            
    }
    return 0;
}
