#include<iostream>
using namespace std;
int main(){
    cout<<"----------------Simple Calculator-----------------"<<endl;
    cout<<"        "<<endl;
    cout<<"||   ----------Lets Used it-------------- || "<<endl;

    char op;
    float number1, number2;
    cout<<"Choose your Operator +, -, *, / "<<endl;
    cin>>op;

 cout<<"Enter the two Number:"<<endl;
 cin>>number1>>number2;
 int result =0;

     switch(op){
        case '+':
        result = number1+number2;
        cout<<"sum is  :"<<result;
        break;
        
        case '-':
        result = number1-number2;
        cout<<"sum is  :"<<result;
        break;

        case '*':
       result = number1*number2;
        cout<<"sum is  :"<<result;
        break;

        case '/':
        if(number2!=0){
      result = number1/number2;
        cout<<"sum is  :"<<result;
        } else{
         cout<<"Error Num2 is not suppose to be 0";
        }
        break;

        default :
        cout<<"Wrong choice Please choose the correct operator "<<endl;
        break;
     }

     return 0;
    
}