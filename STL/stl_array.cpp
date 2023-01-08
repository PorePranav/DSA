#include <iostream>
#include <array>

int main(){
    int basic[] = {1, 2, 3}; //Normal Array
    std::array<int, 4> stl_array = {1, 2, 3, 4}; //STL Array

    int size = stl_array.size();

    for(int i = 0; i < size; i++){
        std::cout<<stl_array[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Element at index 2 is: "<<stl_array.at(2)<<std::endl;

    std::cout<<"Empty or not: "<<stl_array.empty()<<std::endl;

    std::cout<<"First element is: "<<stl_array.front()<<std::endl;
    std::cout<<"Last element is: "<<stl_array.back()<<std::endl;

    return 0;
}