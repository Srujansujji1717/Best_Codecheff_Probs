#include<bits/stdc++.h>
using namespace std;
#include <unordered_map>
map<char,int> sym={{'{',-1},{'[',-2},{'(',-3},{'}',1},{']',2},{')',3}};
string isbalnced(string s){
    stack<char> t;
    for(char r:s){
        if(sym[r]<0)
        t.push(r);
        else{
        if(t.empty())
        return "NO";
        char top=t.top();
        t.pop();
        if(sym[top]+sym[r]!=0)
        return "NO";
        }
    }
if(t.empty())return "YES";
return "NO";

}
int main(){
int a;
cin>>a;
while(a--){
    string s1;
    cin>>s1;
    cout<<isbalnced(s1)<<endl;
}
}