#include<cstdlib>
#include<string>
#include<iostream>

using namespace std;


class line{
    
     private:
        
        double m,b;
        
     public:
        
        line();
        line(double,double);
        
        double at(double);
        bool on(double,double);
    
    };

line::line()
{
  m=1.0; b=0;  
    
}

line::line(double m1,double b1)
{
  m=m1; b=b1; 
}

double line::at(double x){
    
    double y;
    
    y=(m*x+b);
    
    return y;
    
    }

bool line::on(double x,double y){
    
    if(y==(m*x+b)) return true;
    else return false;
    
    }



int main(){
    
line a;
cout<<a.on(3,2)<<endl;
system("pause");    
    
    
    
    return 0;
    }
