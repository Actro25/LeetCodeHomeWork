    #include <iostream>
    #include <vector>

    void reverseString(std::vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while(left <  right){
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++; right--;
        }
        for(char charsT : s){
            std::cout<<charsT;
        }
    }
    int main(){
        std::vector<char> inputV = {'A',' ','m','a','n',',',' ','a',' ','p','l','a','n',',',' ','a',' ','c','a','n','a','l',':',' ','P','a','n','a','m','a'};
        reverseString(inputV);

        return 0;
    }