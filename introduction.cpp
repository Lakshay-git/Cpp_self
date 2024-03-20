#include <iostream>
#include<string>
using namespace std;

//f(x) = x^2 + 2
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
 class employee {
        public:
        string name;
        int salary;

        void printDetails()
        {
             cout<<"the name of our first employee is "<<this->name<<" and his salary is "<<this->salary<<endl;

        }
    };



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

    // int age;
    // cout << "enter your age " << endl;
    // cin >> age;

    // switch (age)
    // {
    // case 12:
    //     cout << "you are 12 years old";

    //     break;
    // case 18:
    //     cout << "you are 18 years old ";

    // default:
    //     cout << "you are neither 12 nor 18 years old";
    //     break;
    // }
    // // if(age>150){
    // //     cout<<"invalid age";
    // // }
    // // else if(age>=18){
    // //     cout<<"you can vote ";

    // // }
    // // else{
    // //     cout<<"you can not vote ";
    // // }

    //loop

    //  int index = 0;
    // while(index<35)
    // {
    //     cout<<"we ar at at index number"<<index<<endl;
    //     index = index + 1; 
    // }

    // do{
    //     cout<<"we ar at at index number"<<index<<endl;
    //     index = index + 1; 

    // }while(index<34);

    // for(int i= 0; i<=34; i++){
    //     cout<<"the value of i is" <<i<<endl;
    // }

    // int a, b;
    // cout<<"enter the first number "<<endl;
    // cin>>a;

    // cout<<"enter the second number "<<endl;
    // cin>>b;
    // cout<<"the function return"<<add(a,b)<<endl;
    
    // int arr2d[2][3] = {
    //     {1,2,3},
    //     {4,5,6}
    // };
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"the value at"<<i<<","<<j<<"is"<<arr2d[i][j]<<endl;
    //     }
        
    // }

    // int a = 343;
    // float b = 87.94;
    // cout<<(float) a/34<<endl;

    // cout<<(int)b;
    

    // string name = "lakshay soni";
    // cout<<"the name is "<<name<<endl;
    // cout<<"the length of name is  "<<name.length()<<endl;
    // cout<<"the name is "<<name.substr(1,155)<<endl;
    // cout<<"the name is "<<name.substr(2,3)<<endl;

    // int a = 34;
    // int* ptra;
    // ptra = &a;
    // cout<<"the value of a is "<<a<<endl;
    // cout<<"the value of a is "<<*ptra<<endl;
    // cout<<"the address of a is "<<&a<<endl;
    // cout<<"the address of a is "<<ptra<<endl;

    class employee {
        public:
        string name;
        int salary;
    };

    employee har;
    har.name = "harry";
    har.salary = 1000;
    har.printDetails();
    cout<<"the name of our first employee is "<<har.name<<" and his salary is "<<har.salary<<endl;

    return 0;
}
// code 