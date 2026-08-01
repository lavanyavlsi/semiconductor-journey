#include<iostream>
using namespace std;

int main(){
    float num1;
    float num2;
    float total;
    int choice;

    cout<<"---Welcome to calculator---";
    cout<<"The following operations done are: "<<endl;
    cout<< "Addition"<<endl;
    cout<< "Subtraction"<<endl;
    cout<< "Multiplication"<<endl;
    cout<< "Division"<<endl;
    
    cout<<"Enter the choice: ";
    cin>>choice;

    if(choice == 1){
        cout<<"---We will perform addition function---"<<endl;
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        total = num1 + num2;
        cout<<"The total of your number is: "<<total;
    }
    else if(choice == 2){
        cout<<"---We will perform subtraction function---"<<endl;
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        total = num1 - num2;
        cout<<"The total of your number is: "<<total;
    }
    else if(choice == 3){
        cout<<"---We will perform multiplication function---"<<endl;
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        total = num1 * num2;
        cout<<"The total of your number is: "<<total;
    }
    else if(choice == 4){
        cout<<"---We will perform division function---"<<endl;
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        total = num1 / num2;
        cout<<"The total of your number is: "<<total;
    }
    else{
        cout<<"---Invalid choice entered---";
    }
}