#include <iostream>
using namespace std;
template<class T1, class T2>
float allAverage(T1 a,T2 b){
float avg=(a+b)/2.0;
return avg;
}
int main(){
float a;
a=allAverage(9.9,8);
cout<<"The average of given numbers is :"<<a;
return 0;
}
