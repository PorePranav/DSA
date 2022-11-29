#include <iostream>
#include <unordered_map>
#include <sstream>


bool wordPattern(std::string, std::string);

int main(){
    std::cout<<wordPattern("abba", "dog cat cat dog")<<std::endl;

    return 0;
}

bool wordPattern(std::string pattern, std::string s) {
    std::unordered_map<char, int> patternToInt;
    std::unordered_map<std::string, int> wordToInt;
    
    std::istringstream in(s); 
    std::string word;
    int i = 0;
    int n = pattern.size();

    for(word; in >> word; i++){
        if(i==n || patternToInt[pattern[i]] != wordToInt[word])
            return false;
        patternToInt[pattern[i]] = wordToInt[word] = i+1; 
    }

    return i==n;
}