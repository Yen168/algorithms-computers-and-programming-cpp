// Yen-An Chen
// Math 3300 Programming Assignment 4 - Program 2 taxes.cpp
// This program will calculate income tax.

#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int tax(int,double);

int main(){
  
   int choice;
   double income;
   
   cout <<"Enter your filing status:\n"
        <<"1 for Single\n"
        <<"2 for Married Filing Jointly\n"
        <<"3 for Married Filing Separately\n"
        <<"4 for Head of Household\n"
        <<"\nYour choice: ";
  
   cin >> choice;  
  
   cout <<"Enter your taxable income: ";
   cin >> income;
    
    if(income>=0 && choice<=4 && choice>=1) tax(choice,income); 
    else{
    if(choice>4 || choice <1)
    cout<<"You have entered an invalid choice.\n";
    if(income<0)
    cout<<"You have entered an invalid income.\n";
    }
    
  
  system("pause");
  
    return 0;
  
    }

int tax(int choice,double income){

    int bracket;
    double tax;
    int lv[5];
    
// filing status setting
  
   switch(choice){
  
   case 1:
          lv[0]=8700;
          lv[1]=35350;
          lv[2]=85650;
          lv[3]=178650;
          lv[4]=388350;
        
          break;
          
   case 2:
          lv[0]=17400;
          lv[1]=70700;
          lv[2]=142700;
          lv[3]=217450;
          lv[4]=388350;

          break;  
             
   case 3:
          lv[0]=8700;
          lv[1]=35350;
          lv[2]=71350;
          lv[3]=108725;
          lv[4]=194175;

          break;
          
   case 4:  
          lv[0]=12400;
          lv[1]=47350;
          lv[2]=122300;
          lv[3]=198050;
          lv[4]=388350;

          break;    
               
   default: break;
  
   }
 
// income tax calculations
  
  if(income<=lv[0]){ 
  tax=income*0.1;    
  bracket=10;
  }
  
  else if(income<=lv[1]){
  tax=lv[0]*0.1+(income-lv[0])*0.15;
  bracket=15;
  }
  
  else if(income<=lv[2]){
  tax=lv[0]*0.1+(lv[1]-lv[0])*0.15+(income-lv[1])*0.25;
  bracket=25;
  }
 
  else if(income<=lv[3]){
  tax=lv[0]*0.1+(lv[1]-lv[0])*0.15+(lv[2]-lv[1])*0.25+(income-lv[2])*0.28;
  bracket=28;
  } 
  
  else if(income<=lv[4]){
  tax=lv[0]*0.1+(lv[1]-lv[0])*0.15+(lv[2]-lv[1])*0.25+(lv[3]-lv[2])*0.28+(income-lv[3])*0.33;
  bracket=33;
  } 
 
  else{
  tax=lv[0]*0.1+(lv[1]-lv[0])*0.15+(lv[2]-lv[1])*0.25+(lv[3]-lv[2])*0.28+(lv[4]-lv[3])*0.33+(income-lv[4])*0.35;
  bracket=35;
  } 
  
  cout<< setprecision(2)<< fixed;
  cout<<endl<<"Your tax bracket is "<<bracket<<"%"<<endl;
  cout<<"Your 2012 federal income tax will be: $"<<tax<<endl;
  cout<<"Your taxes are "<<tax/income*100<<"% of your total income."<<endl<<endl;
    

    return 0;
    
    }
