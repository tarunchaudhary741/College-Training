#include <iostream>
using namespace std;

int main() {
    int num=9;
    int i=2;
    printf("%d",(num&(1<<i))!=0);
    return 0;
}
