#include <iostream>
#include <cstring>
using namespace std;
string password_validator(string password){
    string weak="Weak Password";
    string strong="Strong Passwword";
    int count=0,count2=0;
    int password_length=password.size(); char num[10]={'0','1','2','3','4','5','6','7','8','9'};
char signs[7]={'!','@','#','$','*','%','&'};


for(int i=0;i<password_length;i++){
	for(int j=0;j<10;j++){
	  if(password[i]==num[j]){
	  	count++;
	  	}	
		}
	for(int b=0;b<7;b++){
	  if(password[i]==signs[b]){
	  	count2++;
	  	}	
		}
}

if(password_length>=7&&count>=2&&count2>=2){
    return strong;
}else{
    return weak ;
}


}
int main() {
    string password;
    cout<<"Enter your password : ";
    cin>>password;
cout<<password_validator(password);
    return 0;
}

}
