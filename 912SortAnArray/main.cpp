#include <iostream>
#include <vector>
//I used to merge sort because of time limits
std::vector<int> sortArray(std::vector<int>& nums) {
    if(nums.size() <= 1)
        return nums;

    int middleIndex = nums.size()/2;

    std::vector<int> second(std::make_move_iterator(nums.begin() + middleIndex), std::make_move_iterator(nums.end()));
    std::vector<int> secondPart = sortArray(second);
    nums.resize(middleIndex);
    std::vector<int> firstPart = sortArray(nums);

    std::vector<int> result;
    int l = 0, r = 0;
    while(l < firstPart.size() && r < secondPart.size()){
        if(firstPart[l] < secondPart[r]){
            result.push_back(firstPart[l]);
            l++;
        }
        else{
            result.push_back(secondPart[r]);
            r++;
        }
    }

    while(l < firstPart.size()){
        result.push_back(firstPart[l]);
        l++;
    }
    while(r < secondPart.size()){
        result.push_back(secondPart[r]);
        r++;
    }

    return result;
}
int main(){
    std::vector<int> nums = {2,5,1,2,7,3};
    std::vector<int> result = sortArray(nums);
    for(int num : result){
        std::cout<<num;
    }
    return 0;
}