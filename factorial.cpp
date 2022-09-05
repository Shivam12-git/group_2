#include "functions.h"
#include<iostream>
using namespace std;

int factorial(int n){
    int a;
    int b;
    if(n<0){
        printf("%s","enter a positive number");
        return 0;
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
