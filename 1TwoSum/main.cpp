#include <iostream>
#include <vector>
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++){
        for(int j = 1 + i; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                return {i,j};
            }
        }
    }
    return {0,0};
}
int main(){
    std::vector inputV = {2,7,11,15};
    int target = 22;
    
    std::vector<int> result = twoSum(inputV, target);
    
    for(int num : result){
        std::cout<<num<<" ";
    }
    return 0;
}