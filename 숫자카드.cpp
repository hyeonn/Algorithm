#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
vector<int> s,f;
    int n,m,i,a;

    cin >> n;
    for(i=0;i<n;i++){
        cin >> a;
        s.push_back(a);
    }
    sort(s.begin(),s.end());

    cin >> m;
    for(i=0;i<m;i++){
        cin >> a;
        f.push_back(a);
    }
    a=0;
    while(a<m){
        int find = 0;
        int l = 0, r = n - 1;
        while(l<=r){
            int mid = (l+r)/2;
            if(s[mid]<f[a])
                l = mid + 1;
            else if(s[mid]>f[a])
                r = mid - 1;
            else{
                find = 1;
                cout <<find <<" ";
                break;
            }
        }
        if(!find)
            cout <<find <<" ";
        a++;
    }

    return 0; 
}