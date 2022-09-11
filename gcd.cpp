#include <iostream>
using namespace std;
// Function to return gcd of a and b
int gcd(int a, int b)
{
    int result = min(a, b); // Find Minimum of a and b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}
 
int gcd_rec(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd_rec(a-b, b);
    return gcd_rec(a, b-a);
}

// Driver program to test above function
int main()
{
    int a,b;
    cin>>a>>b;
    cout << "GCD of " << a << " and " << b << " is "
         << gcd_rec(a, b);
    return 0;
}


  