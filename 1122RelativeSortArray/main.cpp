#include <iostream>
#include <vector>
std::vector<int> relativeSortArray(std::vector<int>& arr1, std::vector<int>& arr2) {
    std::vector<int> result;
    std::vector<int> tempCalculation(1001, 0);
    for(int num : arr1){
        tempCalculation[num] += 1;
    }
    for(int x : arr2){
        while(tempCalculation[x] > 0){
            result.push_back(x);
            tempCalculation[x]--;
        }
    }
    for(int i = 0; i < tempCalculation.size(); i++){
        while(tempCalculation[i] > 0){
            result.push_back(i);
            tempCalculation[i]--;
        }
    }
    return result;
}
int main(){
    std::vector arr1 = {2,3,1,3,2,4,6,7,9,2,19}, arr2 = {2,1,4,3,9,6};
    std::vector result = relativeSortArray(arr1, arr2);
    for(int num : result){
        std::cout<<num;
    }
    return 0;
}