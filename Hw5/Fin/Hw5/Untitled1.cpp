//Creates a class for rectangles
//now with operators!
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

//Class definition for rectangle class
class rectangle
{
    private:
        double l, w; //what "define" the rectangle

    public:
        rectangle(); //default constructor
        rectangle(double); //"extra" constructor
        rectangle(double,double); //maximal constructor


        double area(); //calculates the area of the rectangle
        double perimeter(); //calculates the perimeter of the rectangle
        double diagonal(); //calculates the diagonal length of the rectangle

        double length(); //calculates the length of the rectangle
        double width(); //calculates the width of the rectangle

        bool isSquare(); //can tell if the rectangle is a square

        void change(double,double); //change the length and width of a pre-existing rectangle
};


void operator+=(rectangle& r, rectangle s) //+=
{
    r=r+s;
}

//Constructor definitions
rectangle::rectangle() //"default" constructor
{
    l=1, w=1;
}

rectangle::rectangle(double u) //"extra" constructor
{
    l=w=abs(u);
}

rectangle::rectangle(double u, double v) //"maximal" constructor
{
    l=abs(u);
    w=abs(v);
}

//Class function definitions
double rectangle::area()
{
    return l*w;
}

double rectangle::perimeter()
{
    return l+l+w+w;
}

double rectangle::diagonal()
{
    return sqrt(l*l+w*w);
}

double rectangle::length()
{
    return l;
}

double rectangle::width()
{
    return w;
}

bool rectangle::isSquare()
{
    if(l==w) return true;
    else return false;
}

void rectangle::change(double u, double v)
{
    l=abs(u), w=abs(v);
}

//Overloaded operators
rectangle operator+(rectangle r, rectangle s) //add rectangles
{
    double l=r.length()+s.length();
    double w=r.width()+s.width();

    rectangle t(l,w); //create t with length l and width w
    return t;
}

rectangle operator-(rectangle r, rectangle s) //subtract rectangles
{
    double l=abs(r.length()-s.length());
    double w=abs(r.width()-s.width());

    rectangle t(l,w); //create t with length l and width w
    return t;
}

rectangle operator*(double c, rectangle r) //scalar multiplication of a rectangle
{
    double l=abs(c)*r.length();
    double w=abs(c)*r.width();

    rectangle t(l,w);
    return t;
}

rectangle operator*(rectangle r, double c) //scalar multiplication of a rectangle
{
    return c*r;
}

bool operator==(rectangle r, rectangle s) //rectangle equality
{
    if(r.area()==s.area()) return true;
    else return false;
}

bool operator!=(rectangle r, rectangle s) //rectangle unequality
{
    if(r==s) return false;
    else return true;
}

bool operator<(rectangle r, rectangle s) //less than
{
    if(r.area()<s.area()) return true;
    else return false;
}

bool operator<=(rectangle r, rectangle s) //less than or equal
{
    if(r.area()<=s.area()) return true;
    else return false;
}

bool operator>=(rectangle r, rectangle s) //greater than or equal
{
    if(r<s) return false;
    else return true;
}

bool operator>(rectangle r, rectangle s) //greater than
{
    if(r<=s) return false;
    else return true;
}


void operator-=(rectangle& r, rectangle s) //-=
{
    r=r-s;
}

void operator*=(rectangle& r, double c) //*=
{
    r=r*c;
}

ostream& operator<<(ostream& out, rectangle r) //<<
{
    out << "l=" << r.length() << ", w=" << r.width();
    return out;
}

istream& operator>>(istream& in, rectangle& r) //>>
{
    double l,w;
    in >> l >> w;
    r.change(l,w);
    return in;
}

int main()
{
    //how to use the 2 constructors:

    rectangle r; //creates a rectangle named r (default length=1 and width=1)

    rectangle s(3,5); //creates a rectangle named s with length=3 and width=5

    rectangle t=s; //"default copy constructor" - automatically created by C++ in most situations
                   //creates a new rectangle named t with the same information as s

    rectangle u(7); //creates a rectangle named u with length=7 and width=7

    //An alternative way to use the single valued constructor:

    rectangle v=10; //exactly the same as rectangle v(10);

    //Display the info of the rectangles we've created:

    cout << "The area of r is " << r.area()
         << ", the perimeter of r is " << r.perimeter()
         << ", and the diagonal length of r is " << r.diagonal() << endl;

    cout << "The area of s is " << s.area()
         << ", the perimeter of s is " << s.perimeter()
         << ", and the diagonal length of s is " << s.diagonal() << endl;

    cout << "The area of t is " << t.area()
         << ", the perimeter of t is " << t.perimeter()
         << ", and the diagonal length of t is " << t.diagonal() << endl;

   cout << "The area of u is " << u.area()
         << ", the perimeter of u is " << u.perimeter()
         << ", and the diagonal length of u is " << u.diagonal() << endl;

    cout << "The area of v is " << v.area()
         << ", the perimeter of v is " << v.perimeter()
         << ", and the diagonal length of v is " << v.diagonal() << endl;

    r.change(57,32); //change the length and width of r

    //display the new r's info:

    cout << "The area of r is " << r.area()
         << ", the perimeter of r is " << r.perimeter()
         << ", and the diagonal length of r is " << r.diagonal() << endl;

    //using length and width functions:
    cout << "The length of r is " << r.length() << endl;
    cout << "The width of s is " << s.width() << endl;

    //using isSquare function:

    if(r.isSquare()) cout << "r is a square\n";

    if(!s.isSquare()) cout << "s is not a square\n";

    //Assignment +=
    v+=s; //v=v+s

    //<<
    cout << "The rectangle v has: " << v << endl; //l=length of v, w=width of v

    //>>
    rectangle w;
    cout << "Enter a rectangle: ";
    cin >> w;

    cout << "The rectangle w has: " << w << endl;

    //-=
    w-=w;

    cout << "The rectangle w has: " << w << endl;

    system("PAUSE");
    return 1;
}
