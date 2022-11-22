#include <iostream>
#include <unordered_map>
int romanToInt(std::string);

int main(){
    std::cout<<romanToInt("III")<<std::endl;
    return 0;
}
int romanToInt(std::string s) {
    std::unordered_map<char,int> rti{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };

    int ans = 0;

    for(int i = 0; i < s.size(); i++){
        if(rti[s[i]] < rti[s[i+1]])
            ans -= rti[s[i]];
        else
            ans += rti[s[i]];
    }

    return ans;
}