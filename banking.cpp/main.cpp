//
//  main.cpp
//  banking management
//
//  Created by Apple on 01/05/24.


#include<iostream>
using namespace std;
class bank{
    char name;
    char address;

    char branch;

    int balance;
    int amount;
    public:
    void open_account();
    void Deposit_money();
    void withdraw_money();
    void Display_account();




};
void bank::open_account(){
    
    cout<<"Enter the full name for ID"<<endl;
    cin>>name;
    cout<<"Enter the address of applicant"<<endl;
    cin>>address;
    cout<<"Enter the branch name"<<endl;
    cin>>branch;
    cout<<"Enter the balace for deposit the money"<<endl;
    cin>>balance;
    cout<<"Dear ,customer Your account is succsesfully Created"<<endl;

}
void bank::Deposit_money(){
    cout<<"Enter the amount for money deposit"<<endl;
    int fd;
    cin>>fd;

    balance+=fd;

}
void bank::Display_account(){
    cout<<"Your Id name is "<<name<<" "<<endl;
    cout<<"Your address is "<<address<<" "<<endl;
    cout<<"Your branch address is "<<branch<<" "<<endl;
    cout<<"Your total balance in the accout is "<<balance<<" "<<endl;

}
void bank::withdraw_money(){
    cout<<"Kindly enter the amount that is to be withdrawn"<<endl;
    cin>>amount;
    balance=balance-amount;
    cout<<"Now your Total amount left in the bank accout is "<<balance<<" "<<endl;


}
int main(){
    int ch,x,p;
    bank Kotak;
    do{
        cout<<"01) Open your bank account "<<endl;
        cout<<"02)Enter for deposit the money"<<endl;
        cout<<"03)Enter the amount for withdraw the money"<<endl;
        cout<<"04)Display the account "<<endl;
        cout<<"05) Exit"<<endl;
        cout<<"Kindly select one option from above one"<<endl;
        cin>>ch;
        switch(ch){
            case 01:
            cout<<"Open the account in bank"<<endl;
            break;

        Kotak.open_account();
        case 02:
        cout<<"Enter the amount for deposit in your account"<<endl;
        Kotak.Deposit_money();
        break;
        case 03:
        cout<<"Enter the amount for Withdrwal"<<endl;
        Kotak.withdraw_money();
        break;
        case 04:
        cout<<"Enter for Display your account Details"<<endl;
        Kotak.Display_account();
        break;
        case 05:
        if(ch==5){
            cout<<"Exit"<<endl;

        }
        default:
        cout<<"This is not exit Please try again later"<<endl;



        }
        
    cout<<"\n do you want to select next step then please press::branch\n";
    cout<<"if you want to exit then please press:: N ";

    if(x=='n' || x=='N')
    cout<<"exit";
    }
    while (x=='branch' || x=='branch');
    //THIS CAN BE USED IN SIMPLE BANK




 return 0;




}





