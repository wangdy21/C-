//在一个 n * m 的二维数组中，每一行都按照从左到右 非递减 的顺序排序，每一列都按照从上到下 非递减 的顺序排序。请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
         int index = 0;
         for(int i = 0;i<matrix.size();i++){
            int len = matrix[i].size();
            int left = 0;
            int right = len - 1;
            int mid = (index+right)/2;
            while(left <= right){
                if(target == matrix[i][mid])return true;
                else if(target > matrix[i][mid]){
                   left = mid+1;
                   
                }else{
                    right = mid-1;
                }
                mid = (left+right)/2;
            }
            index = left;
         }
         return false;
    }
};

int main(){
    vector<vector<int>> nums = {{1,   4,  7, 11, 15},
  {2,   5,  8, 12, 19},
  {3,   6,  9, 16, 22},
  {10, 13, 14, 17, 24},
  {18, 21, 23, 26, 30}
};
    Solution a;
    int target = 8;
    bool cishu = a.findNumberIn2DArray(nums,target);
    cout << cishu << endl;
    return 0;
}