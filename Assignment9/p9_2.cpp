// Yen-An Chen
// Math 3300 Programming Assignment 9 - Program 2 p9_2.cpp
// complex class

#include<cstdlib>
#include<iostream>
#include<cmath>
#include<cctype>

using namespace std;

class complex{
    
    private:
        
        double a,b;

    public:
        
         //constructors
         complex();
         complex(double);
         complex(double,double);
        
         //other class functions
         
         double real();
         double imag();
         complex conjugate();
         double modulus();
    
    };
    
//Define constructors

complex::complex(){
    a=0;
    b=0;
    }

complex::complex(double a1){
    a=a1;
    b=0;
    }

complex::complex(double a1,double b1){
    a=a1;
    b=b1;    
    }   
    
//Define other class function

double complex::real(){

   return a;

    }

double complex::imag(){

   return b;

    }


complex complex::conjugate(){

    complex c(a,-b);
    
    return c;
    
    }


double complex::modulus(){

    double m;
    
    m=sqrt((a*a+b*b));
    
    return m;

    }

//Overloaded operators


complex operator+(complex c){
         
         return c;
         
         }
         
complex operator-(complex c){
         
         int a1=-1*c.real();
         int b1=-1*c.imag();
         
         complex c1(a1,b1);
         
         return c1;  
         
         }
         
complex operator+(complex a,complex b){
        
         double x=a.real()+b.real();
         double y=a.imag()+b.imag();
         
         complex c(x,y);
         return c;
        
         }

void operator+=(complex& a,complex b){
        
         a=a+b;
        
         }

complex operator-(complex a,complex b){
        
         double x=a.real()-b.real();
         double y=a.imag()-b.imag();
         
         complex c(x,y);
         return c;
        
         }

void operator-=(complex& a,complex b){
        
         a=a-b;
        
         }

//i*i=-1
complex operator*(complex a,complex b){
        
         double x=a.real()*b.real()-a.imag()*b.imag();
         double y=a.imag()*b.real()+a.real()*b.imag();
         
         complex c(x,y);
         return c;
        
         }

void operator*=(complex& a,complex b){
        
         a=a*b;
        
         }

complex operator/(complex a,complex b){
         
         if((pow(b.real(),2)+pow(b.imag(),2))==0){
                
                cout<<"Cannot divide by 0!"<<endl;
                
                return b;// return b means something wrong!
                
                }
         else{
                double x=(a.real()*b.real()+a.imag()*b.imag())/(pow(b.real(),2)+pow(b.imag(),2));
                double y=(a.imag()*b.real()-a.real()*b.imag())/(pow(b.real(),2)+pow(b.imag(),2));
                
                complex c(x,y);
                return c;
                
                }
         }

void operator/=(complex& a,complex b){
        
         a=a/b;
        
         }


bool operator==(complex a,complex b){
         
         if(a.real()==b.real()&&a.imag()==b.imag()) return true;
         else return false;
        
         } 
         
bool operator!=(complex a,complex b){
         
         if(a.real()!=b.real()||a.imag()!=b.imag()) return true;
         else return false;
        
         }         

         
ostream& operator<<(ostream& out, complex c){
    
    if(c.real()==0){
        
        if(c.imag()==0) out<<"0";
        else out<<c.imag()<<"i";
                
    }
    else {
        
        if(c.imag()==0)out<<c.real();
        else out<<noshowpos<<c.real()<<showpos<<c.imag()<<"i"<<noshowpos;
    
        }
    
    return out;
}

//check!!!
istream& operator>>(istream& in, complex& c){
    
    double a1,b1;
    //char c;
    
    in>>a1>>b1;
  
    complex j(a1,b1);
    c=j;
    
    return in;
}


int main()
{
    complex z1; //z1=0+0i
    cout << "z1=" << z1 << endl;;

    cout << "Enter a complex number:";
    cin >> z1;

    cout << "z1=" << z1 << endl;

    complex z2(3,4); //z=3+4i

    cout << "z2=" << z2 << endl;
    cout << "The real part of z2 is " << z2.real() << " and the imaginary part is " << z2.imag() << endl;

    //Depending on how you defined conjugate(), either this:
    //z2.conjugate();
    //cout << "z2 conjugate is " << z2 << endl;
    //or this:
    cout << "z2 conjugate is " << z2.conjugate() << endl;
    //or both.

    cout << "The modulus of z2 is " << z2.modulus() << endl;

    cout << "+z2=" << +z2 << " and -z2=" << -z2 << endl;

    cout << "z1+z2=" << z1+z2 << endl;
    cout << "z1-z2=" << z1-z2 << endl;
    cout << "z1*z2=" << z1*z2 << endl;
    cout << "z1/z2=" << z1/z2 << endl;

    if(z1!=z2) cout << "z1!=z2\n";

    z1+=z2;
    cout << "z1=" << z1 << endl;
    z1-=z2;
    cout << "z1=" << z1 << endl;
    z1*=z2;
    cout << "z1=" << z1 << endl;
    z1/=z2;
    cout << "z1=" << z1 << endl;

    z1/=z1;

    complex z3(1); //z3=1+0i

    if(z1==z3) cout << "z1==z3" << endl;

    system("PAUSE");
    return 1;
}
