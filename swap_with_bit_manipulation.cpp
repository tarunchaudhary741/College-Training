#include <iostream>
using namespace std;
int main() {
    int a=3,b=20;
    cout<<"a="<<a<<" b="<<b<<endl;
    
    a=a^b;
    //since xor of same number is zero and third second variable would remain as it is
    b=a^b; //xoring (a^b)^b => a  
    a=a^b;
    cout<<"a="<<a<<" b="<<b;
    return 0;
}