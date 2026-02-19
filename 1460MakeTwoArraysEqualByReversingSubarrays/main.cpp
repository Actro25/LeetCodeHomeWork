#include <iostream>
#include <vector>
#include <unordered_map>

bool canBeEqual(std::vector<int>& target, std::vector<int>& arr) {
    std::unordered_map<int,int> arrMap;
    for(int num : arr){
        arrMap[num]++;
    }
    for(int num : target){
        if(arrMap.count(num)){
            arrMap[num]--;
            if(arrMap[num] == 0)
                arrMap.erase(num);
        }
    }
    if(arrMap.empty()){
        return true;
    }
    return false;    
}
int main(){
    std::vector<int> target = {1 , 2, 3, 4};
    std::vector<int> arr = {2 , 5, 1, 3};
    std::cout<<canBeEqual(target,arr);
    return 0;
}