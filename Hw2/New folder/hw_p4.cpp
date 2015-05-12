#include<cstdlib>
#include<iostream>

using namespace std;

int main(){
    
    double degree;
    char temp;
    
    cout << "Please enter a number for temperature degree: ";
    cin >> degree;
    cout << "Please enter 'F' for Fahrenheit or 'C' for Celsius: ";
    cin >> temp;
    
if(temp == 'C') 
cout<<"Celsius " << degree << " = " 
<< "Fahrenheit " <<degree*9/5+32<<endl;
else if(temp == 'F') 
cout<<"Fahrenheit " << degree << " = " 
<< "Celsius " <<5*(degree-32)/9<<endl;
    
    switch(temp){
                 
    case 'C': 
    cout<<"Celsius " << degree << " = " 
<< "Fahrenheit " <<degree*9/5+32<<endl;
    break;
    
    case 'F':
    cout<<"Fahrenheit " << degree << " = " 
<< "Celsius " <<5*(degree-32)/9<<endl;
    break;

    default: break;             
                             
    }
    
    system("pause");
    return 0;
    
    }
