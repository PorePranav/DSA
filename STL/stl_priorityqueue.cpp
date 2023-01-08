#include <iostream>
#include <queue>

int main(){
    //Max Heap
    std::priority_queue<int> maxi;

    //Min Heap
    std::priority_queue<int, std::vector<int>, std::vector<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int size = maxi.size();

    for(int i = 0; i < size; i++){
        std::cout<<maxi.top()<<" ";
        maxi.pop();
    }
    std::cout<<std::endl;

    std::cout<<"Is empty: "<<maxi.empty()<<std::endl;

    mini.push(5);
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);

    size = mini.size();
    for(int i = 0; i < size; i++){
        std::cout<<mini.pop()<<" ";
    }
    std::cout<<std::endl;

    return 0;
}