#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int A[N];

int main()
{
    cin >> n, k;
    for(int i=0;i<n;i++)
        cin >> A[i];
    while(k--){
        int s;
        cin >> s;
        bool find = false;
        int l = 0, r = n - 1;
        while(l<=r){
            int mid = (l+r)/2;
            if(A[mid]<s)
                l = mid + 1;
            else if(A[mid]>s)
                r = mid - 1;
            else{
                find = true;
                break;
            }
        }
        printf("%s\n",find?"Find!!":"Not:find...");
    }
    return 0;
}