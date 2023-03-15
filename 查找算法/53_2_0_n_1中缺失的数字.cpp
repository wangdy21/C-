//一个长度为n-1的递增排序数组中的所有数字都是唯一的，并且每个数字都在范围0～n-1之内。在范围0～n-1内的n个数字中有且只有一个数字不在该数组中，请找出这个数字。

#include<bits/stdc++.h>

using namespace std;

//哈希表
// class Solution{
// public:
//     int missingNumber(vector<int>& nums){
//         map<int,int> count;
//         for(auto num:nums){
//             count[num]++;
//         }
//         for(int i = 0;i<=nums.size();i++)
//         {
//             if(count[i]==0){
//                 return i;
//             }
//         }
//         return 0;
//     }
// };


//位运算
//异或运算^ 
//一个整数自己跟自己异或，结果为0
//任意一个整数跟0异或，结果为本身
class Solution{
public:
    int missingNumber(vector<int>& nums){
        int res = 0;
        for(auto num:nums)
        {
            res ^= num;
        }
        int n = nums.size();
        for(int i = 0;i<=n;i++)
        {
            res ^= i;
        }
        return res;
    }
};


int main(){
    vector<int> nums = {0,1,3,4,5,6,7};
    Solution a;
    int cishu = a.missingNumber(nums);
    cout<< cishu<<endl;

    //异或测试
    int c = 6;
    int b = 8; 
    int xorcb = c^b;
    int xorbc = b^c;
    int xorb0 = b^0;
    int xorc0 = c^0;
    int xorbb = b^b;
    cout << "b^c = " << xorcb <<endl;
    cout << "b^c = " << xorbc <<endl;
    cout << "b^0 = " << xorb0 <<endl;
    cout << "c^0 = " << xorc0 <<endl;
    cout << "b^b = " << xorbb <<endl;
    return 0;
}