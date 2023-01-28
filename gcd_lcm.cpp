#include <bits/stdc++.h>

unsigned int gcd(unsigned int a, unsigned int b){
    while(b != 0){
        unsigned int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int const a, int const b){
    int h = gcd(a,b);
    return h ? (a * ( b / h)) : 0;
}

int main(){
    int a, b;
    std::cout <<"Input two numbers : ";
    std::cin >> a >> b;
    std::cout <<"Greatest common divisor of "<<a<<" and "<<b<<" = "<<gcd(a,b)<<"\n";
    std::cout <<"Least common multiple of "<<a<<" and "<<b<<" = "<<lcm(a,b);
}