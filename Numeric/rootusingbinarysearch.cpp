#include <iostream>
int rootusingbinary(int);

int main(){
    std::cout<<"Enter a number: ";
    int n;
    std::cin>>n;

    std::cout<<"The root of "<<n<<" is "<<rootusingbinary(n)<<std::endl;

    return 0;
}

int rootusingbinary(int x){
    int left = 0;
    int right = (x / 2);
    int mid = left + (right - left) / 2;
    int ans = 0;

    while(left <= right){
        if((mid * mid) > x)
            right = mid - 1;
        else if((mid * mid) < x){
            left = mid + 1;
            ans = mid;
        }
        else{
            ans = mid;
            break;
        }

        mid = left + (right - left) / 2;
    }

    return ans;
}