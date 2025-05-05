#include <iostream>
using namespace std;

bool isEven(int n){
    //shifting the number to the right and then that shifting num to left and seeing if its equal
    //the shifted number would get a 0 when its shifted to left
    //if its equal then its even else odd
    return (n==(n>>1)<<1);
}
int main(){
    int n;
    cout << "Enter a binary num: ";
    cin >> n;
    if(isEven(n)==true){
        cout << "Even";
    }else{
        cout << "Odd";
    }
    return 0;
}
