#include <iostream>
using namespace std;
int main(){
    int x, y, z;
    cout<<"enter a number : ";
    cin>>x;
    cout<<"enter another number : ";
    cin>>y;
    cout<<"enter another number : ";
    cin>>z;
    float p = float(x);  // typecasting of x from int to float
    float q = float(y);  // typecasting of y from int to float
    cout<<p/q<<endl;
    cout<<char(z);
}