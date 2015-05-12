#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;


int fileCopy(string,string);

int main(){

    string exist_name,new_name;
    cin>>exist_name;
    cin>>new_name;
    
    system("pause");
    return 0;
    }

int fileCopy(string exist_name,string new_name){
    
    ifstream inFile;
    inFile.open(exist_name.c_str());

    if(inFile.fail()){
        cout << inFilename << " does not exist.  Please check it is in the appropriate folder.\n";
        system("PAUSE");
        return 0;
    }
    
    
    
    
    
    }
