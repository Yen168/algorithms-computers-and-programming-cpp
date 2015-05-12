#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    
    string filename;
    ifstream inFile;
    
    cout<<"Enter the name of the file containing your data points: ";
    cin>>filename;
    
    inFile.open(filename.c_str());
    
    if(!inFile){
    cout << filename << " does not exist.\n";
    system("PAUSE");
    return 0;            
    }

    
    
    
    
    
    return 0;
    }
