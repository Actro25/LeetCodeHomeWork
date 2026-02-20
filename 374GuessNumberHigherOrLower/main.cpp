#include <iostream>

int secret_num;
int guess(int num){
    if(num>secret_num)
        return -1;
    else if (num<secret_num)
        return 1;
    else
        return 0;
}

int guessNumber(int n) {
    int L = 0, R = n;
    int middle = (R - L) / 2;
    while (L<=R)
    {
        int guessNum = guess(middle);
        if(guessNum == -1)
            R = middle - 1;
        else if(guessNum == 1)
            L = middle + 1;
        else
            return middle;
        middle = L + (R-L)/2;
    }
    return 0;
}

int main(){
    secret_num = 20;
    std::cout<<"Num:"<<guessNumber(100);
    return 0;
}