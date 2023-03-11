#include<iostream>
#include<vector>

using namespace std;

void maopao(vector<int>& nums){
    for(int i = 0;i<nums.size();i++){
        for(int j = i+1;j<nums.size();j++){
            if(nums[i]>nums[j]){
                swap(nums[i],nums[j]);
            }
        }
    }
    
}

int main(){
    vector<int> nums = {6,1,8,2,3,9,4,7,5};
    for(auto num:nums){
        cout<<num<<" ";
    }
    cout << endl;
    maopao(nums);
        for(auto num:nums){
        cout<<num<<" ";
    }
    return 0;
}