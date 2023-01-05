#include <iostream>
#include <vector>

void mergeSorted(std::vector<int>& nums1, std::size_t m, std::vector<int>& nums2, std::size_t n) {
    int a = m - 1;
    int b = n - 1;

    for (int i = m + n - 1; b >= 0; i--) {
        if (a >= 0 && nums1[a] > nums2[b]) 
            nums1[i] = nums1[a--]; 
        else 
            nums1[i] = nums2[b--];
    }
}

int main(){
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    std::vector<int> nums2 = {2, 5, 6};

    mergeSorted(nums1, nums1.size(), nums2, nums2.size());

    for(int i = 0; i < nums1.size(); i++)
        std::cout<<nums1.at(i)<<" ";

    std::cout<<std::endl;

    return 0;
}

