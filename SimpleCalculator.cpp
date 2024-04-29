#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //Initial interface
    cout<<"Calculator"<<endl;
    char op;
    cout<<"Choose Operetion +,-,*,/"<<endl;
    cin>>op;
    float num1, num2, result;
    cout<<"Give no. 1- ";
    cin>>num1;
    cout<<"Give no. 2- ";
    cin>>num2;
    if (op =='+')
    {
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
    }
    else if (op =='-')
    {
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
    }
    else if (op =='*')
    {
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
    }
    else if (op =='/')
    {
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
    }
    

    return 0;
}
