#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size();
        int b=nums2.size();
        int i=0;
        int j=0;
        vector<int> v;
        while(i!=a && j!=b){
            if(nums1[i]>nums2[j]){
                v.push_back(nums2[j]);
                j++;
            }
            else{
                v.push_back(nums1[i]);
                i++;
            }
        }
        while(i!=a){
            v.push_back(nums1[i]);
            i++;
        }
        while(j!=b){
            v.push_back(nums2[j]);
            j++;
        }
        int h=v.size()/2;
        if(v.size()%2==0){
           return (double)(v[h]+v[h-1])/2;
            
        }
        else{
            return (double)v[h];
        }
       
    }

    int main(){
        vector<int> a1;
        vector<int> a2;
        int n1;
        int n2;
        cin>>n1>>n2;
        for(int i=0;i<n1;i++){
            int a;
            cin>>a;
            a1.push_back(a);
        }
        for(int i=0;i<n2;i++){
            int a;
            cin>>a;
            a2.push_back(a);
        }

        cout<<findMedianSortedArrays(a1,a2)<<endl;
    }