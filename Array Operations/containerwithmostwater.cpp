#include <iostream>
#include <vector>
int maxArea(std::vector<int>&);

int main(){
    std::vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    std::cout<<"Most water is "<<maxArea(height)<<std::endl;
}

int maxArea(std::vector<int>& height){
    int water = 0;
    int i = 0, j = height.size() - 1;

    while (i < j) {
        int h = std::min(height[i], height[j]);
        water = std::max(water, (j - i) * h);

        while(height[i] <= h && i < j)
            i++;
        while(height[j] <= h && i < j)
            j--;
    }

    return water;
}