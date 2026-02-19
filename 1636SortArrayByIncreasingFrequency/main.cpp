#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
std::vector<int> frequencySort(std::vector<int>& nums) {
    std::unordered_map<int,int> frequencyOfNums;
    for(int num : nums){
        frequencyOfNums[num]++;
    }
    std::sort(nums.begin(), nums.end(), [&](int a, int b){
        if(frequencyOfNums[a] == frequencyOfNums[b]){
            return a > b;
        }
        return frequencyOfNums[a] < frequencyOfNums[b];
    });
    return nums;
}
int main(){
    std::vector<int> nums = { 1, 1, 2, 2, 2, 3 };
    std::vector<int> result = frequencySort(nums);
    for(int num : result){
        std::cout<<" "<<num;
    }

    return 0;
}