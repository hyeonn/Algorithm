#include <iostream>
#include <vector>

using namespace std;

int v;
int graph[1001][1001]={0};
int cnt[1001]={0};

int main()
{
    int odd=0;
    cin >> v;

    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            cin >> graph[i][j];
            if(graph[i][j]%2)
                cnt[i]++;
        }
        if(cnt[i]==3)
            odd++;
    }
    if(odd==0||odd==2)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}