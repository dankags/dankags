#include <iostream>
#include <stdlib.h>
using namespace std;
void menu()
{
	cout << "*--------ATM_MENU--------* \n";
	cout << "       1.Deposit \n";
	cout << "       2.Withdraw\n";
	cout << "       3.Balance\n";
	cout << "       4.Transfer\n";
	cout << "       5. Exit\n";
	cout << "*----------(^_+)---------*\n";
}
typedef struct{
	double money_amount;
	
	
	}account; 
	
int main(int argc, char *argv[])
{
	short int n, opt;
	double deposit, balance, withdraw,transfer;
	balance = 2000.50;
	account daniel;
	daniel.money_amount=10000.00;
	do
	{
		menu();
		cout << "Enter your option: ";
		cin >> n;
		system("cls");

		switch (n)
		{
		case 3:
			system("cls");
			cout << "Your balance is: " << balance << " $" << endl;

			cout << " 1. Back\n 2. Exit" << endl;
			cout << "Enter option: ";
			cin >> opt;
			if (opt == 1)
			{
				system("cls");
				break;
			}else if(opt==2){
		 
		 n=5;
		 system("cls");
		}
			break;
		case 1:
			cout << "Enter the amount: ";
			cin >> deposit;
			balance += deposit;
			system("cls");
			cout << "Amount deposited: " << deposit << " $" << endl;
			cout << "Your current balance is : " << balance << " $" << endl;
			cout << " 1. Back\n 2. Exit" << endl;
			cout << "Enter option: ";

			cin >> opt;
			if (opt == 1)
			{
				system("cls");
				break;
			}
			else if(opt==2){
		 
		 n=5;
		 system("cls");
		}
			break;
		case 2:
			cout << "Enter the amount : ";
			cin >> withdraw;
			if (withdraw <= balance)
			{
				balance -= withdraw;
			}
			else
			{
				cout << "Not enough money to withdraw";
			}
			system("cls");
			cout << "\nAmount withdrawn : " << withdraw << " $" << endl;
			cout << "Your current balance is : " << balance << " $" << endl;
			cout << " 1. Back\n 2. Exit" << endl;
			cout << "Enter option: ";
			cin >> opt;
			if (opt == 1)
			{
				system("cls");
				break;
			}else if(opt==2){
		 
		 n=5;
		 system("cls");
		}
			break;
			case 4:
			cout<<"Enter amount to be transfered: ";
			cin>>transfer;
			cout<<"You have successfully tansfered "<<transfer<<"$"<<endl;
			if(transfer<balance){
		     daniel.money_amount+=transfer;
		     balance-=transfer;
			}else{
				cout<<"NOT Enough money in your account!!!"<<endl;}
				cout << " 1. Open the account balance \n 2. Back\n " << endl;
			cout << "Enter option: ";
			do{
			cin >> opt;
			if (opt == 2)
			{
				system("cls");
				break;
			}
		 else if(opt==1){
		 	system("cls");
		 	cout<<"Your balance is : "<<balance<<"$"<<endl;
		 	cout<<"account balance is : "<<daniel.money_amount<<"$"<<endl;
		 	cout<<"1.Back to menu\n";
		 	cout<<"Enter option: ";
		 	cin >> opt;
			if (opt == 1)
			{
				system("cls");
				break;
			}else{
				while(opt==0||opt!=1){
				system("cls");
			cout<<"Invalid Input !!!!"<<endl;
			cout<<"1. Back_to menu"<<endl;
			cout<<"Enter option: ";
			cin>>opt;
	         if (opt == 1)
			{
				system("cls");
				break;
				 
			}
			
				}
				break;
			}
		 	}}while(opt<=2);
			break;
		}
		if (n == 5)
		{cout<<"*---Thankyou for your service---*";
			break;
		}

	} while (n <= 5);
	return 0;
}
