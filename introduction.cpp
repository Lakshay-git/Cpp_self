#include <iostream>
using namespace std;

int main()
{
    // // cout<<"hello world lakshay"<<endl;
    // // cout<<"next line";
    // int a, b, c;
    // short sa=9;
    // cout<<sa;

    // camelcase notation
    //  int marksInMaths=83;
    //  cout<<"the marsks of the student in maths is "<<marksInMaths;

    // short a;
    // int b;
    // long c;
    // long long d;

    // float const score = 45.32;
    // double score2 = 45.32;
    // long double score3 = 45.32;
    // score = 34.2;
    // cout<<"the score is "<<score;

    // int a, b;
    // cout<<"enter the first number "<<endl;
    // cin>>a;

    // cout<<"enter the second number "<<endl;
    // cin>>b;

    // cout<<"the sum is "<<a+b;

    // cout<<"a + b is"<<a + b<<endl;
    // cout<<"a - b is"<<a - b<<endl;
    // cout<<"a * b is"<<a * b<<endl;
    // cout<<"a / b is"<<(float) a / b<<endl;

    int age;
    cout << "enter your age " << endl;
    cin >> age;

    switch (age)
    {
    case 12:
        cout << "you are 12 years old";

        break;
    case 18:
        cout << "you are 18 years old ";

    default:
        cout << "you are neither 12 nor 18 years old";
        break;
    }
    // if(age>150){
    //     cout<<"invalid age";
    // }
    // else if(age>=18){
    //     cout<<"you can vote ";

    // }
    // else{
    //     cout<<"you can not vote ";
    // }

    return 0;
}
