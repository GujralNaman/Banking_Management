#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class bank{

    char name[100], add[100], y;
    int bal;
    public:

    void open_acc();
    void deposit_money();
    void withdraw_money();
    void display_acc();
};

void bank :: open_acc(){
    cout<<"enter name : ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address : ";
    cin.ignore();
    cin.getline(add,100);

    cout<<"What type of account you want to open -> saving (s) or current (c)"<<endl;
    cin>>y;

    cout<<"Enter amount you want to deposit : ";
    cin>>bal;

    cout<<"Congratulations! Your account has been created successfully"<<endl;
}

void bank :: deposit_money(){
    int a;
    cout<<"Enter how much you deposit : ";
    cin>>a;
    bal = bal + a;
    cout<<"Updated balance is : "<<bal<<endl;
}

void bank :: display_acc(){
    cout<<"Your Name is : "<<name<<endl;
    cout<<"Your Address is : "<<add<<endl;
    cout<<"Type of account is : "<<y<<endl;
    cout<<"Your current balance is  : "<<bal<<endl;
}

void bank :: withdraw_money(){
    float amount;
    cout<<"Enter how much you want to withdraw : ";
    cin>>amount;
    bal = bal - amount;
    cout<<"Updated balance is : "<<bal<<endl;
}

int main(){

    int ch,x;
    bank obj;

    do{
        cout<<"1 Open Account"<<endl;
        cout<<"2 Deposit Money"<<endl;
        cout<<"3 Withdraw Money"<<endl;
        cout<<"4 Display Money"<<endl;
        cout<<"5 Exit"<<endl;
        cout<<"Select any option from the above : ";
        cin>>ch;

        switch(ch){
            case 1 : "1 open account";
            obj.open_acc();
            break;
            case 2 : "2 Deposit money";
            obj.deposit_money();
            break;
            case 3 : "3 Withdraw money";
            obj.withdraw_money();
            break;
            case 4 : "4 Display money";
            obj.display_acc();
            break;
            
            case 5 :
                if(ch==5){
                    exit(1);
                }

            default:
            cout<<"Not a valid option"<<endl;
        }    
        cout<<"\n do you want to select next options then press :: y \n";
        cout<<"If you want to exit then press :: N ";
        x=getch();    
        if(x == 'n' || x == 'N'){
            exit(0);
        }
    }
    while(x=='y' || x=='Y');

    getch();
    return 0;
}