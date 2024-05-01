#include <iostream>
using namespace std;
extern int add(int,int);
int main(){
    int a=100;
    int b=20;
    int c=add(a,b);
    cout<<c;
    return 0;
}