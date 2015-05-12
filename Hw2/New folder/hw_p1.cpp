#include<fstream>
#include<string>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    
     ifstream inFile;
     inFile.open("investments.txt");
     
     string first, last;
     double initial;
    
     inFile>> first >> last >> initial;
    
     ofstream outFile; 
     outFile.open("interest.txt");
     
     outFile << setprecision(2) << fixed;
     outFile << first <<" "<< last << " " 
             << initial*pow(1.04,1) << " "
             << initial*pow(1.04,5) << " "
             << initial*pow(1.04,10) << " "
             << initial*pow(1.04,20);
    return 0;
    
    }
