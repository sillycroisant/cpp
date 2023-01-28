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

void print_amicable(int const limit)
{
    for(int number = 4; number < limit; ++number)
    {
        auto sum1 = sum_proper_divesors(number);
        if(sum1 < limit)
        {
            auto sum2 = sum_proper_divesors(sum1);
            if(sum2 == number && number != sum1)
            {
                std::cout << number <<","<< sum1 << "\n";
            }
        }
    }
}

int main(){
    int upper_limit;
    std::cout<<"Upper limit=";
    std::cin>> upper_limit;

    print_amicable(upper_limit);
}