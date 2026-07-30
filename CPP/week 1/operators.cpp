#include <iostream>
#include <string>
using namespace std;

int main(){
    float english;
    float math;
    float physics;
    float chemistry;
    float comp;
    float per;
    float total;

    cout<<"Enter you marks in English: ";
    cin>>english;
    cout<<"Enter you marks in Mathematics: ";
    cin>>math;
    cout<<"Enter you marks in Physics: ";
    cin>>physics;
    cout<<"Enter you marks in Chemistry: ";
    cin>>chemistry;
    cout<<"Enter you marks in Computer: ";
    cin>>comp;

    total = english + math + physics + chemistry + comp;
    per = (total/500)*100;

    cout<<"Your total marks are: "<<total<<endl;
    cout<<"Your percentage is: "<<per<<endl;

}