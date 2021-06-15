#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int>a,b;
    int i=0,j=0,n;
    cin>>n;
    vector<int>p(n,0),q(n,0);
    for(auto &x:p) cin>>x;
    for(auto &x:q) cin>>x;
    while(i<n && j<n){
        while(p[i]!=q[j]){
            a.push(p[i]);i++;
        }
        while(p[i]==q[j]){
            if(a.size()==0) {
                cout<<"false"<<'\n';return 0;
            }
            a.pop();i++;j++;
        }
    }
    cout<<"true"<<'\n';
}