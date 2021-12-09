#include <iostream>
using namespace std;
int main(){
    int a,b;
    char c;
cout<<"------------------------------- SIMPLE CALCULATOR-------------------------------"<<endl;
cout<<"What you want to do operations,'+','*','/','-','%'"<<endl;
cin>>c;
cout<<"Enter The Value of first number:"<<endl;
cin>>a;
cout<<"Enter The value of second element:"<<endl;
cin>>b;

if (c=='+')
     cout<<"The sum of given values is:"<<a+b<<endl;

else if (c=='*')
     cout<<"The multiplication of given values is:"<<a*b<<endl;

else if (c=='/')
     cout<<"The dividing of given values is:"<<a/b<<endl;

else if (c=='-')
     cout<<"The substraction of given values is:"<<a-b<<endl;

else if (c=='%')
     cout<<"The modulus of given values is:"<<a%b<<endl;
else
    cout<<"You have entered wrong operation, Try again!"<<endl;


return 0;
}
