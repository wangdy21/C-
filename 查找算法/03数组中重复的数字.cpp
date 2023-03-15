//在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，
//也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。
//示例
//输入：
//[2, 3, 1, 0, 2, 5, 3]
//输出：2 或 3 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        map<int,int> count;
        for(auto num:nums){
            count[num]++;
        }
        for(auto num:nums){
            if(count[num]>1)
            return num;
        }
        return -1;
    }
};

int main(){
    Solution a;
    vector<int> nums = {2, 3, 1, 0, 2, 5, 3};
    int num = a.findRepeatNumber(nums);
    cout << num << endl;
    return 0;
}