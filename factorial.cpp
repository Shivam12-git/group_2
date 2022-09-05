#include "functions.h"
#include<iostream>
using namespace std;

int factorial(int n){
    int a;
    int b;
    if(n<0){

        cout<<"enter a positive number";
        return -1;

    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
