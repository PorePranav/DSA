#include <iostream>
#include <vector>

std::string multiply(std::string, std::string);

int main(){
    std::string num1 = "123";
    std::string num2 = "456";

    std::string result = multiply(num1, num2);
    std::cout<<result<<std::endl;
    
    return 0;
}

std::string multiply(std::string num1, std::string num2) {
    if (num1 == "0" || num2 == "0") 
        return "0";
    
    std::vector<int> result(num1.size() + num2.size(), 0);
    
    for (int i = num1.size() - 1; i >= 0; i--) {
        for (int j = num2.size() - 1; j >= 0; j--) {
            result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
            result[i + j] += result[i + j + 1] / 10;
            result[i + j + 1] %= 10;
        }
    }
    
    int i = 0;
    std::string ans = "";

    while (result[i] == 0)
        i++;
    while (i < result.size())
        ans += std::to_string(result[i++]);
    
    return ans;
}
