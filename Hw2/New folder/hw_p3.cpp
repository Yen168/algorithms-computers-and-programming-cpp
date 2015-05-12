#include<iostream>
using namespace std;

int main(){
    int n1,n2;  
    cout << "Enter 2 integers: ";
    cin >> n1 >> n2;
    
    if(n1>n2)
        cout << "The first number entered is greater.\n";
    else if (n2>n1)
        cout << "The second number entered is greater.\n";
    else 
        cout << "The numbers are equal.\n"; 
    return 0;
    }
