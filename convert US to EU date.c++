#include <iostream>
#include <cstring>
using namespace std;
#define max 3
string strings[max];
void split (string str, char seperator)  
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
            strings[currIndex] = subStr;  
            currIndex += 1;  
            startIndex = endIndex + 1;  
        }  
        i++;  
        }     
}  


int main() {
    char date[26],actual_day[2];
    string day;
    cout<<"Enter US date : ";
    cin.getline(date,26);
    
    char seperator;
    int month_track;
    string month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    if((date[1]=='/')||(date[2]=='/')){
        seperator='/';
        split(date,seperator);
        cout<<"EU date is : "<<strings[1]<<"/"<<strings[0]<<"/"<<strings[2];
    }else{
        seperator =' ';
        split(date,seperator);
        for(int i=0;i<12;i++){
           if(strings[0]==month[i]){
                month_track=i+1;
                break;
            }
        }
        day=strings[1];
        if(day.size()>2){
        actual_day[0]=day[0];
        actual_day[1]=day[1];
    cout<<"EU date is : "<<actual_day[0]<<actual_day[1]<<"/"<<month_track<<"/"<<strings[2];
    }else{
     actual_day[0]=day[0];   
     cout<<"EU date is : "<<actual_day[0]<<"/"<<month_track<<"/"<<strings[2];}
    }
    return 0;
}
