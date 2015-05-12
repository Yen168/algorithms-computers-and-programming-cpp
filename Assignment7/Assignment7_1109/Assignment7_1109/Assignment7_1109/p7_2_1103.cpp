#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

void prompt(int&, int&, int&);
int gcd(int, int);
int gcd2(int, int);
void findFactors(int&, int&);

int main(){
    int a ,b ,c, g, fa1, fa2;

    cout<<"This program factors polynomials of the form: ax^2+bx+c \n";

    prompt(a,b,c);
    g=gcd2(gcd2(a,b),c);
    cout<<g<<endl;
    
    a=a/g;
    b=b/g;
    c=c/g;
    findFactors(fa1=a*c,fa2=b); 
    cout<<"fa1: "<<fa1<<" fa2: "<<fa2<<endl; 
 
    cout<<g<<"("<<gcd2(a,fa1)<<"x"<<gcd2(fa2,c)<<")("<<a/gcd2(a,fa1)<<"x"<<c/gcd2(fa2,c)<<")"<<endl; 
 
 
 
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
    if(b==0) return a;
        else return gcd(b,a%b);
}

int gcd2(int a, int b)
{
    int temp,sign;
    
    //if(a>0)sign=1;
    //else sign=-1;

    sign=a;
    
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    
    }
    
   // if(sign==1){
     //   if(a<0)a*=-1;
       // }
    //else if (sign==-1){
      //  if(a>0)a*=-1;
        //}
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
