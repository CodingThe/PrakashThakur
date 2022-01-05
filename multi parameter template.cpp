#include <iostream>
using namespace std;
template<class T1,class T2>
class myWork{
public:
    T1 data1;
    T2 data2;
    myWork(T1 a,T2 b){
    data1 =a;
    data2 =b;}
    void display(){
    cout<<this->data1<<" "<<endl;
    cout<<this->data2;
    }

};
int main(){
myWork<int ,char>obj(9,'a');
obj.display();`
return 0;
}
