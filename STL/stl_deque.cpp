#include <iostream>
#include <deque> //Double ended queue

void print_deque(std::deque<int>);

int main(){
    std::deque<int> d;
    d.push_back(1);
    d.push_front(2);

    print_deque(d);

    d.pop_front();
    print_deque(d);

    d.push_front(2);
    print_deque(d);

    std::cout<<"Element at index 1: "<<d.at(1)<<std::endl;

    std::cout<<"Element at front: "<<d.front()<<std::endl;
    std::cout<<"Element at back: "<<d.back()<<std::endl;

    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);

    print_deque(d);

    d.erase(d.begin(), d.begin() + 2); //Delete first 3elements d.begin() is iterator
    print_deque(d);

    return 0;
}

void print_deque(std::deque<int> d){
    for(int i = 0; i < d.size(); i++){
        std::cout<<d[i]<<" ";
    }
    std::cout<<std::endl;
}