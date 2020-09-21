//Program to find the sum of all prime numbers till user entered limit
#include<stdio.h>
void main(){
    int i , j , n , count = 0 , sum = 0;
    printf("Enter some no.: ");
    scanf("%d",&n);

    for(i = 2;i<=n;i+=1){

        for(j = 1;j<=i;j++){

            if(i%j==0)
                count+=1;
        }
        if(count<=2)
            sum = sum + i;
        count = 0;
            
    }
    printf("Sum of all the prime no.s upto %d in %d",n,sum);
}
