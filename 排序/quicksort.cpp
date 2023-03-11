#include<iostream>
#include<vector>

using namespace std;
//采用分而治之的思想，先选择一个基准元素，一般为数组的第一个或者最后一个元素
//将数组分成两个子数组，左边的元素小于基准元素，右边的数组大于基准元素
//对两个数组递归地进行排序
int partial(int arr[],int left,int right){
    int pivot = left;
    int i = left + 1;
    int j = right;
    while(i<=j){
        if(arr[i]<=arr[pivot]){
            i++;
        }else if(arr[j]>=arr[pivot]){
            j--;
        }
        else{
            swap(arr[i++],arr[j--]);
        }
    }
    swap(arr[pivot],arr[j]);
    return j;
}

void quickSort(int arr[],int left,int right){
    if(left>=right){
        return;
    }
    int pos = partial(arr,left,right);
    quickSort(arr,left,pos-1);
    quickSort(arr,pos+1,right);
}

int main(){
    int arr[] = {6,1,8,2,3,9,4,7,5};
    for(auto num:arr){
        cout<<num<<" ";
    }
    cout << endl;
    quickSort(arr,0,sizeof(arr)/sizeof(arr[0])-1);
        for(auto num:arr){
        cout<<num<<" ";
    }
    return 0;
}