#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
    
    int n=0;
    double x,y,xsum=0,ysum=0,xysum=0;
    string filename;
    ifstream inFile;
    
    cout<<"Enter the name of the file containing your data points: ";
    cin>>filename;
    
    inFile.open(filename.c_str());
    

    if(inFile.fail()){
    cout << filename << " does not exist.\n";
    system("pause");
    return 0;
    }
//reads from the file until there are no more lines of information left
    
    
    while(inFile.good()){
        
    inFile>>x;
    inFile>>y;    
    xsum+=x;
    ysum+=y;
    xysum+=x*y;
    n++;     
        }
    
    cout<<"The best fit line through your data is : "<<((xysum/n)-(xsum/n)*(ysum/n))
        <<"x+"<<(ysum/n)-((xysum/n)-(xsum/n)*(ysum/n))*(xsum/n)<<endl;
    cout<<"The linear correlation coefficient is: "<<(xysum-n*(xsum/n)*(ysum/n))/<<endl;    
   
    xsum
    system("pause");
    return 0;            
    }
