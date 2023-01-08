#include <iostream>
#include <stack>

int main(){
    std::stack<int> s;
    s.push(0);
    s.push(1);
    s.push(2);

    std::cout<<"Top element: "<<s.top()<<std::endl;
    std::cout<<"Size: "<<s.size()<<std::endl;

    std::cout<<"Empty or not: "<<s.empty()<<std::endl;
    return 0;
}