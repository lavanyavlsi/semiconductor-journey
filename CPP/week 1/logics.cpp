#include<iostream>
#include<string>
using namespace std;

int main(){
    int age;
    int income;
    float score;

    cout<<"----Welcome to loan checker----"<<endl;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your Monthly income: ";
    cin>>income;
    cout<<"Enter your credit score: ";
    cin>>score;

    if(age>=21 && income>=30000 && score >= 700){
        cout<<"Congraluations!!"<<endl;
        cout<<"You are eligible for loan";
    }
    else {
        if(age<21)
            cout<<"Rejected because your age is below 21"<<endl;

        if(income<30000)
            cout<<"Rejected because your monthly income is below 30000"<<endl;

        if(score<700)
            cout<<"Rejected because your credit score is below 700"<<endl;
    }
    
}
