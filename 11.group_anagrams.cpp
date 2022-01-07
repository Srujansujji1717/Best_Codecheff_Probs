#include<bits/stdc++.h>
using namespace std;
 vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>> v;
     int m=strs.size();
     for(int i=0;i<m;i++){
         string sru=strs[i];
         sort(sru.begin(),sru.end());
         v[sru].push_back(strs[i]);
     }
     vector<vector<string>> m1;
     for(auto g:v){
         m1.push_back(g.second);

     }
     return m1;
    }
int main(){
    vector<string> strs;
    for(int i=0;i<5;i++){
        string a;
        cin>>a;
        strs.push_back(a);
    }
    vector<vector<string>> v2=groupAnagrams(strs);
    

}