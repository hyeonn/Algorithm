#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main(void) {
    int n;
    vector<pair<int, string> > v;

    cin >> n;

    for (int i=0; i<n; i++){
        int d;
        string s;
        cin >> d >> s;
        v.push_back(pair<int,string>(d,s));
    }

    // insertion sort

    int i,j;
    pair<int, string> key;
    for(i=1;i<n;i++){
        key=v[i];
        for(j=i-1;j>=0;j--)
        {
            if(v[j].first>key.first){
                v[j+1]=v[j];
            }
            else{
                break;
            }
        }
        v[j+1] = key;
    }

    // output
    for (int i=0; i<n; i++){
        cout << v[i].first << ' ' << v[i].second << endl;
    }

    return 0;
}

