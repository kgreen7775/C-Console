//QUESTION 1
/*Create a Software Application for XYZ Bank that allows its members to 
access their bank account information through an “ATM like” interface. 
The Menu Options should include: checking the account balance, debiting 
the account and crediting the account, along with an option 
to exit the program. (10 marks)
*/
/* Create an Account Class to represent the customers’ bank accounts. 
Include a data member of type float to represent the account balance. 
Provide a constructor that receives an initial balance and uses it to 
initialize the data member. (10 marks)
*/

/*	1. The constructor should validate the initial balance to ensure 
that it’s greater than or equal to $1000.00. If not, set the balance 
to 0 and display an error message to the user indicating that the initial
 balance was invalid. (10 marks)
	2. Provide three member functions. 
			a. Member function Credit() should add an amount to the 
			   current balance.  (5 marks)
			
			b. Member function Debit()  should withdraw money from 
			the Account and ensure that the debit amount does not
			 exceed the Account’s balance. If it does, the balance
			  should be left unchanged and the function should print 
			  a message indicating "Debit amount exceeded account balance." (10 marks)
			
			c. Member function GetBalance() should return the current balance. (5 marks)
 
*/

#include <iostream>
#include <pch.h>
#include <string>

using namespace std;

class XYZBank //THIS IS THE CLASS FOR THE BANK
{
	public: //THESE MEMBERS ARE PUBLIC TO THE CLASS
	
	XYZBank() //DEFAULT CONSTRUCTOR
	{	
		//void Enter_Account_Details()	 
		void validate(); //FUNTION RESPONSIBL FOR CHECKING ACCOUNT BALANCE
		this->account_balance;//THIS FIUNCTION IS CALLING A VAULE TO ASSIGN TO THE VARIABLE account_balance
		void usermenu();	
	}
	// INITIALIZING FUNCTIONS (FUNCTION PROTOTYPING)
	float credit(); 
	float debit();
	void get_balance();
	void everything_else();
	
	private: // THESE MEMERS ARE PRIVATE TO THE CLASS
	int account_number;
	string accunt_name;
	float account_balance=0;
	int account_pin;
};

int main() //MAIN FUNCTION
{
 




return 0;
}

float XYZBannk::validate()// FUNCTION CHECKING THE USER'S ACCOUNT BALANCE
{
	int answer;//INITIALIZING THE VARIABLE TO RECIEVE TTHE RESPONSE
	count<<"### ### WELCOME TO XYZ-BANK ATM ### ###"<<endl;
	cout <<"Please Enter your Account Number"<<endl;
	cin >>	account_number;
	cout <<"Please Enter your PIN"<<endl;
	cin >> account_pin;
	
	//BALANCE CHECKING BELOW
	cout <<"Is your Account Balance Greater Than or Equal to $1000.00 ?"<<endl;
	cout<<"***** 1 FOR 'YES' AND 0 FOR 'NO' *********"<<endl;
	cin >>answer;
	
	if(answer>=1)
	{
		cout<<"YOUR ACCOUNT BALALNCE HAS BEEN SET TO $1000.00 >>>>"<<endl;
		account_balance=account_balance+1000.00;
	}
	else
	{
		cout<<"YOUR ACCOUNT BALALNCE HAS BEEN SET TO $0.00 >>>>"<<endl;
		account_balance=account_balance+0;
	}
		
return account_balance;	//RETURNING THE BALANCE CHECK RESULT
};//END OF BALANCE CHECK FUNCTION

void XYZBannk::usermenu() //FUNCTION FOR USER MENU OPTIONS
		{
			int input=0;
			
			while(input!=4)
			{	// CASE MENU OPTIONS
				count<<"********************************************"<<endl;
				cout<<"WELCOME TO XYZ-BANK ATM"<<endl;
				cout<<"PLEASE SELECT 'ONE' OF THE USER OPTIONS BELOW"<<endl;
				cout<<"\n\nTO DO A WITHDRAWAL. SELECT ---  1"<<end;
				cout<<"\n\nTO DO A DEPOSIT. SELECT ---  2"<<endl;
				cout<<"\n\nTO DO A BALANCE ENQUIRY. SELECT ---  3"<<endl;
				cout<<"\n\nTO DO ANYTHING ELSE. SELECT ---  4"<<endl;
				
				//ACCEPTING MENU OPTION RESPONSE FROM USER AND DETERMINING A RESPONSE
				cin>>input;
				switch(input)
				{
					case 1:float credit();
					case 2:float debit();
					case 3:void get_balance();
					case 4:void everything_else();
					default: void validate();
				}//END OF SWITCH STATEMENT
				
			}//END OF WHILE LOOP
				
		};//END OF USERMENU FUNCTION
		
	
