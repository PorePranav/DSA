#include <iostream>
#include <queue>

int main(){
    std::queue<std::string> q;
    q.push("Hello");
    q.push("World!");

    std::cout<<"First element: "<<q.front()<<std::endl;
    q.pop();

    std::cout<<"First element: "<<q.front()<<std::endl;
    std::cout<<"Size: "<<q.size()<<std::endl;

    return 0;
}