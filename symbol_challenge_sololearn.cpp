#include <iostream>
using namespace std;

int main() {
int z=0,size=0,size2=0;
char word[100];
cin.getline(word,100);
/*char signs[]={'$',':','*','"','!','\'','(',')',',','&','_','#','@','%'};*/
   char upper[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char lower[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char num[]={'0','1','2','3','4','5','6','7','8','9'};
while(word[size]&&++size<100);
char decrypted[size];
for(int i=0;i<size;i++){
if(word[i]==' '){
    decrypted[z]=word[i];
    z++;
}
    for(int b=0;b<26;b++){
        if(word[i]==lower[b]){
        //cout<<word[i];
        decrypted[z]=word[i];
        z++;
            break;
        }else if(word[i]==upper[b]){
        decrypted[z]=word[i];
        //cout<<word[i];
            z++;
        break;}
    }
   for(int a=0;a<11;a++){
        if(word[i]==num[a]){
           decrypted[z]=word[i];
           z++; 
        }
    }
    
}
while(decrypted[size2]&&++size2<100);
for(int i=0;i<z;i++){
cout<<decrypted[i];
}
    return 0;
}