#include <iostream>
#include <vector>
#include <unordered_set>
#include <iterator>

std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::unordered_set<int> firstSet(nums1.begin(), nums1.end());
    std::unordered_set<int> secondSet(nums2.begin(), nums2.end());
    std::vector<int> result;
    for(int num : secondSet){
        auto it = firstSet.find(num);
        if(it != firstSet.end()){
            result.push_back(num);
        }
    }
    
    return result;
}
int main(){
    std::vector<int> arr1 = { 1, 2, 2, 1};
    std::vector<int> arr2 = { 2, 2};
    std::vector<int> result = intersection(arr1,arr2);
    for(int num : result){
        std::cout<<num<<" ";
    }
    return 0;
}