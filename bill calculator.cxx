#include <stdio.h>
#include <stdlib.h>
void menu()
{
	printf("*______water bill calc______*\n");
	printf("      1.Bill_calculate\n");
	printf("      2.Exit\n");
	printf("*___________(^_^)___________*\n");
}
int main()
{
	int option;
	float *prev_meter=new float;	
float *current_meter=new float; 
float subtraction,bill_without_tax, bill_with_tax;
	do
	{
		menu();
		printf("Enter option: ");
		scanf("%d",&option);
		system("cls");

		switch (option)
		{
		case 1:
			printf("Enter previous meter number: ");
			scanf("%f",prev_meter);
			printf("Enter current meter number: ");
			scanf("%f",current_meter);
			system("cls");
			subtraction = *current_meter - *prev_meter;
		//	printf("\t%f\n",*prev_meter);
			delete current_meter;
			delete prev_meter;
		//	printf("\t%f",*prev_meter);
			if (subtraction >= 0 & subtraction <= 100)
			{
				bill_without_tax = subtraction * 100;
bill_with_tax =bill_without_tax -(bill_without_tax * 0.04);
				printf("Bill Without Tax is :%f\n", bill_without_tax);
				printf("Bill With Tax is :%f\n", bill_with_tax);
					printf("1.Back_to_menu\n");
			printf("2.Exit\n");
			printf("Enter option:");
			do{
			scanf("%d",&option);
			if (option == 1)
			{
				system("cls");
				break;
			}
			else if (option == 2)
			{option=2;
			system("cls");
			break;
			break;
			}
			else 
			{
				printf("Invalid input");
			}
			}while(option<=2);
			}
			else
			{
				bill_without_tax = subtraction * 150;
	bill_with_tax =bill_without_tax -(bill_without_tax * 0.04);
				printf("Bill Without Tax is :%f\n", bill_without_tax);
				printf("Bill With Tax is :%f\n", bill_with_tax);
				printf("1.Back_to_menu\n");
			printf("2.Exit\n");
			printf("Enter option:");
			do{
			scanf("%d",&option);
			if (option == 1)
			{
				system("cls");
				break;
			}
			else if (option == 2)
			{option=2;
			system("cls");
			break;
			break;
			}
			else 
			{
				printf("Invalid input");
			}
			}while(option<=2);
			}
			break;

		case 2:
			break;

			//default:
			//	printf("Invalid input\n");
			//		break;
		}
		if (option == 2)
		{
			break;
		}
	} while (option < 3);
}
