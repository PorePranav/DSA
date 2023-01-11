#include <iostream>
#include <vector>
#include <algorithm>

void nextPermutation(std::vector<int>&);
int main(){
    std::vector<int> nums = {1, 2, 3};
    nextPermutation(nums);

    for(int i = 0; i < nums.size(); i++)
        std::cout<<nums.at(i)<<" ";
    std::cout<<std::endl;

    return 0;
}

void nextPermutation(std::vector<int>& nums) {
    int n = nums.size(), k, l;
    for(k = n - 2; k >= 0; k--){
        if(nums[k] < nums[k + 1])
            break;
    }

    if(k < 0)
        std::reverse(nums.begin(), nums.end());
    else{
        for(l = n - 1; l > k; l--){
            if(nums[l] > nums[k])
                break;
        }
        std::swap(nums[k], nums[l]); 
        std::reverse(nums.begin() + k + 1, nums.end());
    }
}
