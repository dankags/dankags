#include <stdio.h>
#include <stdlib.h>
void Menu(){
printf("*-------Number_System Converter-------*\n");
printf("        1.Decimal to Binary\n");
printf("        2.Binary to decimal\n");
printf("        3.    Exit\n");
printf("\n*----------------(*_^)----------------*\n");

}

void bin(int num){
	int rem;
    if(num==1){
        printf("%d",num);
        return;
    }
    rem=num%2;
    bin(num/2);
    /*it will print this function call first then it prints the remeinder*/
    printf("%d",rem);
    //binary(num/2);
}
int power(int x,int y){
    //how many times the multiplication repeat
  
  int z=x;
  if(y==0){
      x=1;
      return x;
  }
  else if(y==1){
      x=z;
      return x;
  }
  else if(y>=2){
      for(int a=1;a<y;a++){
          x*=z;
      }
      return x;
  }
  else{
      printf("enter two inputs in parameter");
  }
  return 0;
}
void decimal(long int binary){
	int weight=1,sum=0,rem,y=1;
	while(binary!=0){
	rem=binary%10;
	sum=sum+(rem*weight);
	weight=power(2,y);
	binary/=10;
	y++;
	}
	printf("%d",sum);
	
	
	}


	
int main(int argc, char *argv[])
{
	Menu();
	int option,number;
	long int binary;
	
	do{
		printf("\n");
		printf("Enter your option: ");
		scanf(&option);
	switch(option){
		case 1:
		system("cls");
		printf("Enter the decimal number : ");
		scanf(&number);
	printf("The Binary number of %d is: ",number);
		bin(number);
		printf("\n\n");
		Menu();
		break;
		
		case 2:
		system("cls");
		printf("Enter the binary number : ");
		scanf(&binary);
	  printf("The decimal of the binary is : ");
	decimal(binary);
	printf("\n\n");
	Menu();
		break;
	
	}
	
	if(option==3){
		break;}
	else if(option >3){
		system("cls");
		printf("ERROR no such option!!!\n\n");
		Menu();}
}while(option>=3);
	
	return 0;
}
