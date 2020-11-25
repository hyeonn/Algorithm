#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int v,e;
int graph[20][20]={0};
int cnt[20]={0};

int main()
{
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin >>a >>b;
        graph[a][b] = graph[b][a] = 1;
    }
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            cout << graph[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}