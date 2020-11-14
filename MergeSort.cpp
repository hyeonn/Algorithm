#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <climits>
using namespace std;

void mergesort(vector<pair<int, string> >& v, int p, int r);

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

    // merge sort
    mergesort(v, 0, v.size()-1);

    for (int i=0; i<n; i++){
        cout << v[i].first << ' ' << v[i].second << endl;
    }

    return 0;
}

void mergesort(vector<pair<int, string>>& v, int p, int r){
    if(p >= r)
        return;
    int m = (p+r)/2;
    mergesort(v, p, m);
    mergesort(v, m+1, r);

    vector<pair<int, string>> a(r+1);
    int a_idx = 0;
    int i = p, j = m+1,k;


    while(i <= m && j <= r) {
        if(v[i].first >= v[j].first)
        {
            a[a_idx] = v[i];
            i++;
        }

        else
        {
            a[a_idx] = v[j];
            j++;
        }
        a_idx++;
    }

    while(i <= m){
        a[a_idx] = v[i];
        i++;
        a_idx++;
    }

    while(j <= r)
    {
        a[a_idx] = v[j];
        j++;
        a_idx++;
    }


    for(k = p, a_idx = 0; k <= r; k++, a_idx++)
        v[k] = a[a_idx];

}
