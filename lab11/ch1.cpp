#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        string s;
        cin>>s;
        
        int n=s.length();
        int ans=0,level=0;
        
        for(int i=0;i<n-1;i++){
            
            if(s[i]=='('&& s[i+1]==')'){
                ans+=pow(2,level); 
            }
            if(s[i]=='('){
                level++;
            }
            if(s[i]==')'){
                level--;
            }            

        }
        cout<<ans<<'\n';
    }
}