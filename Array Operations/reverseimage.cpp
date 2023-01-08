#include <iostream>
#include <vector>
#include <algorithm>

void rotate(std::vector<std::vector<int>>&);

int main(){
    std::vector<std::vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    rotate(matrix);

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix.at(i).size(); j++){
            std::cout<<matrix.at(i).at(j)<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}

void rotate(std::vector<std::vector<int>>& matrix){
    reverse (matrix.begin(), matrix.end());

    int n = matrix.size();
    for (int i = 0 ; i<n ; i++){
        for (int j = i; j<n ; j++)
            std::swap(matrix[i][j], matrix[j][i]);    
    }      
}
