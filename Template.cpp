#include <iostream>
using namespace std;
template<class P>
class vector{
public:
    P *arr;
    int size;
    vector(int a){
    size=a;
    arr =new P[size];
    }
    P dotProduct(vector &v){
    P d=0;
    for(int i=0; i<size; i++){
        d=this->arr[i]*v.arr[i];
    }
    return d;
    }

};
int main(){
vector<int> v1(3);
v1.arr[0]=9;
v1.arr[1]=8;
v1.arr[2]=9;
vector<int> v2(3);
v2.arr[0]=9;
v2.arr[1]=8;
v2.arr[2]=9;
int p=v1.dotProduct(v2);
cout<<p<<endl;
return 0;


}
