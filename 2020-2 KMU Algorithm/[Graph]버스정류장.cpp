#include <iostream>
#include<vector>
using namespace std;

vector<vector<int> > solution(int n, vector<vector<int> > signs)
{
    vector<vector<int> > answer(n,vector<int>(n));
    answer = signs;

    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(answer[i][k]+answer[k][j]==2)
                    answer[i][j]=1;               
            }
        }
    }

    return answer;
}
