// HCF of two numbers
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if (a%b==0)return b;
    return gcd(b,a%b);
}
int main(){
    cout<<"HCF = "<<gcd(18,12);
}