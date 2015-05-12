// Yen-An Chen
// Math 3300 Programming Assignment 7 - Program 2 p7_2.cpp
// The program will factor a polynomial of the type ax^2+bx+c.

#include<iostream>
#include<cstdlib>
#include<cmath>
#include<iomanip>

using namespace std;

void prompt(int&, int&, int&);
int gcd(int, int);
void findFactors(int&, int&);
void display(int,int,int,int,int,int);

int main(){
    int a ,b ,c, g, fa1, fa2;

    cout<<"This program factors polynomials of the form: ax^2+bx+c \n";

    prompt(a,b,c);
    
    g=gcd(gcd(a,b),c);
    
    a=a/g;
    b=b/g;
    c=c/g;
    
    findFactors(fa1=a*c,fa2=b); 
     
    display(g,a,b,c,fa1,fa2);    
 
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
        cout<<"b: ";
        cin>>b;
        cout<<"c: ";
        cin>>c;
        
        }
        
    return;
    }

int gcd(int a, int b)
{
    int temp,sign;
    
    sign=a;
    
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    
    }
    
    if((sign>0&&a<0)||(sign<0&&a>0)) a*=-1;
    
    return a;
}

void findFactors(int& fa1, int& fa2){
    
    int sq,test=0;
    
    sq=fa1;
    
    if(fa1<0) sq*=-1;  
    
    sq=sqrt(sq);
    
    for(int i=sq*-1;i>=sq*-1&&i<=sq;i++){//sq>=i>=-sq
    
    if(i>0&&fa1<0&&i*sq*-1==fa1) continue;// to avoid double solutions
    if(i==0) continue; // to avoid error when value/i
                  
    if(fa1%i==0){
               
               if((i+fa1/i)==fa2){
                    fa1=fa1/i;
                    fa2=i;
                    test++;
                    break;
                    }
    }
       
        }
    
    if(test==0){
        fa1=0;
        fa2=0;
        }
    
    return;
    
    }

void display(int g,int a,int b,int c,int fa1,int fa2){
    
    if(g==1){
        if(fa1==0&&fa2==0){
            if(c==0) cout<<"x"<<"("<<a<<"x"<<showpos<<b<<")"<<endl; 
            else cout<<"This polynomial does not factor."<<endl;
            }
        else cout<<"("<<gcd(a,fa1)<<"x"<<showpos<<gcd(fa2,c)<<")("<<noshowpos<<a/gcd(a,fa1)<<"x"<<showpos<<c/gcd(fa2,c)<<")"<<endl;    
        }
    else if(g==-1){
        if(fa1==0&&fa2==0){
            //if(c==0) cout<<g<<"x"<<"("<<a<<"x"<<showpos<<b<<")"<<endl; 
            if(c==0) cout<<"x"<<"("<<g*a<<"x"<<showpos<<g*b<<")"<<endl;
            else cout<<"This polynomial does not factor."<<endl;
            }
        //else cout<<g<<"("<<gcd(a,fa1)<<"x"<<showpos<<gcd(fa2,c)<<")("<<noshowpos<<a/gcd(a,fa1)<<"x"<<showpos<<c/gcd(fa2,c)<<")"<<endl;    
        else cout<<"("<<g*gcd(a,fa1)<<"x"<<showpos<<g*gcd(fa2,c)<<")("<<noshowpos<<a/gcd(a,fa1)<<"x"<<showpos<<c/gcd(fa2,c)<<")"<<endl;
        }
        
    else{ 
        
        if(fa1==0&&fa2==0){
            if(c==0) cout<<g<<"x"<<"("<<a<<"x"<<showpos<<b<<")"<<endl; 
            else cout<<g<<"("<<a<<"x^2"<<showpos<<b<<"x"<<c<<")"<<endl;
            } 
        else cout<<g<<"("<<gcd(a,fa1)<<"x"<<showpos<<gcd(fa2,c)<<")("<<noshowpos<<a/gcd(a,fa1)<<"x"<<showpos<<c/gcd(fa2,c)<<")"<<endl;   
        }

    return;
    
    }
