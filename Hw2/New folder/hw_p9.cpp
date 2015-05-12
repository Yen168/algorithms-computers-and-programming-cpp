#include<cstdlib>
#include<iostream>

using namespace std;

int main(){
   
    int n;

    cout << "How many numbers will you enter? ";
    cin >> n;
   
    double num[n];
    double sum=0;
   
    for (int i=0;i<n;i++){
       
        cout << "Please enter number " << i+1 <<" : ";
        cin >> num[i];
        sum+=num[i];
       
        cout << "Total sum is " << sum <<" now!"<<endl;
        }
  
    cout << "\nThe average of "<<n<<" numbers is " << sum/n <<endl;
   
    system("PAUSE");
    
    return 0;
    }
