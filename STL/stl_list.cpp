#include <iostream>
#include <list>

void print_list(std::list<int>);

int main(){
    std::list<int> l;

    l.push_back(1);
    l.push_front(2);

    print_list(l);

    l.erase(l.begin());
    std::cout<<"After erasing: ";
    print_list(l);

    std::cout<<"Size of the list is: "<<l.size()<<std::endl;

    std::list<int> copyList(5, 100);
    print_list(copyList);
    return 0;
}

void print_list(std::list<int> l){
    for(int i: l)
        std::cout<<i<<" ";
    std::cout<<std::endl;
}