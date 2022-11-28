#include <iostream>
#include <climits>
int divide(int, int);

int main(){
    std::cout<<divide(10, 3)<<std::endl;

    return 0;
}

int divide(int dividend, int divisor) {
    long long int ans=(long long) dividend / divisor;
    if(ans >= INT_MAX)
        return INT_MAX;

    else if(ans <= INT_MIN)
        return INT_MIN;

    else
        return ans;
}
