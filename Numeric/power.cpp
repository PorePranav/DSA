#include <algorithm>
#include <iostream>
double myPow(double, int);

int main(){
    std::cout<<myPow(2, 10)<<std::endl;
    return 0;
}

double myPow(double x, int n) {
    if(n < 0) {
        x = 1 / x;
    } 
    
    long num = std::labs(n);
    double pow = 1;
    
    while(num){
        if(num & 1)
            pow *= x;
        
        x *= x;
        num >>= 1;
    }
    
    return pow;
}
