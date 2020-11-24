#include <iostream>
#include<cstring>
#include<stack>

using namespace std;

typedef struct tower{
    int id;
    int h;
}T;

T t[500001];


int main()
{
    stack<T> st;
    int n,i;
    cin>>n;

    for(i=0;i<n;i++)
    {
        t[i].id=i+1;
        cin>>t[i].h;
        cout<<"id:"<<t[i].id<<" h:"<<t[i].h<<endl;
    }

    for(i=0;i<n;i++)
    {
        cout<<i<<"/";
        if(st.empty()){
            cout<<0<<" ";
            st.push(t[i]);

        }
        else{
            while(!st.empty()&&st.top().h<t[i].h){
                    st.pop();
            }
            if(st.empty())
            {
                cout<<0<<" ";
                st.push(t[i]);

            }
            else{
            cout<<st.top().id<<" ";
            st.push(t[i]);
            }
        }


    }



    return 0;
}
