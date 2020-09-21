#include<stdio.h>
#include<string.h>
 void main(){

     int i = 0, count = 0;
     char string[50];
     printf("Enter some string: ");

     scanf("%s",string);

     for(i = 0;i<=50;i+=1){

         if(string[i]=='A' || string[i]=='a' || string[i]=='E' || string[i]=='e' || string[i]=='I' || 
            string[i]=='i' || string[i]=='O' || string[i]=='o' || string[i]=='u' || string[i]=='U')
            count+=1;
     }

     if(count!=1)
        printf("%s has %d vowels",string,count);
     else
        printf("%s has no vowels",string);
      
 }
 