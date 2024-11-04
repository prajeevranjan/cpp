#include <iostream>
using namespace std;
int main(){
    int x = 5;
    cout<<x<<endl;
    // int x = 9;  // this will give me error because int x is already created
    // cout<<x<<endl;
    x = 8;  // this will not give me any error else it will update the value
    cout<<x<<endl;
    x = x + 9;
    cout<<x<<endl;
    x = x - 20;
    cout<<x<<endl;
    x += 5;
    cout<<x<<endl;
}