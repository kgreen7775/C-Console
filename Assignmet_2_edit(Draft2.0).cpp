#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
void Welcome();
void gotoxy(int x, int y);

class XYZBank { // PARENT CLASS
public:


	XYZBank() //default constructor
	{
		//Welcome();
		int account_sel=0;
		float current_account_balance;
		float deduction = 0;
		float credit = 0;
		//this->UserMenu(); //calling user menu inside constructor
	}
	void determine_account_type(int account_sel)
	{

	}

	void Print_account_info()
	{
		cout << " YOUR ACCOUNT BALANCE IS : \n"<< current_account_balance << endl;
	}

	void Validate()
	{
		cout << "PLEASE ENTER CURRENT ACCOUNT BALANCE: \n";
		cin >> current_account_balance;

		if(current_account_balance>=1000)
	{
		cout<<"YOUR ACCOUNT BALALNCE IS GREATER THAN $1000 >>>>\n"<<endl;
		cout << "YOUR CURRENT ACCOUNT BALANCE IS: \n" << current_account_balance << endl;
		current_account_balance=current_account_balance;
	}
	else
	{
		cout<<"ERROR!! INITIAL BALANCE IS INVALID>>>>\n"<<endl;
		cout<<"YOUR ACCOUNT BALALNCE HAS BEEN SET TO $0.00 >>>>\n"<<endl;
		current_account_balance=0;
	}
		current_account_balance++;
	}
	void Credit()
	{
		cout << "Enter amount to be added to Current Account Balance: ";
		cin >> credit;
		current_account_balance += credit;
		cout << "YOUR CURRENT ACCOUNT BALANCE IS: \n" << current_account_balance << endl;
	}
	void Debit() {
		cout << "Enter amount to be Deducted from Current Account Balance: ";
		cin >> deduction;

		if(deduction>current_account_balance ){
		cout << "DEBIT Amount exceeded Current Account Balance \n"<< endl;
		current_account_balance = current_account_balance ;
		cout << "YOUR CURRENT ACCOUNT BALANCE IS: \n" << current_account_balance << endl;
		}
		else {
		current_account_balance -= deduction;
		cout << "YOUR CURRENT ACCOUNT BALANCE IS: \n" << current_account_balance << endl;
				}
	}
	/*void UserMenu() {
		int input = 0;

		while (input != 5) {
			cout << "### ### WELCOME TO XYZ-BANK ATM ### ###\n\n";
			cout << "What type of account do you have?...\n";
			cout << "1. SAVING ACCOUNT\n";
			cout << "2. CHEQUING ACCOUNT\n";
			//cout << "3. TO ADD CREDIT TO ACCOUNT \n";
			//cout << "4. TO DEDUCT FROM ACCOUNT \n";
			cout << "5. I HAVE NO ACCOUNTS\n\n";
//accept user input

			cin >> input;
			switch (input) {
			case 1: ;break;//Print_account_info(); break;
			case 2: Validate(); break;
			case 3: Credit(); break;
			case 4: void chequing_menu();break;//Debit(); break;
			default: cout << "Thanks for using ### ### WELCOME TO XYZ-BANK ATM ### ###\n";
			}//end switch statement

		}//end of while loop
	}*/
protected:
	//data member
	float current_account_balance=0;
	float deduction;
	float credit;


};//end of BASE CLASS


class Account:public XYZBank
{
	public:




};


class Saving:public XYZBank
{
	public:

	Saving()
	{


	}

	void Print_account_info()
	{
		cout << " YOUR ACCOUNT BALANCE IS : \n" << saving_account_balance << endl;
	}

	void Validate()
	{
		float intrest=0.0;//INTREST TO BE ADDED IF ACCOUNT BALACE IS OVER 1K

		cout << "PLEASE ENTER CURRENT ACCOUNT BALANCE: \n";
		cin >> saving_account_balance;

		if(saving_account_balance>=1000)
	{
		cout<<"YOUR ACCOUNT BALALNCE IS GREATER THAN $1000 >>>>\n"<<endl;
		cout<<"AN INTREST OF 10% IS ADDED TO YOU ACCOUNT BALANCE\n";
		cout << "YOUR CURRENT ACCOUNT BALANCE IS: \n" << saving_account_balance << endl;
		saving_account_balance=saving_account_balance;
		intrest=saving_account_balance*0.10;
		cout<<"Intrest Added is: "<<intrest;
		saving_account_balance=saving_account_balance+intrest;
		cout<<"\n Total Amount in Saving Account = "<<saving_account_balance;
	}
	else
	{
		cout<<"ERROR!! INITIAL BALANCE IS INVALID>>>>\n"<<endl;
		cout<<"YOUR ACCOUNT BALALNCE HAS BEEN SET TO $0.00 >>>>\n"<<endl;
		saving_account_balance=0;
	}
		saving_account_balance++;
	}


	void saving_menu()
	{
		int saving_input = 0;

		while (saving_input != 5) {
			cout << "### ### SAVING ACCOUNT MENU ### ###\n\n";
			cout << "Select one of the options...\n";
			cout << "1. TO PRINT CURRENT ACCOUNT INFO\n";
			cout << "2. Please Enter your ACCOUNT BALANCE\n";
			cout << "3. TO ADD CREDIT TO ACCOUNT \n";
			cout << "4. TO DEDUCT FROM ACCOUNT \n";
			cout << "5. Exit\n\n";
			//accept user input
			cin >> saving_input;
			switch (saving_input) {
			case 1: Print_account_info(); break;
			case 2: Validate(); break;
			case 3: Credit(); break;
			case 4: Debit(); break;
			default: cout << "Thanks for using ### ### WELCOME TO XYZ-BANK ATM ### ###\n";
			}//end switch statement

		}//end of while loop
	}

	protected:
		int account_sel=0;
		float saving_account_balance;
		float deduction = 0;
		float credit = 0;
		//void saving_menu();
}sav1;

class Chequing:public XYZBank
{
	public:

	Chequing()
	{


	}

	void Debit()
		{
			float fee=60.70;
		cout << "Enter amount to be Deducted from Chequing Account Balance: ";
		cin >> deduction;

		if(deduction>current_account_balance )
		{
		cout << "DEBIT Amount exceeded Chequing Account Balance \n"<< endl;
		current_account_balance = current_account_balance - fee;
		cout << "YOUR CHEQUING ACCOUNT BALANCE IS: \n" << current_account_balance << endl;
		}
		else
		{
		current_account_balance = current_account_balance-(deduction+fee);
		cout << "YOUR CHEQUING ACCOUNT BALANCE IS: \n" << current_account_balance << endl;
		}
	}



	void chequing_menu() {

		int chequing_input = 0;

		while (chequing_input != 5) {
			cout << "### ### CHEQUING ACCOUNT MENU ### ###\n\n";
			cout << "Select one of the options...\n";
			cout << "1. TO PRINT CURRENT ACCOUNT INFO\n";
			cout << "2. Please Enter your ACCOUNT BALANCE\n";
			cout << "3. TO ADD CREDIT TO ACCOUNT \n";
			cout << "4. TO DEDUCT FROM ACCOUNT \n";
			cout << "5. Exit\n\n";
//accept user input
			cin >> chequing_input;
			switch (chequing_input) {
			case 1: Print_account_info(); break;
			case 2: Validate(); break;
			case 3: Credit(); break;
			case 4: Debit(); break;
			default: cout << "Thanks for using ### ### WELCOME TO XYZ-BANK ATM ### ###\n";
			}//end switch statement

		}//end of while loop
	}

	protected:
		int account_sel=0;
		float current_account_balance;
		float deduction = 0;
		float credit = 0;



}cheq1;






int main()
{
    int input;
	Welcome();
	system ("cls");
	//initialize object from our class
	//XYZBank nest;
	//Account acc1;
    Saving sav1;
    Chequing cheq1;


	while (input != 3) {
			cout << "### ### WELCOME TO XYZ-BANK ATM ### ###\n\n";
			cout << "What type of account do you have?...\n";
			cout << "1. SAVING ACCOUNT\n";
			cout << "2. CHEQUING ACCOUNT\n";
			//cout << "3. TO ADD CREDIT TO ACCOUNT \n";
			//cout << "4. TO DEDUCT FROM ACCOUNT \n";
			cout << "3. I HAVE NO ACCOUNTS\n\n";
//accept user input

			cin >> input;
			switch (input) {
			case 1: sav1.saving_menu();break;//Print_account_info(); break;
			case 2: cheq1.chequing_menu(); break;
			case 3: cout << "Thanks for using ### ### WELCOME TO XYZ-BANK ATM ### ###\n";; break;
			//case 4: void chequing_menu();break;//Debit(); break;
			default: cout << "Thanks for using ### ### WELCOME TO XYZ-BANK ATM ### ###\n";
			}//end switch statement

		}
	//nest.UserMenu(); //calling user menu using object name


//Acc1.account_select();
//bal_check.validate();










cin.get();//terminates program when a key is pressed

}


void gotoxy(int x, int y)
{
	COORD coord_name;
	coord_name.X = x;
	coord_name.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord_name);
}
void Welcome()
{
   system("color 02");
   int i;
   char wel[]="\t     WELCOME TO XYZ BANK";

   for(i=18;i<63;i++)
   {
   	  gotoxy(i,8);
    	cout<<("\4");
      Sleep(50);
   }
for(i=9;i<19;i++)
   {
      gotoxy(62,i);
      cout<<("\4");
      Sleep(50);
   }
for(i=61;i>17;i--)
   {
      gotoxy(i,18);
      cout <<("\4");
      Sleep(50);
   }
for(i=17;i>8;i--)
   {
      gotoxy(18,i);
      cout<<("\4");
      Sleep(50);
   }
gotoxy(19,13);
   for (i=0;i<(strlen(wel));i++)
   {
   	cout<<(wel[i]);
      Sleep(100);
   }
	Sleep(3000);
}// end function welcome


