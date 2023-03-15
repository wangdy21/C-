//统计一个数字在排序数组中出现的次数。

#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
    int search(vector<int>& nums,int target){
        map<int,int> count;
        for(auto num:nums){
            count[num]++;
        }
        map<int,int>::iterator it;
        it = count.find(target);
        if(it != count.end()){
           return count[target];
        }
        return 0;
    }
};

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    Solution a;
    int target = 8;
    int cishu = a.search(nums,target);
    cout<< cishu<<endl;
    return 0;
}