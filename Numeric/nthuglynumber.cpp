#include <iostream>

int nthuglynumber(int);

int main(){
    int n = 10;
    std::cout<<n<<"th ugly number is: "<<nthuglynumber(n)<<std::endl;

    return 0;
}

int nthuglynumber(int n){
    int uglyNumber = 1;
    int count = 0;

    while(count < n){
        int temp = uglyNumber;
        while(temp % 2 == 0) temp /= 2;
        while(temp % 3 == 0) temp /= 3;
        while(temp % 5 == 0) temp /= 5;

        if(temp == 1){
            count++;
            uglyNumber++;
        }
    }

    return uglyNumber;
}