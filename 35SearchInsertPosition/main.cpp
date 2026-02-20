#include <iostream>
#include <vector>

int searchInsert(std::vector<int>& nums, int target) {
    int middle = (nums.size() - 1)/2;
    int leftI = 0;
    int rightI = nums.size() - 1;
    while(leftI <= rightI){
        if(target == nums[middle]){
            return middle;
        }
        else if(target > nums[middle]){
            leftI = middle + 1;
        }
        else if(target < nums[middle] ){
            rightI = middle - 1;
        }
        middle = (rightI + leftI) / 2;
    }
    if(nums[middle] < target)
        return middle + 1;
    return (middle!=0)?(middle - 1):middle;
}
int main(){
    std::vector<int> arr = {1,3,5,6};
    int target = 5;
    std::cout<<searchInsert(arr,target)<<std::endl;
    target = 2;
    std::cout<<searchInsert(arr,target)<<std::endl;
    target = 7;
    std::cout<<searchInsert(arr,target)<<std::endl;
    return 0;
}