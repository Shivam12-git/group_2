#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<<endl;
    cout<<"The factorial of 5 is ";
    cout<<factorial(5);
    int x=56;
    int y=98;
    cout<<endl;
    cout<<gcd(x,y);
    cout<<endl;
    cout<<gcd_rec(x,y);
    return 0;
}
