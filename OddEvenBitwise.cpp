#include <iostream>
using namespace std;

bool isEven(int n){
    return (n & 1) == 0;
}
int main(){
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    if(isEven(n)==true){
        cout << "Is even";
    }else{
        cout <<  "Is odd";
    }
    return 0;
}
