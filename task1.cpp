#include <iostream>
using namespace std;

//creating class for the 4 arithmetic operations
class calc{
    private: 
    float a,b;
    public:
    float add(float a,float b);
    float sub(float a,float b);
    float mul(float a,float b);
    float div(float a,float b);
};
//Defining Addition
float calc::add(float,float){
    cout<<"Enter the two numbers you want to add : ";
    cin>>a>>b;
    float sum=a+b;
    cout<<"The Addition is: "<<sum;
    return 0;
}
//Defining Subtraction
float calc::sub(float, float){
    cout<<"Subtract ";
    cin>>a; cout<<" from "; cin>>b;
    float subt=b-a;
    cout<<"The Subtraction is: "<<subt;
}
//Defining multiplication
float calc::mul(float, float){
    cout<<"Enter the two numbers you want the product of : ";
    cin>>a>>b;
    float mul=a*b;
    return mul;
}
//Defining Division
float calc::div(float,float){
    cout<<"Enter Dividend: ";
    cin>>a; 
    cout<<"Enter Divisor: "; 
    cin>>b;
    if (b==0){
        cout<<"Infinite";
    }else{
        float mul=a*b;
        }    cout<<"Result is "<< mul;
}
int main(){
    calc calculator;
    float a,b;
    int x;
    do
    {
        cout<<"\nWelcome to the Quick Calculator\n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Quit \n";
        cout<<"\nWhat do you want to do :";
        cin>>x;
        switch(x)
        {
            case 1:calculator.add(a,b);break;
            case 2:calculator.sub(a,b);break;
            case 3:calculator.mul(a,b);break;
            case 4:calculator.div(a,b);break;
            case 5:break;
            default:cout<<"Error in input; try again\n";
        }
    }while(x!=5);
    return 0;
}