#include <iostream>

int climbStairs(int);

int main(){
    int stairs = 2;
    std::cout<<"There are "<<climbStairs(stairs)<<" ways"<<std::endl;

    return 0;
}

int climbStairs(int n) {
    int previous2 = 0, previous1 = 1;
    for(int i = 0; i < n; i++){
        int current = previous2 + previous1;
        previous2 = previous1;
        previous1 = current;
    }
    return previous1;
}