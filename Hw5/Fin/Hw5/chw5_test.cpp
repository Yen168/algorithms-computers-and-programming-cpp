#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

class matrix{
      
      private:
      
      double a,b,c,d;
      
      public:
      
      matrix();
      matrix(double);
      matrix(double,double,double,double);
      
      void set(double,double,double,double);
      double get(int,int);
      matrix transpose();
      matrix inverse();
      double  trace();
      double determinant();
      
      };


matrix::matrix(){
                 
  a=b=c=d=0;
  
}

matrix::matrix(double a1){
  
  a=d=a1;
  b=c=0;

}

matrix::matrix(double a1,double b1,double c1,double d1){

  a=a1;
  b=b1;
  c=c1;
  d=d1;                
  
}

void matrix::set(double a1,double b1,double c1,double d1){
  
  a=a1;
  b=b1;
  c=c1;
  d=d1; 
  
    }

double matrix::get(int row,int column){
    
    if(row==1&&column==1) return a;
    else if (row==2&&column==2) return d;
    else if (row==1&&column==2) return b;
    else return c;
    
    }    

matrix matrix::transpose(){

    matrix t(a,c,b,d);
    
    return t;
     
}

matrix matrix::inverse(){
    
    if(((a*d)-(b*c))==0){
       
        matrix i;
        return i;
       
        } 
    
    else{
         
         double tmp=(1/(a*d-b*c));
         
         matrix i(tmp*d,-b*tmp,-c*tmp,a*tmp);
         
         return i;
        }
    
    }

double matrix::trace(){
    
    double tra=(a+d);
    
    return tra;
    
    }
    
double matrix::determinant(){
    
    double deter;
    
    deter=(a*d-b*c);
    
    return deter;
    
    }

matrix operator+(matrix a,matrix b){
    
    double w=a.get(1,1)+b.get(1,1);
    double x=a.get(1,2)+b.get(1,2);
    double y=a.get(2,1)+b.get(2,1);
    double z=a.get(2,2)+b.get(2,2);
    
    matrix c(w,x,y,z);
    
    return c;
    
    }

matrix operator-(matrix a,matrix b){
    
    double w=a.get(1,1)-b.get(1,1);
    double x=a.get(1,2)-b.get(1,2);
    double y=a.get(2,1)-b.get(2,1);
    double z=a.get(2,2)-b.get(2,2);
    
    matrix c(w,x,y,z);
    
    return c;
    
    } 

//matrix operator*(double a,matrix b){
//    
//    double w=a*b.get(1,1);
//    double x=a*b.get(1,2);
//    double y=a*b.get(2,1);
//    double z=a*b.get(2,2);
//    
//    matrix c(w,x,y,z);
//    
//    return c;
//    
//    }  
//

matrix operator*(matrix a,matrix b){
    
    double w=(a.get(1,1)*b.get(1,1)+a.get(1,2)*b.get(2,1));
    double x=(a.get(1,1)*b.get(1,2)+a.get(1,2)*b.get(2,2));
    double y=(a.get(2,1)*b.get(1,1)+a.get(2,2)*b.get(2,1));
    double z=(a.get(2,1)*b.get(1,2)+a.get(2,2)*b.get(2,2));
    
    matrix c(w,x,y,z);
    
    return c;
    
    }    
    
bool operator==(matrix a,matrix b){
    
    if(a.get(1,1)==b.get(1,1)&&a.get(1,2)==b.get(1,2)&&a.get(2,1)==b.get(2,1)&&a.get(2,2)==b.get(2,2)) return true;
    else return false;
        
    }

ostream& operator<<(ostream& out, matrix a)
{
    out<<"("<<a.get(1,1)<<","<<a.get(1,2)<<")"<<endl
       <<"("<<a.get(2,1)<<","<<a.get(2,2)<<")"<<endl;
       
    return out;
}


istream& operator>>(istream& in, matrix& a)
{
    double w,x,y,z;

    in>>w>>x>>y>>z;

    matrix b(w,x,y,z);
    
    a=b;

    return in;
}

int main(){
  
    matrix a(2,5,1,3);
    matrix b(3,-5,-1,2);
    
    cout<<a*-4;
    
    
    system("pause");
    return 0;
    }
