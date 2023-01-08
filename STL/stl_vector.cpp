#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    std::cout<<"Size: "<<v.capacity()<<std::endl;

    v.push_back(0);
    std::cout<<"Size: "<<v.capacity()<<std::endl;

    v.push_back(1);
    std::cout<<"Size: "<<v.capacity()<<std::endl;

    v.push_back(2);
    std::cout<<"Size: "<<v.capacity()<<std::endl;

    std::cout<<"1st Element: "<<v.front()<<std::endl;
    std::cout<<"Last Element: "<<v.back()<<std::endl;


    std::cout<<"Before popping"<<std::endl;

    for(int i = 0; i < v.size(); i++){
        std::cout<<v.at(i)<<" ";
    }
    std::cout<<std::endl;

    v.pop_back();

    std::cout<<"After popping"<<std::endl;

    for(int i = 0; i < v.size(); i++){
        std::cout<<v.at(i)<<" ";
    }
    std::cout<<std::endl;

    return 0;
}