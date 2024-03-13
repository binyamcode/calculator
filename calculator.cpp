#include <iostream>
using namespace std;
int main(){
    char op;
double number1,number2;
//Creating calculator using switch case:
cout <<"CALCULATOR\n";
cout <<"----------------------------------------------\n";
cout <<"Enter the operator '-','+','*' or'/'\n";
cin>>op;
switch(op){
    case '+': cout <<"Enter the two numers\n";
    cin>>number1>>number2;
    double sum;
    sum=number1+number2;
    cout <<"The sum of the two number is "<<sum;
    break;
    case '-': cout <<"Enter the two numnber\n";
    cin>>number1>>number2;
    double difference;
    difference=number1-number2;
    cout <<"The difference of the two number is "<<difference;
    break;
    case '*':cout <<"Enter the two number \n";
    cin>>number1>>number2;
    double multiplication;
    multiplication=number1*number2;
    cout <<"The multiplication of the two number is "<<multiplication;
    break;
    case '/': cout <<"Enter the two nuber \n";
    cin>>number1>>number2;
    double division;
    cout <<"The division of the two number is "<<division;
    break;
    default:
     cout <<"you entered is invalid";
}
}