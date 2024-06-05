#include<iostream>
#include<string.h>
#include<stdlib.h>



using namespace std;

class Library {
   public : int id;
   public : char bookname[100];
    public : char author[100];
    public : char student[100];
    public : int price;
    public : int pages;

};


int main() {
     Library lib[20];
     int input = 0;
     int count = 0;

     while (input != 3) {
        cout<<"Enter 1 to input details like id, bookname , author , student , price , pages :"<<endl;
        cout<<"Enter 2 to display details "<<endl;
        cout<<"Enter 3 to Quit "<<endl;
        cin>>input;

        switch(input) {
            start :
            case 1 :
            cout<<"Enter Book Id :"<<endl;
            cin>>lib[count].id;

            cout<<"Enter Book name :"<<endl;
            // cin>>lib[count].bookname;
            cin.getline(lib[count].bookname,100,',');

            cout<<"Enter Book Author:"<<endl;
            // cin>>lib[count].author;
             cin.getline(lib[count].author,100,',');

            cout<<"Enter Book Student"<<endl;
            // cin>>lib[count].student;
             cin.getline(lib[count].student,100,',');

            cout<<"Enter Book Price"<<endl;
            cin>>lib[count].price;

            cout<<"Enter Book pages"<<endl;
            cin>>lib[count].pages;

            count++;
            break;

            case 2 : 
             for (int i=0;i<count;i++) {
               cout<<"Book Id :"<<lib[i].id<<endl;
                 cout<<"Book Name :"<<lib[i].bookname;
                   cout<<"Book Author :"<<lib[i].author;
                     cout<<"Book Student :"<<lib[i].student;
                       cout<<"Book Price :"<<lib[i].price<<endl;
                         cout<<"Book pages :"<<lib[i].pages<<endl;

             }
                break;

            case 3 :
               exit(0);
               break;

            default :
               cout<<"You have entered wrong Value , Please Enter Correct Once ! "<<endl;
               goto start;


             


        }
     }



    return 0;
}