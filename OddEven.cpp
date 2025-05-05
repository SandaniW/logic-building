#include <iostream>
using namespace std;

bool isEven(int n){
    return (n%2 == 0);
}

int main(){
    int n;
    cout << "Enter a number: " << "\n";
    cin >> n;
    if(isEven(n))
        cout << "true";
    else
        cout << "false";
    return 0;
}
