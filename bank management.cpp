                                                          //bank management system.....
#include<iostream>                            
#include<conio.h>
#include<stdio.h>

using namespace std;

class Bank{
	
		char name[100];
		char add[50];
	    char y;
	    float balance;
	    	
	public:
		void open_account();
		void Deposite_money();
		void Withdraw_money();
		void Display_money();
		void exit();
	
};
    //DEFINE FUNCTION OPEN_ACCOUNT..............
    void Bank::open_account()
		{
			cout<<"ENTER DETAIL FOR OPENING AN ACCOUNT \n\n";
	
			cout<<"Enter your full Name  :";
			cin.ignore();
			cin.getline(name,100);
			cout<<"Enter your address  : ";
			cin.ignore();
			cin.getline(add,50);
			cout<<"What type of account you want to open saving (s) OR current (c) ";
			cin>>y;
			cout<<"Enter balance for deposite : ";
			cin>>balance;
			cout<<"\n\n";
			
			cout<<"******************************************************************"<<endl;
			cout<<"YOUR ACCOUNT IS CREATE SUCCESSFULLY!!! CPOONGRATULATIONS !! \n";
			cout<<"******************************************************************"<<endl;
		}
	///DEFINE FUNTION DEPOSITE_MONEY...........
	void Bank :: Deposite_money()
		{
			float Deposite;
			cout<<"Enter how much you Deposite : ";
			cin>>Deposite;
			balance+=Deposite; 
			/*cout<<"total amount is \t \n:"<<balance<<endl;*/
		}
	//DEFINE FUNTION WITHDREAW_MONEY............
		void Bank:: Withdraw_money()
		{
			float amount;
		  cout<<"Enter amount to withdraw :";
		  cin>>amount;	
		  balance=balance-amount;
		//  cout<<"now the total amount left \t \n:"<<balance<<endl;;
		}
	//DEFINE FUNTION DISPLAY_DETAIL.............
		void Bank:: Display_money()
		{
			cout<<"YOUR ACCOUNT DETAIL "<<endl;
			cout<<"***************************************************\n"<<endl;
			cout<<"YOUR NAME   \t            : "<<name<<endl;
			cout<<"YOUR ADDRESS \t           : "<<add <<endl;
			cout<<"Type of ACCOUNT  \t         : "<<y <<endl;
			cout<<"AMOUNT OF YOUR ACCOUNT \t :"<<balance<<endl;
			cout<<"***************************************************\n\n"<<endl;
		}

int main()
{
	int choice;
		Bank B;
			char sudo;

	do      ////////USING DO WHILE LOOP
	{
     	system("cls");
    cout<<"\t\tWELCOME TO OUR BANK \n\n";
    cout<<"Press 1 for Opening an account \n";
    cout<<"Press 2 for Deposite money \n";
    cout<<"Press 3 for Withdraw money \n";
    cout<<"Press 4 for Display account \n";
    cout<<"select the option from the abrove \n";
	cin>>choice;
	

     switch(choice)    ///USING SWITCH CONDITION.......................
   {
   	case 1: B.open_account();
   	break;
   	case 2: B.Deposite_money();
   	break;
   	case 3: B.Withdraw_money();
   	break;
   	case 4: B.Display_money();
   	
   }
   
   cout<<"Enter k for continue.............................\n\n "<<endl;
   cout<<"Enter E for exit.................................."<<endl;
   cin>>sudo;
   
   }
   while(sudo=='k'|| sudo=='K');
   
      if(sudo=='n'|| sudo=='N');
      {
    exit(0);   //USING BUILTIN FUNCTION..................
      }
   
    getch();
	return 0;
}
