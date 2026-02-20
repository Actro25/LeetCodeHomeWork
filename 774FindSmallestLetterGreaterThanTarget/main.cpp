#include <iostream>
#include <vector>
char nextGreatestLetter(std::vector<char>& letters, char target) {
    int L = 0, R = letters.size() - 1;
    while(L <= R){
        int middle = L + (R - L) / 2;
        if(letters[middle] <= target){
            L = middle + 1;
        }
        else if(letters[middle] > target){
            R = middle - 1;
        }
    }
    return letters[L % letters.size()];
}
int main(){
    std::vector<char> letters = {'c','f','j'};
    char target = 'd';
    std::cout<<"Output: "<<nextGreatestLetter(letters,target);
    return 0;
}