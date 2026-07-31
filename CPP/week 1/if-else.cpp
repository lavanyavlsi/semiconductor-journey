#include<iostream>
#include<string>
using namespace std;

int main(){
    float per;


    cout<<"---Welcome to Grade calculator---"<<endl;
    cout<<"Enter your percentage: "<<endl;
    cin>>per;

    if(per>=90 && per<=100){
        cout<<"Your grade is A"<<endl;
        cout<<"Excellent work"<<endl;

    }
    else if (per>= 80 && per<90){
        cout<<"Your grade is B"<<endl;
        cout<<"Good work done"<<endl;
    }
    else if (per>= 70 && per<79){
        cout<<"Your grade is C"<<endl;
        cout<<"Satisfactory"<<endl;
    }
    else if (per>= 60 && per<69){
        cout<<"Your grade is D"<<endl;
        cout<<"Needs improvement"<<endl;
    }
    else if (per < 60){
        cout<<"Your grade is F"<<endl;
        cout<<"Failed"<<endl;
    }
    else{
        cout<<"Invalid grade entered";
    }
}