#include <iostream>
#include <vector>
using std::string;
using std::vector;
using std::cout;
using std::endl;

string convert(string&, int);

int main(){
    string s = "PAYPALISHIRING";
    int numRows = 4;

    cout<<convert(s, numRows)<<endl;
}

string convert(string &s, int numRows) {
    int size = s.size();
    if(numRows <= 1) 
        return s;

    string ans = "";
    vector<string> out(numRows);
    int crow = 0, dir = 1;  

    for(int i = 0; i < size; i++) {
        out[crow].push_back(s[i]);
        if(crow == 0)
            dir = 1;

        else if((crow+1) == numRows)
            dir = 2;

        if(dir == 1)
            crow++;
        else 
            crow--;        
        
    }

    for(auto &str: out) 
        ans += str;

    return ans;
}
