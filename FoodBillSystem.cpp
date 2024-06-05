#include<iostream>

using namespace std;

int TotalOrderBill(){
    char c;
    char item;
    char VegAtom;
    char NonVegAtom;
    int BillAmount;
    char selectagain;
    
    cout<<"................................Welcome To Online Food Order ....................."<<endl;
    cout<<"..........................................Please Falllow Below Instructions ............"<<endl;
    cout<<" step- 1 : Please Press 'S' to start your order"<<endl;
    cout<<"step-2 : You can order Veg and Non veg Both"<<endl;
    cout<<" step-3 : Please Press 'A' to select Veg Atoms"<<endl;
    cout<<"step-4 : Please press 'B' to select Non-veg Atoms"<<endl;
    cout<<" step-5 : You will get your final order After your Order "<<endl;
    
    start :
    cin>>c;

    if (c=='s' || c=='S') {
        items :
        cout<<"Please select your choices : "<<endl;
        cout<<"(A) veg atoms                       (B) non-veg atoms"<<endl;
        cin>>item;
        if(item=='a' || item=='A'){
            VegItemlist:
            cout<<"Please enter 1 , 2 , 3 , 4 , 5 as per your choice :"<<endl;
            cout<<" (1) Paneer : Price : Rs- 250"<<endl;
              cout<<" (2) Flower tadka : Price : Rs- 2=150"<<endl;
                cout<<" (3) Malai kofta : Price : Rs- 200"<<endl;
                  cout<<" (4) Veg Kofta: Price : Rs- 290"<<endl;
                    cout<<" (5) Methi Matar Malai : Price : Rs- 450"<<endl;
                      cout<<" (6) Veg Maratha : Price : Rs- 350"<<endl;
                        cout<<" (7) Chana Masala : Price : Rs- 50"<<endl;
                          cout<<" (8) Baigan Masala : Price : Rs- 230"<<endl;
                            cout<<" (9) Bhendi Masala: Price : Rs- 150"<<endl;
                              cout<<" (10) Kaju Kari : Price : Rs- 550"<<endl;

        cin>>VegAtom;
        if (VegAtom == '1') {
            BillAmount = BillAmount + 250;

        }

        else if (VegAtom == '2') {
            BillAmount = BillAmount + 150;

        }

        else if (VegAtom == '3') {
            BillAmount = BillAmount + 200;

        }

        else if (VegAtom == '4') {
            BillAmount = BillAmount + 290;

        }

        else if (VegAtom == '5') {
            BillAmount = BillAmount + 450;

        }

        else if (VegAtom == '6') {
            BillAmount = BillAmount + 350;

        }

        else if (VegAtom == '7') {
            BillAmount = BillAmount + 50;

        }

        else if (VegAtom == '8') {
            BillAmount = BillAmount + 230;

        }

        else if (VegAtom == '9') {
            BillAmount = BillAmount + 150;

        }

        else if (VegAtom == '10') {
            BillAmount = BillAmount + 550;

        }

        else {
            cout<<"You have entered wrong value please enter correct value to continue :"<<endl;
            goto VegItemlist;
        }

        cout<<"Do you want to add more atoms y or n ?"<<endl;
        cin>>selectagain;
        if (selectagain == 'y') {
            goto items;
        }
        else {
            return BillAmount;
        }


        }
        else if (item == 'b' || item =='B'){
            NonVegItemlist:
            cout<<"Please enter 1 , 2 , 3 , 4 , 5 as per your choice :"<<endl;
            cout<<" (1) Paneer with Chicken : Price : Rs- 1250"<<endl;
              cout<<" (2) Flower tadka with mutton : Price : Rs- 2=1150"<<endl;
                cout<<" (3) Malai kofta with mutton : Price : Rs- 1200"<<endl;
                  cout<<" (4) Veg Kofta with Chicken: Price : Rs- 1290"<<endl;
                    cout<<" (5) Methi Matar Malai  with mutton: Price : Rs- 1450"<<endl;
                      cout<<" (6) Non Veg Maratha : Price : Rs- 1350"<<endl;
                        cout<<" (7) Chana Masala with Chicken : Price : Rs- 150"<<endl;
                          cout<<" (8) Baigan Masala with mutton: Price : Rs- 1230"<<endl;
                            cout<<" (9) Bhendi Masala with mutton: Price : Rs- 1150"<<endl;
                              cout<<" (10) Kaju Kari with Chicken : Price : Rs- 1550"<<endl;

        cin>>NonVegAtom;
        if (NonVegAtom == '1') {
            BillAmount = BillAmount + 1250;

        }

        else if (NonVegAtom == '2') {
            BillAmount = BillAmount + 1150;

        }

        else if (NonVegAtom == '3') {
            BillAmount = BillAmount + 1200;

        }

        else if (NonVegAtom == '4') {
            BillAmount = BillAmount + 1290;

        }

        else if (NonVegAtom == '5') {
            BillAmount = BillAmount + 1450;

        }

        else if (NonVegAtom == '6') {
            BillAmount = BillAmount + 1350;

        }

        else if (NonVegAtom == '7') {
            BillAmount = BillAmount + 150;

        }

        else if (NonVegAtom == '8') {
            BillAmount = BillAmount + 1230;

        }

        else if (NonVegAtom == '9') {
            BillAmount = BillAmount + 1150;

        }

        else if (NonVegAtom == '10') {
            BillAmount = BillAmount + 1550;

        }

        else {
            cout<<"You have entered wrong value please enter correct value to continue :"<<endl;
            goto NonVegItemlist;
        }

        cout<<"Do you want to add more atoms y or n ?"<<endl;
        cin>>selectagain;
        if (selectagain == 'y') {
            goto items;
        }
        else {
            return BillAmount;
        }
            
        }

        else {
            cout<<"You have entered wrong value please enter correct value to continue :"<<endl;
            goto items;
        }
    }
    else {
        cout<<"You have entered wrong value please enter 'S' to continue :"<<endl;
        goto start;

    }


    return BillAmount;
    



}


int main() {
    int TotalOrderBill(void);


    int totalBill = TotalOrderBill();
    cout<<"Your Total Bill Amout is : "<<totalBill<<endl;
    cout<<"Thank you for your Order !!"<<endl;
    return 0;
}



