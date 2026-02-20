#include <iostream>
#include <vector>
std::vector<int> twoSum(std::vector<int>& numbers, int target) {
    
    for(int i = 0; i < numbers.size(); i++){
        int currentI = i;
        int L = currentI + 1, R = numbers.size() - 1;
        while(L <= R){
            int middleI =L + (R-L)/2;
            if(numbers[currentI]+numbers[middleI] == target){
                return{currentI+1,middleI+1};
            }
            else if(numbers[currentI]+numbers[middleI] <= target){
                L = middleI + 1;
            }
            else if(numbers[currentI]+numbers[middleI] >= target){
                R = middleI - 1;
            }
        }
    }
    return {};
}
int main(){
    
    std::vector<int> numbers = {2,7,11,15};
    int target = 9; 
    std::vector<int> result = twoSum(numbers, target);
    for(int num : result){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;
    
    numbers = {0,0,3,4};
    target = 0; 
    result = twoSum(numbers, target);
    for(int num : result){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;    
    
    return 0;
}