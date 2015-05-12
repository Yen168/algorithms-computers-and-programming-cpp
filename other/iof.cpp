// 


#include<fstream>


using namespace std;

int main(){
    
    ifstream inf;
    ofstream outf;
    
    inf.open("inyour.txt");
    outf.open("your.txt");
    
    double a, b, c;
    
    inf >> a; 
    inf >> b ;
    inf >> c;
    
   outf << "a, b, c = " << a << " " << b << " " << c << " ";
    
    
    return 0;
    
    }
