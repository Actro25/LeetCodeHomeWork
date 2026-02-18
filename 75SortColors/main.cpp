#include <iostream>
#include <vector>
#include <iterator>

void sortColors(std::vector<int>& nums) {
    int colorCout[3] = {0,0,0};
    for(int i = 0; i < nums.size(); i++){
         colorCout[nums[i]]+=1;
    }
    nums.clear();
    for(int i = 0; i < std::size(colorCout) ; i++){
        for(int j = 0; j < colorCout[i]; j++){
            nums.push_back(i);
        }
    }
    for(int i : nums){
        std::cout<<i;
    }
}

int main(){
    std::vector<int> colors = { 2, 0, 2, 1, 1, 0};
    sortColors(colors);
    return 0;
}