#include <iostream>
#include <algorithm>

int lengthOfLastWord(std::string);

int main(){
    std::cout<<lengthOfLastWord("luffy is still joyboy")<<std::endl;

    return 0;
}

int lengthOfLastWord(std::string s) {
    auto x = s.rbegin();
    
    while(*x == ' ')
        x++;

    auto y = find(x,s.rend(),' ');
    
    return std::distance(x,y);
}
