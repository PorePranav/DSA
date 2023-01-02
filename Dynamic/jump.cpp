#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using std::vector;

int jump(std::vector<int>&);

int main(){
    vector<int> nums = {2, 3, 1, 1, 4};
    
    std::cout<<"Answer is: "<<jump(nums)<<std::endl;
}

int jump(std::vector<int>& nums) {
    int n = nums.size();
    int *temp = new int[n];

    for(int i = 0; i < n; i++) 
        temp[i] = INT_MAX;
    
    temp[0]=0;
    int i=1,j=0;
    
    while(i < n) {
        if(nums[j] + j >= i) {
            temp[i] = std::min(temp[i], temp[j] + 1);
            i++;
        } 
        else 
            j++;
    }

    return temp[n-1];
}