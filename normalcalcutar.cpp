#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void adding(){
    system("cls");
    long num1, num2;
    char dec;
    long total=0;
    cout<<"enter 1st number: ";
    cin>> num1;
    total+= num1;
    more :
    cout<<"enter 2nd number: ";
    cin>> num2;
    total+= num2;
    cout<<"Total= "<< total<< endl;
    cout<<"Are you want to add more numbers press y \npress nor any key if not add more numbers ";
    cin>> dec;
    if(dec == 'y' || dec == 'Y'){
        goto more;
    }
    else {
    
    }


}
void subtracting(){
    long num1, num2;
    char dec;
    long total;
    bool run= true;
    while(run)
    {
    system("cls");
    cout<<"enter 1st number: ";
    cin>> num1;
    cout<<"enter 2nd number: ";
    cin>> num2;
    total=num1- num2;
    cout<<num1<<"-" <<num2<<'='<<total<< endl;
    cout<<"Are you want to subtract more numbers press y \npress any key if not add more numbers: ";
    cin>> dec;
    if(dec == 'y' || dec == 'Y'){
      
    }
    else {
    run = false;
    }
    }

}
void dividing(){
    long double num1, num2;
    char dec;
    long double total;
    bool run= true;
    while(run)
    {
    system("cls");
    cout<<"enter 1st number: ";
    cin>> num1;
    cout<<"enter 2nd number: ";
    cin>> num2;
    total=num1/num2;
    cout<<num1<<"/" <<num2<<'='<<total<< endl;
    cout<<"Are you want to more more numbers press y \npress any key if not add more numbers: ";
    cin>> dec;
    if(dec == 'y' || dec == 'Y'){
      
    }
    else {
    run = false;
    }
    }

}
void product(){
    system("cls");
    long num1, num2;
    char dec;
    long total=1;
    cout<<"enter 1st number: ";
    cin>> num1;
    total*= num1;
    more :
    cout<<"enter number: ";
    cin>> num2;
    total*= num2;
    cout<<"Total= "<< total<< endl;
    cout<<"Are you want to multiply more numbers press y \npress any key if not add more numbers ";
    cin>> dec;
    if(dec == 'y' || dec == 'Y'){
        goto more;
    }
    else {
    
    }


}
void modulor(){
    long num1, num2;
    char dec;
    long double total;
    bool run= true;
    while(run)
    {
    system("cls");
    cout<<"enter 1st number: ";
    cin>> num1;
    cout<<"enter 2nd number: ";
    cin>> num2;
    total=num1%num2;
    cout<<num1<<"%" <<num2<<'='<<total<< endl;
    cout<<"Are you want to more more numbers press y \npress any key if not add more numbers: ";
    cin>> dec;
    if(dec == 'y' || dec == 'Y'){
      
    }
    else {
    run = false;
    }
    }

}
int main(){
char choice;
bool run=true;
while(run){
   system("cls");
   cout<<"**********************simple calculator**************************"<< endl;
   cout<<"\t1) Adding numbers +."<< endl;
   cout<<"\t2) Subtract two number -."<< endl;
   cout<<"\t3) Multyply numbers *."<< endl;
   cout<<"\t4) Divide numbers /."<< endl;
   cout<<"\t5) Take moude number %."<< endl;;
   cout<<"\t6) exit"<< endl;
   cout<<"Enter your choice."<< endl;
   cin >> choice;
   if(choice == '1'){
    adding();
   }
   else if(choice == '2'){
     subtracting();
   }
   else if(choice == '3'){
    product();
   }
   else if(choice == '4'){
    dividing();
   }
   else if(choice == '5'){
          modulor();
   }
   else if(choice == '6'){
    run = false;
   }
   else{
    system("cls");
    cout<<"You enter wrong number."<< endl;
    cout<<"Redirecting perious page."<< endl;
    Sleep(1300);
   }


   }
return 0;
}