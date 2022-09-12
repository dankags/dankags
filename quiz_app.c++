#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
 typedef struct{
string question;
string answers[4];
int correct_answer;
 
 }quiz;
 void check_answer(string arr[],int correct_ans,int ans){
 	if(ans==NULL){
   	cout<<"please enter your answer\n";}
   	else if((ans-1)==correct_ans){
   		cout<<"you got the correct answer\n";}
	else if(ans>4||ans<=0){
		cout<<"Enter a valid choice\n";}
		else if(ans>0&&ans<5){
			cout<<"your answer is incorrect\n";
		cout<<"The answer is: "<<arr[correct_ans]<<endl;
				}
 	}

 int main(int argc, char *argv[])
{
	quiz questions[5];
	quiz question1,question2,question3,question4,question5;
//question1	
questions[0].question=
	"Which is the 4th planet from the sun ?"; 
questions[0].answers[0]="venus";
questions[0].answers[1]="Saturn";
questions[0].answers[2]="Mars";
questions[0].answers[3]="Jupiter";
	questions[0].correct_answer=2;
//question2
questions[1].question=
	"Who is the 1st president of Kenya ?"; 
questions[1].answers[0]="Jomo Kenyatta";
questions[1].answers[1]="Mwai Kibaki";
questions[1].answers[2]="Uhuru Kenyatta";
questions[1].answers[3]="Daniel Moi";
	questions[1].correct_answer=0;
//question 3
questions[2].question="What is the name of our galaxy ?"; 
questions[2].answers[0]="Kepler";
questions[2].answers[1]="Adromeda galaxy";
questions[2].answers[2]="Alpha Centuri";
questions[2].answers[3]="Milky way";
	questions[2].correct_answer=3;
	
//question 4
questions[3].question="At which speed does light travels ?"; 
questions[3].answers[0]="300,000 km/s";
questions[3].answers[1]="300,000 m/s";
questions[3].answers[2]="210 km/s";
questions[3].answers[3]="300,000 km/h";
	questions[3].correct_answer=1;

//question 5
questions[4].question="Who invented the a.c current motar ?"; 
questions[4].answers[0]="Albert Einstein";
questions[4].answers[1]="Michael Faraday";
questions[4].answers[2]="Thomas Edison";
questions[4].answers[3]="Nikola Tesla";
	questions[4].correct_answer=3;

//print question and answers
short int answer;
for(int i=0;i<5;i++){
	  cout<<"Q"<<i+1<<". "<<questions[i].question<<endl;
	  for(int j=0;j<4;j++){
	  	cout<<j+1<<". "<<questions[i].answers[j]<<endl;
	  	}
	  	
	  	cout<<"Enter your answer: ";
	  	cin>>answer;
	  	system("cls");
	 check_answer(questions[i].answers,questions[i].correct_answer,answer);
	 cout<<endl;
	}

	
	return 0;
}