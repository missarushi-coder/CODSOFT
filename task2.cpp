#include <cstdlib>
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;
int main(){
    cout<<"NUMBER-GUESS\n\n";
    cout<<"Rules:\n 1. You will have only 7 trials.\n 2. you will be alerted with where yo exist. like "<<"Too low means below 25%; low means between 25-50% . close means 50-75%,and too close means 75-99%\n";
    cout<<"Hint: The no. of stars is the number of digit contained in the guess-number\n\n";
    cout<<"Let's play!\n\n";
    //Generating random numbers on each go.
    int n;
    cout<<"Enter the last limit of the number ";
    cin>>n;
    srand(time(0));
    int num = rand()% n ;
    //Creating the symbol as hidden right digits
    int l=int(log10(num)+1);
    for (int i=1; i<=l; i++ ){
        cout<<" * ";
    }
    cout<<num<<endl;   //to get the right number
    
    //player interaction
    cout<<"Guess the number!"<<endl;
    int guess=-1;
    int i=1;
    while (guess != num & i<7){
        cin>>guess;
        if (guess==num){
            cout<<"Wuhoo Right Guess!\n\n";
            break;
            }else if (guess < num*0.25){
                 cout<<"Guess is too low!\n";
            }else if(guess < num*0.5){
                 cout<<"Guess is low!\n";
            }else if(guess < num*0.75 ){
                 cout<<"Guess is close!\n";
            }else if(guess > num*0.75 & guess < num){
                 cout<<"Guess is close!\n";
            }else
                 cout<<"Guess is too far!\n";
            cout<<"Guess Again";
            cout<<"  ";
        i++;
    }
      cout<<"Try Again with a new number";  
    return 0;
}
