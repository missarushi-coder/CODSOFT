#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main(){
    cout<<"Let's play number-guess\n\n";
    //Generating random numbers on each go.
    int n;
    cout<<"Enter the no. of digits for the Guess number";
    cin>>n;
    srand(time(0));
    int num = rand()% n ;
    
    //player interaction
    cout<<"*****"<<endl;
    cout<<num<<endl;
    cout<<"Guess the number!"<<endl;
    int guess;
    cin>>guess;
    int i=1;
    while (guess != num & i<5){
         cout<<"Guess Again";
        cout<<"  ";
        cin>>guess;
        if (guess==num){
            cout<<"Wuhoo Right Guess!\n\n";
            break;
            }else if (guess < (num/4) & guess >(num/10)){
                 cout<<"Guess is too low!\n";
            }else if(guess < (num/2)){
                 cout<<"Guess is low!\n";
            }else if(guess > (num/2) & guess<(num)){
                 cout<<"Guess is close!\n";
            }else if(guess > (num*(3/4)) & guess<(num)){
                 cout<<"Guess is high!\n";
            }else
                 cout<<"Guess is too high!\n";
        i++;
    }
      cout<<"Try Again with a new number";  
    return 0;
}
