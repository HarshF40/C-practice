#include<stdio.h>

int num;

int factorial(int val){
  if(val==0 || val==1)
    return 1;
  else
    return val*factorial(val-1);
}

int main(){
	printf("\nEnter a Num: ");
	scanf("%d",&num);

       for(int i=0;i<num;i++){
				 printf("\n");
         int k=0;
				 for(int j=0;j<num*2-1;j++){
			 int ans=0;
					 //structure of the triangle
					 if( i+j>=num-1 && j-i<=num-1 ){

						 if(num%2==0 && (i+j)%2!=0){
               ans = factorial(i)/(factorial(k)*factorial(i-k));
              printf("%d",ans);
              k++;
						 } else {
							 printf(" ");
						 }

						 if(num%2!=0 && (i+j)%2==0){
               ans = factorial(i)/(factorial(k)*factorial(i-k));
               printf("%d",ans);
						 } else {
							 printf(" ");
						 }

					 } else {
						 printf(" ");
					 }

				 }
			 }
return 0;
}
