#include<iostream>
using namespace std;
template<class T>
void swapp(T &a,T &b)
{  T temp=a;
a=b;
b=temp;
}
int main(){

int x=9,y=8;
swap(x,y);
cout<<x<<endl<<y;
return 0;
}
