#include<iostream>

using namespace std;


// Addition Operation :
int addition() {
    int a ;
    int total=0;
    char response;
    add:
    cout<<"Enter a number"<<endl;
    cin>>a;
    total = total + a;
    cout<<"Do you want to add more numbers (y or n) ?"<<endl;
    addagain:
    cin>>response;
    if(response == 'y' || response == 'Y') {
         goto add;

    }
    else if (response == 'n' || response == 'N') {
        return total;
    }
    else {
        cout<<"You have entered wrong choice , Please Select the correct One i.e y or n  :"<<endl;
        goto addagain;

    }
    return total;


}

// Multiplication Operations :
int Multiplication() {
    int a ;
    int total=1;
    char response;
    mult:
    cout<<"Enter a number"<<endl;
    cin>>a;
    total = total * a;
    cout<<"Do you want to add more numbers (y or n) ?"<<endl;
    multagain:
    cin>>response;
    if(response == 'y' || response == 'Y') {
         goto mult;

    }
    else if (response == 'n' || response == 'N') {
        return total;
    }
    else {
        cout<<"You have entered wrong choice , Please Select the correct One i.e y or n  :"<<endl;
        goto multagain;

    }
    return total;


}


// Subtraction Operations :
int Subtraction() {
    int a,b ;
    int total=0;
    char response;
    sub:
    cout<<"Enter two number"<<endl;
    cin>>a;
    cin>>b;

    if (a > b ) {
    total =  a - b;}

    else {
       total =  b - a; 
    }
   
    return total;


}

// Division Operations :
int Division() {
    float a,b ;
    float total=0;
    char response;
    mult:
    cout<<"Enter two number"<<endl;
    cin>>a;
    cin>>b;
    if (a  > b ){
        total = a / b ; 
    }
    else {
         total = b / a ;
    }
    
    
    return total;


}

// Module Operations :
int Module() {
    int  a,b ;
    int total=0;
    char response;
    mult:
    cout<<"Enter two number"<<endl;
    cin>>a;
    cin>>b;
    if (a  > b ){
        total = a % b ; 
    }
    else {
         total = b % a ;
    }
    
    
    return total;


}



int main() {
     char value;
     char again;
     start:
     cout<<"........................Welcome To Our Calculator Application........................... "<<endl;
     cout<<"........................Please Fallow The Instruction..................................."<<endl;
     cout<<"(1) step-1 : press 'a' for Addition "<<endl;
     cout<<"(2) step-2 : press 's' for substraction"<<endl;
     cout<<"(3) step-3 : press 'm' for Multiplication"<<endl;
     cout<<"(4) step-4 : press 'd' for division "<<endl;
     cout<<"(5) step-5 : press 'o' for module"<<endl;
     
     int addition(void);
     int Multiplication(void);
     int subtraction(void);
     int Division(void);
     int Module(void);




     cin>>value;
     if (value == 'a' || value == 'A') {
         int addvalue = addition();
         cout<<"Addition is :"<<addvalue<<endl;
         selectagain:
         cout<<"Do you want to do more operations : y or n "<<endl;
         cin>>again;
         if(again == 'y' || again == 'Y') {
           goto start;
         }
         else if (again == 'n' || again == 'N') {
             cout<<"Thank you for using Calculator Application !"<<endl;
         }

         else {
            cout<<"You have entered wrong choice , Please Select the correct One i.e y or n  :"<<endl;
            goto selectagain;

         }
         }

        else if (value == 'm' || value == 'M') {
            int multvalue = Multiplication();
            cout<<"Multiplication is :"<<multvalue<<endl;
            selectagain2:
             cout<<"Do you want to do more operations : y or n "<<endl;
             cin>>again;
             if(again == 'y' || again == 'Y') {
             goto start;
            }
             else if (again == 'n' || again == 'N') {
             cout<<"Thank you for using Calculator Application !"<<endl;
            }

            else {
             cout<<"You have entered wrong choice , Please Select the correct One i.e y or n  :"<<endl;
            goto selectagain2;

         }
        }

          else if (value == 's' || value == 'S') {
            int subvalue = Subtraction();
            cout<<"Multiplication is :"<<subvalue<<endl;
            selectagain3:
             cout<<"Do you want to do more operations : y or n "<<endl;
             cin>>again;
             if(again == 'y' || again == 'Y') {
             goto start;
            }
             else if (again == 'n' || again == 'N') {
             cout<<"Thank you for using Calculator Application !"<<endl;
            }

            else {
             cout<<"You have entered wrong choice , Please Select the correct One i.e y or n  :"<<endl;
            goto selectagain3;

         }
        }

          else if (value == 'd' || value == 'D') {
            int divvalue = Division();
            cout<<"Division is :"<<divvalue<<endl;
            selectagain4:
             cout<<"Do you want to do more operations : y or n "<<endl;
             cin>>again;
             if(again == 'y' || again == 'Y') {
             goto start;
            }
             else if (again == 'n' || again == 'N') {
             cout<<"Thank you for using Calculator Application !"<<endl;
            }

            else {
             cout<<"You have entered wrong choice , Please Select the correct One i.e y or n  :"<<endl;
            goto selectagain4;

         }
        }

        
          else if (value == 'o' || value == 'O') {
            int Modvalue = Module();
            cout<<"Module is :"<<Modvalue<<endl;
            selectagain5:
             cout<<"Do you want to do more operations : y or n "<<endl;
             cin>>again;
             if(again == 'y' || again == 'Y') {
             goto start;
            }
             else if (again == 'n' || again == 'N') {
             cout<<"Thank you for using Calculator Application !"<<endl;
            }

            else {
             cout<<"You have entered wrong choice , Please Select the correct One i.e y or n  :"<<endl;
            goto selectagain5;

         }
        }
        
     else {
          cout<<"You have entered wrong choice , Please Select the correct One  :"<<endl;
          goto start;
     }   

}