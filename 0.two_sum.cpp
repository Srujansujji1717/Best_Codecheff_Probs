#include<bits/stdc++.h>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>a;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    a.push_back(i);
                    a.push_back(j);
                }
            }
        }
        return a;
    }

    int main(){
        int b;
        cin>>b;

        vector<int> a;
        for(int i=0;i<b;i++){
            int s;
            cin>>s;
            a.push_back(s);
        }
        int target;
        cin>>target;
        vector<int> h=twoSum(a,target);
        for(auto a:h){
            cout<<a<<" ";
        }cout<<endl;
    }