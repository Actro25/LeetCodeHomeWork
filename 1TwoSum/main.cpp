#include <iostream>
#include <vector>
#include <unordered_map>
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int,int> dic;
    for(int i = 0; i < nums.size(); i++){
        int difer = target - nums[i];
        auto t = dic.find(difer);
        if(t != dic.end()){
            return {t->second, i};
        }
        dic.insert({nums[i], i});
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