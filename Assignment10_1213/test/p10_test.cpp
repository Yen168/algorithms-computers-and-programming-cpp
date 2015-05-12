//Yen-An Chen
//Math 3300 Project 10
//Polynomial Class

#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

class poly{
    
    private:
        
        int deg; //degree of polynomial
        double* coeff; //a pointer to the coefficients

    public:
        //constructors and deconstructors
	    poly(); //p(x)=0
        poly(int); //p(x)=0+0x+0x^2+...+0x^n
        poly(int,double); //p(x)=c+0x+0x^2+...+0x^n
        poly(int,const double[]); //p(x)=c0+c1x^1+c2x^2+...+cnx^n
        poly(const poly&); //p(x)=q(x)
        ~poly(); //delete coefficients

        //functions which do not change the private members of poly
        int degree() const; //returns degree
        double get(int) const; //returns k^th coefficient
        double of(double) const; //returns value of p(x) at x=a
        poly derivative() const; //returns new poly p'(x)
        poly derivative(int) const; //returns new poly p^(k)(x) the kth derivative
        poly integral(double) const; //returns new poly c + antiderivative of p(x)
        double integral(double,double) const; //returns integral of p(x) from x=a to x=b

        //functions which can change the private members of poly
        void resize(int); //changes degree of p(x) keeping as many of the old coefficients as possible
        void set(int,double); //sets a particular coefficient
        void set(const double[]); //sets all coefficients if given correctly sized array

};

//Put the definitions of the above public member functions here

poly::poly(){
    
    deg=0;
    coeff= new double[1];
    coeff[0]=0;
    
    }

poly::poly(int k){
    
    if(k<0) k=0;
    
    deg=k;
    coeff= new double[k+1];
    for(int i=0;i<=k;i++){
        
        coeff[i]=0;
        
        }
    
    }

poly::poly(int k,double c){
    
    if(k<0) k=0;
    
    deg=k;
    coeff=new double[k+1];
    coeff[0]=c;
    
    for(int i=1;i<=k;i++){
        
        coeff[i]=0;  
    
    }
}

poly::poly(int k,const double x[]){
    
    if(k<0) k=0;
    deg=k;
    coeff=new double[k+1];
    
    for(int i=0; i<=k; i++) coeff[i]=x[i];
    
    }

poly::poly(const poly& p){
    
    deg=p.degree();
    coeff= new double[deg+1];
    
    for(int i=0;i<=deg;i++){
        coeff[i]=p.get(i);
        
        } 
    }

poly::~poly(){
    
    delete [] coeff;
    deg=0;
    
    }

int poly::degree() const{
    
    return deg;
    
    }

double poly::get(int k) const{
    
    if(k<=deg) return coeff[k];
    else return 0;
    
    }
    
double poly::of(double a) const{
    
    double result=0;
    int size=deg;
    
    while(size>=0){
        
        result+=coeff[size]*pow(a,size);
        size--;
        
        }
         
    return result;

    }


poly poly::derivative() const{
    
    double* d_coef;
    d_coef=new double[deg];
        
    for(int i=0;i<deg;i++){
    
        d_coef[i]= coeff[i+1]*(i+1);
        //cout<<"DEG: "<<deg<<endl;
        
        }
    
    poly deriv(deg-1,d_coef);
    
    return deriv;


    }


poly poly::derivative(int t) const{
    
    poly tmp(deg,coeff);
    
    while(t>0){
        if(tmp.degree()==0){
           
           poly tmp; 
           break; 
            }
        tmp=tmp.derivative();
        t--;
        //cout<<"DEG: "<<deg<<endl;
        }
    
    return tmp;
    
    }
    
    
poly poly::integral(double c) const{
    
    double *i_coef;
    i_coef=new double[deg+2];
    
    i_coef[0]= c;
     
    for(int i=1;i<=deg+1;i++){
        
        i_coef[i]=coeff[i-1]/i;
        
        }
    
    poly integr(deg+1,i_coef); 
    
    return integr; 
    
    }

double poly::integral(double a,double b) const{
    
    double sol;
    
    double *i_coef;
    i_coef=new double[deg+2];
    
    i_coef[0]= 0;
     
    for(int i=1;i<=deg+1;i++){
        
        i_coef[i]=coeff[i-1]/i;
        
        }
    
    poly integr(deg+1,i_coef);
    
    sol=integr.of(b)-integr.of(a);    
    
    return sol;
    
    
    }


void poly::resize(int rz){
    
    double* copy;
    copy=new double[rz+1];
    
    if(deg>=rz){
        
        for(int i=0;i<=rz;i++){
            
            copy[i]=coeff[i];
            
            }
      
      delete[] coeff;
      coeff=new double [rz+1];
      
      coeff=copy;
      deg=rz;
        
        }
        
    else{
        
         for(int i=0;i<=rz;i++){
            
            if(i<=deg) copy[i]=coeff[i];
            else copy[i]=0;
            }
        
        delete[] coeff;
        coeff=new double [rz+1];
      
        coeff=copy;
        deg=rz;
        
        
        }
    
    
    }

void poly::set(int a,double b){
    
    coeff[a]= b;
    
    }
    
    
void poly::set(const double c[]){
    
    //int c_size;
    //c_size=sizeof(c)/sizeof(c[0]);
    
    //if(c_size!=deg) {cout<<"Incorrect Size\n Will not change any coefficient! \n";}
    //else{
    
    for(int i=0;i<=deg;i++){
        
        coeff[i]=c[i];
        
        }
    //}
    
    }



//Overloaded Arithmetic Operators
poly operator+(const poly& p, const poly& q) //p(x)+q(x)
{
    int sum;
    double* s_coef;
    
    if(p.degree()>q.degree()) sum=p.degree();
    else sum=q.degree();
    
    s_coef=new double[sum+1];
    
    for(int i=0;i<=sum;i++){
        
        s_coef[i]=p.get(i)+q.get(i);
        
        }
    
    poly x(sum,s_coef);
    
    return x;

}

poly operator-(const poly& p, const poly& q) //p(x)-q(x)
{
    int sum;
    double* s_coef;
    
    if(p.degree()>q.degree()) sum=p.degree();
    else sum=q.degree();
    
    s_coef=new double[sum+1];
    
    for(int i=0;i<=sum;i++){
        
        s_coef[i]=p.get(i)-q.get(i);
        
        }
    
    poly x(sum,s_coef);
    
    return x;

}

poly operator*(const poly& p, const poly& q) //p(x)q(x)
{
    int d;
    double* c;
    
    d=p.degree()+q.degree(); 
    c=new double[d+1];
    
    for(int i=0;i<=d;i++)c[i]=0;
    
    for(int i=0;i<=p.degree();i++){
        
        for(int j=0;j<=q.degree();j++){
            
            c[i+j]+=(p.get(i)*q.get(j));
            
            }    
        }

    poly x(d,c);
    
    return x;

}

poly operator+(double x, const poly& p) //c+p(x)
{
 poly s(p);
 x=x+p.get(0);
 s.set(0,x);
 
 return s;
 
}

poly operator+(const poly& p, double x) //p(x)+c
{

 poly s(p);
 x=p.get(0)+x;
 s.set(0,x);
 
 return s;

}

poly operator-(double x, const poly& p) //c-p(x)
{

 poly s(p);
 x=x-p.get(0);
 s.set(0,x);
 
 return s;

}

poly operator-(const poly& p, double x)//p(x)-c
{
 poly s(p);
 x=p.get(0)-x;
 s.set(0,x);
 
 return s;
}

poly operator*(double x, const poly& p)//cp(x)
{
 
 poly s(p);
 
 for(int i=0;i<=p.degree();i++){
     
     s.set(i,x*p.get(i));   
        
        }
 
 return s;

}

poly operator*(const poly& p, double x)//p(x)c
{

poly s(p);
 
 for(int i=0;i<=p.degree();i++){
     
     s.set(i,x*p.get(i));   
        
        }
 
 return s;

}

poly operator-(const poly& p) // -p(x)
{
 poly s(p);
 
 for(int i=0;i<=p.degree();i++){
     
     s.set(i,-1*p.get(i));   
        
        }
 
 return s;


}


//Overloaded Logical Operators
bool operator==(const poly& p, const poly& q) //p(x)==q(x) ?
{
 if(p.degree()!=q.degree()) return false;

 for(int i=0;i<=p.degree();i++){
        
     if(p.get(i)!=q.get(i)) return false;   
        
        } 

 return true;
 
}

bool operator!=(const poly& p, const poly& q) //p(x)!=q(x) ?
{

if(p.degree()!=q.degree()) return true;

 for(int i=0;i<=p.degree();i++){
        
     if(p.get(i)!=q.get(i)) return true;   
        
        } 

 return false;

}

//Overloaded Stream Operators

ostream& operator<<(ostream& out, const poly& p) //cout << p(x)
{
 
 out<<noshowpos<<p.get(0);
 
 for(int i=1;i<=p.degree();i++){
     
 out<<showpos<<p.get(i)<<"x^"<<noshowpos<<i;    
        
        }
 return out;
}

istream& operator>>(istream& in, poly& p) //cin >> p(x)
{
    int deg;
    double* coeff;
    
    cout<<"Enter the degree: ";
    in>>deg;
    
    coeff=new double[deg+1];
    
    cout<<"Enter the "<<deg+1<<" coefficients beginning with the constant term: ";
    
    for(int i=0;i<=deg;i++){
        in>>coeff[i];
        }
    
    p.resize(deg);
    p.set(coeff);

    return in;
}

//To test your class use this main function
//You can comment out any lines containing functions/operations you haven't yet defined.

int main()
{
    poly p; //should create p(x)=0

    cout << "p=" << p << endl; //should output "p=0"

    cout << "Enter a polynomial: ";
    cin >> p; //Should ask you to enter a degree and then the appropriate number of coefficients
    
    double c[]={1,-2,-3,4,5};
    poly q(4,c); //should create q(x)=1-2x-3x^2+4x^3+5x^4
    
    double a,b;
    cout << "Enter 2 doubles: ";
    cin >> a >> b;
    
    cout << "p=" << p << endl; //should display the p that you entered up above
    cout << "q=" << q << endl; //should display: "q=1-2x-3x^2+4x^3+5x^4"

    cout << "a=" << a << " and b=" << b << endl;
    
    cout << "p-q=" << p-q << endl; //tests p-q (polynomial minus)
    cout << "p+q=" << p+q << endl; //tests p+q (polynomial plus)
    cout << "p*q=" << p*q << endl; //tests p*q (polynomial times)
    cout << "q+a=" << q+a << endl; //tests q+a (scalar addition)
    cout << "b+q=" << b+q << endl; //tests a+q (scalar addition)
    cout << "p-a=" << p-a << endl; //tests p-a (scalar subtraction)
    cout << "a-p=" << a-p << endl; //tests a-p (scalar subtraction)
    cout << "a*p=" << a*p << endl; //tests a*p (scalar multiplication)
    cout << "p*b=" << p*b << endl; //tests p*a (scalar multiplication)
    cout << "-p=" << -p << endl; //tests unary minus (negative)

    cout << "The degree of p is " << p.degree() << endl; //tests degree() member function
    cout << "The coefficient of x^2 in p(x) is " << p.get(2) << endl; //tests get() member function should
		//return coefficient of x^2 or 0

    cout << "p(a)=" << p.of(a) << endl; //should evaluate p(a)

    cout << "p'(x)=" << p.derivative() << endl; //derivative of p
    cout << "p''(x)=" << p.derivative(2) << endl; //second derivative of p
    cout << "p'''(x)=" << p.derivative(3) << endl; //third derivative of p

    cout << "int(p(x),x)=" << p.integral(a) << endl; //indefinite integral of p, constant of integration a
    cout << "int(p(x),a,b)=" << p.integral(a,b) << endl; //definite integral of p from a to b

    p.resize(6); //resizes p to degree 6 polynomial
    q.resize(2); //resizes q to degree 2 polynomial: q=1-2x-3x^2
    
    cout << "p=" << p << endl;
    cout << "q=" << q << endl;

    if(p!=q) cout << "p and q are not equal.\n"; //tests p!=q
    
    poly r=p; //should create new poly r with same degree/coefficients of p
    
    cout << "r=" << r << endl;
    if(p==r) cout << "p and r are equal.\n"; //tests p==r, this should be true

    
    double d[]={8,7,6};
    q.set(d); //gives q new coefficients

    cout << "q=" << q << endl;
    
    q.set(0,0); //sets constant term to 0 in q
    cout << "q=" << q << endl;

    poly s(4); //should create s=0+0x+0x^2+0x^3+0x^4
    poly t(4,3); //should create t=4+0x+0x^2+0x^3+0x^4

    cout << "s=" << s << endl;
    cout << "t=" << t << endl;


    system("PAUSE");
    return 0;
}
