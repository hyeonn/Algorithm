#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    int N,M;
    scanf("%d %d",&N, &M);
    int arr[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < M; i++){
        int a, b,cnt=0;
        cin >> a >> b;
        for(int j = a-1; j<b; j++){
            cnt+=arr[j];
        }
        cout << cnt << endl;
    return 0;
}