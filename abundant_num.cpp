#include<bits/stdc++.h>

int sum_proper_divesors(int const number){
    int result = 1;
    for(int i = 2; i <= sqrt(number); i++){
        if(number % i == 0){
            result += ( i == (number / i)) ? i : (i + number/i);
        }
    }
    return result;
}

void print_abundant(int const limit){
    for(int number = 10; number <= limit; ++number){
        auto sum = sum_proper_divesors(number);
        if(sum > number)
        {
            std::cout <<number<<", abundance="<<sum-number<<"\n";
        }
    }
}

int main(){
    int upper_limit;
    std::cout <<"Upper limit=";
    std::cin >>upper_limit;
    
    print_abundant(upper_limit);
}