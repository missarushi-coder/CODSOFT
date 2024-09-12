#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main(){
    int n=100000;
//Generating random numbers on each go.
    srand(time(0));
    cout<< rand()% n ;
    return 0;
}
