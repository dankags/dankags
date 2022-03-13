#include<iostream>
#include<ctime>
#include<unistd.h>
using namespace std;
int main()
{
	time_t now= time(0);
	tm *ltm = localtime(&now);
	int hrs,min,sec;
	hrs=(ltm->tm_hour>=12)?hrs=-12+ltm->tm_hour:hrs=ltm->tm_hour;
	sec=ltm->tm_sec;
	min=ltm->tm_min;
	
	string time_day=(-12+ltm->tm_hour>0)?"PM":"AM";
	string hour_ck,minute_ck,second_ck;
	hour_ck=hour_ck=(hrs<10)?"0":"";
	while(ltm->tm_hour<=24){
		if(ltm->tm_hour==24){
			hrs=00;
			time_day="AM";}
			else if(ltm->tm_hour==12){
			hrs=12,time_day="Noon";	}
	while(min<60){
		while(sec<60){
			sleep(1);
		sec++;
	if(sec==60){sec=0;second_ck=(sec<10)?"0":"";
	
		second_ck=(sec<10)?"0":"";
		system("cls");
			cout<<endl<<endl<<"\t\t      Digital Clock"<<endl<<"\t       *________________________*"<<endl<<"  \t\t"<<"|hr : min : sec  AM/PM  |"<<endl<<"\t\t|"<<hour_ck<<hrs<< " : " <<minute_ck<<min<<"  : " <<second_ck<<sec<<"\t"<<time_day<<endl<<"\t        |_______*_(^_^)_*_______|"<<endl;break;	}
			second_ck=(sec<10)?"0":"";	
			minute_ck=(min<10)?"0":"";
		system("cls");
			cout<<endl<<endl<<"\t\t      Digital Clock"<<endl<<"\t       *________________________*"<<endl<<"  \t\t"<<"|hr : min : sec  AM/PM  |"<<endl<<"\t\t|"<<hour_ck<<hrs<< " : " <<minute_ck<<min<<"  : " <<second_ck<<sec<<"\t "<<time_day<<"\t|"<<endl<<"\t        |_______*_(^_^)_*_______|"<<endl;
		}
		
		min++;	
		if(min==60){min=0;minute_ck=(min<10)?"0":"";
	system("cls");
			cout<<endl<<endl<<"\t\t      Digital Clock"<<endl<<"\t       *________________________*"<<endl<<"  \t\t"<<"|hr : min : sec  AM/PM  |"<<endl<<"\t\t|"<<hour_ck<<hrs<< " : " <<minute_ck<<min<<"  :  " <<second_ck<<sec<<"\t"<<time_day<<"\t|"<<endl<<"\t        |_______*_(^_^)_*_______|"<<endl;
		break;}else{
		
minute_ck=(min<10)?"0":"";
system("cls");
			cout<<endl<<endl<<"\t\t      Digital Clock"<<endl<<"\t       *________________________*"<<endl<<"  \t\t"<<"|hr : min : sec  AM/PM  |"<<endl<<"\t\t|"<<hour_ck<<hrs<< " : " <<minute_ck<<min<<"  : " <<second_ck<<sec<<"\t"<<time_day<<"\t|"<<endl<<"\t        |_______*_(^_^)_*_______|"<<endl;
	
		}
		}
		hrs++;
		hour_ck=(hrs<10)?"0":"";
		min=0;
	}
return 0;	
}
