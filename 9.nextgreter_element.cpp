#include<bits/stdc++.h>
using namespace std;
vector<int> NGE(vector<int> v2){
vector<int> m(v2.size());
stack<int> s;
for(int i=0;i<v2.size();i++){
    while(!s.empty()&&v2[i]>v2[s.top()]){
m[s.top()]=i;
s.pop();

    }
    s.push(i);
}
while(!s.empty()){
    m[s.top()]=-1;
    s.pop();
}
return m;
}
int main(){
    vector<int> v1;
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        v1.push_back(b);
    }

   vector<int> h=NGE(v1);
   for(int i=0;i<a;i++){
       cout<<v1[i]<<" "<<v1[h[i]]<<endl;
   }

}