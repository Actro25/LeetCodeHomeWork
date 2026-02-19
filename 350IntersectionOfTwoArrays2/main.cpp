#include <iostream>
#include <vector>
#include <unordered_map>
#include <iterator>
std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::unordered_map<int,int> firstNums;
    for(int i = 0; i < nums1.size(); i++){
        firstNums[nums1[i]]++;
    }
    std::vector<int> result;
    for(int i = 0; i < nums2.size(); i++){
        if(firstNums.count(nums2[i]) && firstNums[nums2[i]] > 0){
            result.push_back(nums2[i]);
            firstNums[nums2[i]]--;
        }
    }
    return result;
}
int main(){
    std::vector<int> arr1 = { 4, 9, 5 };
    std::vector<int> arr2 = { 9, 4, 9, 8, 4 };
    std::vector<int> result = intersect(arr1,arr2);
    for(int num : result){
        std::cout<<num<<" ";
    }
    return 0;
} 