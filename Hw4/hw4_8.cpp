#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<vector>

using namespace std;

int main(){
    
double *d;
d=new double[2];
d[0]=11.1;
d[1]=12.3;
cout<<d[0]<<endl;
delete[] d;
//

d=new double[3];
cout<<d[2]<<endl;
    system("pause");
    return 0;
    }

