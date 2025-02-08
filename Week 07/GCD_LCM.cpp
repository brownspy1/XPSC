// Created by M.Mahadi on 2025-02-09 Time:02-02-36
#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b){
    return __gcd(a,b);
}
/*
gcd(a,b)*lcm(a,b) = a*b
lcm(a,b) = (a*b)/gcd(a,b) or (a/gcd(a,b))*b
*/
int LCM(int a, int b){
    return (a/__gcd(a,b))*b;
}
int main(){
    
    return 0;
}