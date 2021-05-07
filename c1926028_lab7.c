#include<stdio.h>
//Question1
int main(){
int num;
printf("Input the number:");
scanf("%d",&num);
int temp1,temp2,count,i,j;

for(i=2;i<=num/2;i++){
	temp1=i;
	temp2=num-i;
for( j=2;j<=i/2;j++){
	if(i%j==0){
		count++;
		break;
	}
}
	if(count==0){
		for(j=2;j<=(num-i)/2;j++){
			if((num-i)%j==0){
				count++;
				break;
			}
		}
	}
	if(count==0){
		printf("%d can be written as %d+%d\n",num,i,num-i);
	}
	count=0;    
}   
	   printf("Can not be written");
	   return 0;
	
//Question2

int num,temp,r;
int sum=0;
printf("input a number:");
scanf("%d",&num);

for(temp=num;num!=0;num=num/10){
	r=num%10;
	sum=sum*10+r;
}  
   if(sum==temp){
   	   printf("%d is a palindrome number.",temp);
   }
   else{
   	   printf("%d is not a palindrome number. ",temp);
   }
   return 0;

//Question3
   int no_row,c=1,blk,i,j;
    printf("Input number of rows: ");
    scanf("%d",&no_row);
    for(i=0;i<no_row;i++)
    {
        for(blk=1;blk<=no_row-i;blk++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("% 4d",c);
        }
        printf("\n");
    }
        return 0;
//Question4 
int pound1,pound2,shilling1,shilling2,pence1,pence2;
	int total_pounds,total_shillings,total_pennies;
	char Y,N;
	do{
		printf("Enter the first amount in pounds:");
		scanf("%d",&pound1);
		
		printf("Enter the first amount in shillings:");
		scanf("%d",&shilling1);
		
		printf("Enter the first amount in pennies:");
		scanf("%d",&pence1);
		
		printf("Enter the second amount in pounds:");
		scanf("%d",&pound2);
		
		printf("Enter the second amount in shillings:");
		scanf("%d",&shilling2);
		
		printf("Enter the secound amount in pennies:");
		scanf("%d",&pence2);
		
		total_pounds=pound1+pound2;
		total_shillings=shilling1+shilling2;
		total_pennies=pence1+pence2;
		
		if(total_pennies>=12){
			 total_shillings += total_pennies/12;
             total_pennies = total_pennies%12;
		}
		  if(total_shillings >= 20)  {
              total_pounds += total_shillings/20;
			  total_shillings = total_shillings%20;
    }      
          printf("Total pounds,shillings and pennies: %d %d %d\n",total_pounds,total_shillings,total_pennies);
          printf("Do you want to continue?(yes or no):\n");
          scanf("%c %c",&Y,&N);
		  
	}while(1);
//Question5
int x,y,n,i,sum=0;
printf("Input the starting range or number:");
scanf("%d",&x);

printf("Input the ending range or number:");
scanf("%d",&y);

printf("The perfect numbers within the given range:");
for(n=x;n<=y;n++){
    i=1;
    sum=0;
     while(i<n){
     	if(n%i==0)
     		sum=sum+i;
     		i++;
	 }
	if(sum==n)
		printf(" %d",n);
}
	printf("\n");
	
	return 0;
}
    
