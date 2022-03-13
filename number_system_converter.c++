#include <iostream>
#include <stdlib.h>
using namespace std;
void Menu(){
cout<<"*-------Number_System Converter-------*\n";
cout<<"        1.Decimal to Binary\n";
cout<<"        2.Binary to decimal\n";
cout<<"        3.    Exit\n";
cout<<"\n*----------------(*_^)----------------*\n";

}

void bin(int num){
	int rem;
    if(num==1){
        cout<<num;
        return;
    }
    rem=num%2;
    bin(num/2);
    /*it will print this function call first then it prints the remeinder*/
    cout<<rem;
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
      cout<<"enter two inputs in parameter";
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
	cout<<sum;
	
	
	}


	
int main(int argc, char *argv[])
{
	Menu();
	int option,number;
	long int binary;
	
	do{
		cout<<endl;
		cout<<"Enter your option: ";
		cin>>option;
	switch(option){
		case 1:
		system("cls");
		cout<<"Enter the decimal number : ";
		cin>>number;
	cout<<"The Binary number of "<<number<<" is : ";
		bin(number);
		cout<<endl<<endl;
		Menu();
		break;
		
		case 2:
		system("cls");
		cout<<"Enter the binary number : ";
		cin>>binary;
	  cout<<"The decimal of the binary is : ";
	decimal(binary);
	cout<<endl<<endl;
	Menu();
		break;
	
	}
	
	if(option==3){
		break;}
	else if(option >3){
		system("cls");
		cout<<"ERROR no such option!!!\n\n";
		Menu();}
}while(option>=3);
	
	return 0;
}
