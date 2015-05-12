// Yen-An Chen
// Math 3300 Programming Assignment 9 - Program 1 p9_1.cpp
// fraction class

#include<cstdlib>
#include<iostream>
using namespace std;

class fraction{
    
    private:
        
        int n,d;
        
        int gcd();

    public:
        
         //constructors
         fraction();
         fraction(int);
         fraction(int,int);
        
         //other class functions
         int num();
         int denom();
         void reduce();
         double convert();
         void change(int,int);
    
    };
    
//Define constructors

fraction::fraction(){
    n=0;
    d=1;
    }

fraction::fraction(int a){
    n=a;
    d=1;
    }

fraction::fraction(int a,int b){
    n=a;
    d=b;    
    }   
    
//Define other class function

void fraction::change(int a,int b){
     
     n=a;
     d=b;
     }

int fraction::gcd(){
    
    int x=n,y=d;
    int gcd;

    while(y!=0)
    {
        gcd=y;
        y=x%y;
        x=gcd;
    }
    
    if(gcd<0)gcd*=-1;
    
    return gcd;
    
    }

int fraction::num(){
    
    return n;
    
    }

int fraction::denom(){
    
    return d;
    
    }
    
void fraction::reduce(){
    
    int x=gcd();
    
    n/=x;
    d/=x;
    
    if(d<0){
    
    d*=-1;n*=-1;
        
    }
    
    }

double fraction::convert(){
    
    double c = n/(double)d;
    return c;
    
    }

//Overloaded operators

fraction operator+(fraction f){
         
         return f;
         
         }
         
fraction operator-(fraction f){
         
         int a=-1*f.num();
         int b=f.denom();
         
         fraction k(a,b);
         
         return k;  
         
         }
         
fraction operator+(fraction a,fraction b){
         
         int i,j;
         
         if(a.denom()==b.denom()){
                
                i=a.num()+b.num();
                j=a.denom();
                
                fraction k(i,j);
                k.reduce();
                
                return k;
                               
                }
        else{
            
            i=a.num()*b.denom()+b.num()*a.denom();
            j=a.denom()*b.denom();
            
            fraction k(i,j);
            k.reduce();
            
            return k;
           
            }
        
         }
         
void operator+=(fraction& a,fraction b){
         
         a=a+b;
        
         }                  


fraction operator-(fraction a,fraction b){
         
         int i,j;
         
         if(a.denom()==b.denom()){
                
                i=a.num()-b.num();
                j=a.denom();
                
                fraction k(i,j);
                k.reduce();
                
                return k;
                               
                }
        else{
            
            i=a.num()*b.denom()-b.num()*a.denom();
            j=a.denom()*b.denom();
            
            fraction k(i,j);
            k.reduce();
            
            return k;
           
            }        
         
         }

void operator-=(fraction& a,fraction b){
         
         a=a-b;
        
         }

fraction operator*(fraction a,fraction b){
         
         int i,j;
         
         i=a.num()*b.num();
         j=a.denom()*b.denom();
         
         fraction k(i,j);
         k.reduce();
            
         return k;
         
         }

void operator*=(fraction& a,fraction b){
         
         a=a*b;
        
         }    

fraction operator/(fraction a,fraction b){
         
         int i,j;
         
         i=a.num()*b.denom();
         j=a.denom()*b.num();
         
         if(j==0){
            
            cout<<"Cannot divide by 0. I'm setting this to 0. "<<endl;
            fraction k;
            return k;
                
            }
         else{
         
         fraction k(i,j);
         k.reduce();
           
         return k;
         }
         
         } 

void operator/=(fraction& a,fraction b){
         
         a=a/b;
        
         }

bool operator<(fraction a,fraction b){
         
         if(a.num()*b.denom()<b.num()*a.denom()) return true;
         else return false;
        
         } 
         
bool operator<=(fraction a,fraction b){
         
         if(a.num()*b.denom()<=b.num()*a.denom()) return true;
         else return false;
        
         }        
         
bool operator>(fraction a,fraction b){
         
         if(a.num()*b.denom()>b.num()*a.denom()) return true;
         else return false;
        
         } 
         
bool operator>=(fraction a,fraction b){
         
         if(a.num()*b.denom()>=b.num()*a.denom()) return true;
         else return false;
        
         }          
         
bool operator==(fraction a,fraction b){
         
         if(a.num()*b.denom()==b.num()*a.denom()) return true;
         else return false;
        
         } 
         
bool operator!=(fraction a,fraction b){
         
         if(a.num()*b.denom()!=b.num()*a.denom()) return true;
         else return false;
        
         }         
         
ostream& operator<<(ostream& out, fraction f){
    
    if(f.denom()!=1) out <<f.num()<<"/"<<f.denom();
    else out << f.num()/f.denom();
    return out;
}

istream& operator>>(istream& in, fraction& f){
    
    int n,d;
    char c;
    
    in>>n>>c>>d;
    
    if(d==0){
        
        cout<<"Denominator must be non-zero. I'm setting it to 1. \n";
        d=1;
    }
    
    if(d<0){
    
    d*=-1; n*=-1;    
        
    }
    
    f.change(n,d);
    
    return in;
}


int main()
{
    fraction a; //a = 0/1
    fraction b(5); //b=5/1
    fraction c(6,8); //c=6/8

    cout << "a=" << a << ", b=" << b << ", c=" << c << endl; //should display a=0, b=5, c=6/8

    cout << "The numerator of c is " << c.num()
         << " and the denominator is " << c.denom() << endl; //should show 6 then 8

    cout << "As a decimal, c=" << c.convert() << endl; //should show 0.75

    c.reduce();

    cout << "When you reduce c, you get " << c << endl; //should show 3/4

    fraction d;
    cout << "Enter a fraction: ";
    cin >> d; //tests >>

    cout << "d=" << d << endl; //should display the fraction you just entered

    cout << "+d=" << +d << ", -d=" << -d << endl; //test unary +/-

    cout << "c+d=" << c+d << endl; //check if this is true (should be reduced)
    cout << "c-d=" << c-d << endl; //check if this is true (should be reduced)
    cout << "c*d=" << c*d << endl; //check if this is true (should be reduced)
    cout << "c/d=" << c/d << endl; //check if this is true (should be reduced)

    c+=d;
    cout << "c=" << c << endl;
    c-=d;
    cout << "c=" << c << endl;
    c*=d;
    cout << "c=" << c << endl;
    c/=d;
    cout << "c=" << c << endl;

    fraction e(1,1);
    if(c!=e) cout << "c!=e\n";
    c/=c; //c=1/1
    if(c==e) cout << "c==e\n";
    if(b>e) cout << "b>e\n";
    if(c>=e) cout << "c>=e\n";
    if(c<=e) cout << "c<=e\n";
    if(e<b) cout << "e<b\n";

    system("PAUSE");
    return 0;
}
