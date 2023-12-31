#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main() {
    int n, q, k,i, m[300000],j,a,b, pos[100000],p=0;
    cin>>n>>q;
    for(i=0;i<n;i++) {
        cin>>k;
        pos[i]=p;
        for(j=0;j<k;j++)
            cin>>m[p++];
    }
    for(i=0;i<q;i++){
        cin>>a>>b;
        cout<<m[pos[a]+b]<<"\n";
    }
    return 0;
}

