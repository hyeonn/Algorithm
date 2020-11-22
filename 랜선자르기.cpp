#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int N,K;
 vector<int> vec;

bool judge(int len){
    int cnt= 0;
    for(int i=0;i<N;i++){
        cnt+=vec[i]/len;
    }
    if(cnt>=K){
        return true;
    }
    return false;

}

int main(){

    int i,a,mx=0;
    cin >> N >> K;
    for(i=0;i<N;i++){
        cin >> a;
        if(mx<a)
            mx = a;
        vec.push_back(a);
    }

    int l = 0, r = mx;
    while(l<r){
        int mid = (l+r+1)/2;
        if(judge(mid))
            l = mid ;
        else
            r = mid - 1;
    }
    cout<<l;

    return 0;
}