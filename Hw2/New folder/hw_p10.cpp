#include<iostream>
#include<cstdlib>
using namespace std;

int reverse(int);

int main(){
   
    int num;
    cout << "Please enter an integer: ";
    cin >> num;
   
    cout << endl <<reverse(num) << endl;
   
    system("pause");
    return 0;
    }
   
int reverse(int num){
   
    int tmp;
    int reverse=0;
 
    while(num!=0){
        
        tmp=num%10;
        num=num/10;
        reverse=reverse*10+tmp;
            
    }   
    
    return reverse;
    
    }

 /*  do{
        tmp=num%10;
        num=num/10;
        reverse=reverse*10+tmp;
        cout<<num <<","<< tmp<<","<< reverse<< endl;
        }while(num!=0);
   
   */
