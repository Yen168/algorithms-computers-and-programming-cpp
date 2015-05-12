#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

void prompt(int&, int&, int&);
int gcd(int, int);
void findFactors(int&, int&);

int main(){
    int a ,b ,c, g, fa1, fa2;

    cout<<"This program factors polynomials of the form: ax^2+bx+c \n";

    prompt(a,b,c);
    g=gcd(gcd(a,b),c);
    cout<<g<<endl;
    findFactors(fa1=a,fa2=c);   
 
    system("pause");
    return 0;            
    }

void prompt(int& a,int& b,int& c){
    
    
    cout<<"Enter a value for a: ";
    cin>>a;
    while(a==0){
        
        cout<<"a must be non-zero! Enter another value for a: ";
        cin>>a;
        
        }
    
    cout<<"Enter a value for b: ";
    cin>>b;
    cout<<"Enter a value for c: ";
    cin>>c;
    
    while(b==0&&c==0){
        
        cout<< "b and c cannot both be 0."
            << "Enter different values for b and c: ";
        cin>>b>>c;
        
        }
        
    return;
    }

int gcd(int a, int b)
{
    if(b==0) return a;
        else return gcd(b,a%b);
}

void findFactors(int& fa1, int& fa2){
    
    int sq, primetest=0;
    
    sq=fa1*fa2;
    
    if(fa1*fa2<0) sq*=-1;  
    
    sq=sqrt(sq);
    
    for(int i=sq*-1;i>=sq*-1&&i<=sq;i++){//sq>=i>=-sq
    
    if(i>0&&fa1*fa2<0&&i*sq*-1==fa1*fa2) continue;//avoid double solution
    if(i==0) continue; //avoid error when value/i
                  
    if(fa1*fa2%i==0){
               
               if(i>=1) primetest++; // positive number ;when primetest==1, the number is prime
               cout<<i<<" and "<<fa1*fa2/i<<endl;    
    }
        }
    
    
    return;
    
    }
