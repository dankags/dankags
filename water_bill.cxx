#include <iostream>
#include <stdlib.h>
using namespace std;
void menu()
{
	cout << "*______water bill calc______*\n";
	cout << "      1.Bill_calculate\n";
	cout << "      2.Exit\n";
	cout << "*___________(^_^)___________*\n";
}
int main(int argc, char *argv[])
{
	int option,opt;
	float prev_meter, current_meter, subtraction, bill_without_tax, bill_with_tax;
	do
	{
		menu();
		cout << "Enter option: ";
		cin >> option;
		system("cls");
	    if(option==2){
	    	cout<<"*--------thankyou for your service--------*";}
		if (option == 2)
		{
			break;
		}
		switch (option)
		{
		case 1:
			printf("Enter previous meter number: ");
			cin >> prev_meter;
			cout << "Enter current meter number: ";
			cin >> current_meter;
			system("cls");
			subtraction = current_meter - prev_meter;
			if (subtraction >= 0 & subtraction <= 100)
			{
				bill_without_tax = subtraction * 100.0;
				bill_with_tax = bill_without_tax - (bill_without_tax * 0.04);
				cout << "Bill Without Tax is :ksh." << bill_without_tax << endl;
				cout << "Bill With Tax is :ksh." << bill_with_tax << endl;
				cout << "1.Back_to_menu\n";
				cout << "2.Exit\n";
				cout << "Enter option:";
				//cin >> option;
				
				do{
					cin >> opt;
				if (opt == 1)
				{  option=1;
					system("cls");
			         break;
				}
				else if (opt == 2)
			{option=2;
			system("cls");
					break;
					break;
				}
				else 
				{system("cls");
					cout << "Invalid input\n";
				cout << "1.Back_to_menu\n";
				cout << "2.Exit\n";
				cout << "Enter option:";	
				//	break;
				}}while(opt>=2);
				break;
			}
		
		else
		{
			bill_without_tax = subtraction * 150.0;
			bill_with_tax = bill_without_tax - (bill_without_tax * 0.04);
			cout << "Bill Without Tax is : ksh." << bill_without_tax << endl;
			cout << "Bill With Tax is : ksh." << bill_with_tax << endl;
			cout << "1.Back_to_menu\n";
			cout << "2.Exit\n";
			cout << "Enter option:";
			do{
			cin>>opt;
			if (opt == 1)
			{
				system("cls");
				break;
			}
			else if (opt== 2)
			{option=2;
			system("cls");
			break;
			break;
			}
			else 
			{  system("cls");
				cout << "Invalid input\n";
				cout << "1.Back_to_menu\n";
			cout << "2.Exit\n";
			cout << "Enter option:";
			}
			}while(opt>=2);
			break;
		}
		
		default:
		cout<<"Invalid input\n";
	//	menu();
//		cout<<"Enter option: ";
	//	cin>>option;
	//	if
		continue;
		}
	if(option==2){
	cout<<"*--------thankyou for your service--------*";
		break;}else if(option>2){
	printf(" \t____ Invalid input !!!_____");}
}
while (option !=2)
	;
}
