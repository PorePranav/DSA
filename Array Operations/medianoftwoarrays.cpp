#include <iostream>
#include <algorithm>
#include <vector>

double findMedianSortedArrays(std::vector<int>&, std::vector<int>&);

int main(){
    std::vector nums1 = {2, 4, 6, 8};
    std::vector nums2 = {1, 3, 5, 7};

    std::cout<<"Median of the two vectors is: "<<findMedianSortedArrays(nums1, nums2)<<std::endl;

    return 0;
}

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::vector<int> v;
    
    for(int num : nums1)
        v.push_back(num);
    
    for(int num : nums2)
        v.push_back(num);
    
    
    std::sort(v.begin(),v.end());
    
    int s = v.size();
    
    return s % 2 ? v[s / 2] : (v[s / 2 - 1] + v[s / 2]) / 2.0;
}
