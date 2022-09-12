#include <iostream>
#include <cstring>
#include <string>
using namespace std;
#define max 2
string time1[max];
string time2[max];
void split(string str, char seperator)  
{  
    int currIndex = 0, i = 0;  
    int startIndex = 0, endIndex = 0;  
    while (i <=str.size())  
    {  
        if (str[i] == seperator || i == str.size())  
        {  
            endIndex = i;  
            string subStr = "";  
            subStr.append(str, startIndex, endIndex - startIndex);  
            time1[currIndex] = subStr;  
            currIndex += 1;  
            startIndex = endIndex + 1;  
        }  
        i++;  
        }     
}  
void split2(string str, char seperator)  
{  
    int currIndex = 0, i = 0;  
    int startIndex = 0, endIndex = 0;  
    while (i <=str.size())  
    {  
        if (str[i] == seperator || i == str.size())  
        {  
            endIndex = i;  
            string subStr = "";  
            subStr.append(str, startIndex, endIndex - startIndex);  
            time2[currIndex] = subStr;  
            currIndex += 1;  
            startIndex = endIndex + 1;  
        }  
        i++;  
        }     
}  


int main() {
   char in_12hrs [10];
   
   int hour;
   //string time[2],time2[2];
   cout<<"Enter time : ";
   cin.getline(in_12hrs,10);
   char seperator=' ';
  split(in_12hrs,seperator);
  string actual_time = time1[0];
  split2(actual_time,':');
  int hrs=stoi(time2[0]);
  if(time1[1]=="AM"){
      if(time2[0]=="00"){
          hour=24;
        cout<<"military time is : "<<hour<<":"<<time2[1];
      }else if(hrs<=10&&hrs>=1){
            hour=stoi(time2[0]);
       		cout<<"military time is : "<<"0"<<hour<<":"<<time2[1];
      	}
      else if(hrs>=10){
          hour=stoi(time2[0]);
          cout<<"military time is : "<<hour<<":"<<time2[1];
      }
  }else if(time1[1]=="PM"){
    hour= stoi(time2[0])+12;
     cout<<"military time is : "<<hour<<":"<<time2[1];
  }
  
  
  
    return 0;
}