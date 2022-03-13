#include <iostream>
#include <algorithm>
using namespace std;


int min_value(int num[],int z){
int min=num[0];
	for( int i =1; i<z;i++){
		if(min<num[i]){}else{
			min=num[i];
		}}
		cout<<"minimum value is: "<<min<<endl;
		return 0;
}


int max_value(int num[],int z){
  int max=0;
  for(int d=0; d<z;d++){
 if(num[d]>max){
 	  max=num[d];
 	  }
 }
 cout<<"The maximum value is : "<<max<<endl;
return 0;		
	}

		
int main(){
	int number[30],b;
cout <<"Enter the number of times you want to input data : ";
    cin>>b;
//cout<<"Now Enter your data : ";//<<endl;
for(int i =0;i<b;i++){
cout<<"Now Enter your data : ";
cin>>number[i];
}
min_value(number,b);
max_value(number,b);
return 0;
}
