#include <iostream>
#include <stack>

int calculate(std::string);

int main(){
    std::string s = "4 + 8";
    std::cout<<calculate(s)<<std::endl;
    return 0;
}

int calculate(std::string s) {
    std::stack<int> nums; 
    int answer = 0; 
    long long value = 0, sign=1; 
    
    for (char c : s) { 
        if (isdigit(c)) {
            value = 10 * value + c - '0'; 
        }

        else if(c == '+'){
            answer += value * sign; 
            value = 0;
            sign = 1;   
        }

        else if(c=='-'){
            answer += value*sign; 
            value = 0; 
            sign = -1; 
        }

        else if(c=='('){
            nums.push(answer);    
            nums.push(sign); 
            answer = 0; 
            sign = 1;
        }

        else if(c==')' ){ 
            answer += value * sign; 
            value = 0;
            
            answer = answer * nums.top();
            nums.pop();
            answer= answer + nums.top();
            nums.pop();
            }
        }
        
        answer += value * sign; 
        return answer; 
}