#include<stdio.h>
#define BASE 10 /* Constant */
//Question1
int main()
{
    long long j, n;
    int i, lastDigit;
    int freq[BASE];

    printf("Enter any number: ");
    scanf("%lld", &j);

    for(i=0; i<BASE; i++)
    {
        freq[i] = 0;
    }

    /* Copying the value of 'j' to 'n' */
    n = j; 

    while(n != 0)
    {
        
        lastDigit = n % 10;

        /* Removing last digit */
        n /= 10;

        /* Increasing frequency array */
        freq[lastDigit]++;
    }

    printf("Frequency of each digit in %lld is: \n", j);
    for(i=0; i<BASE; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

    return 0;
//Question2
int son;
int sum;
int temp;
int i,r;
printf("Enter upper limit:");
scanf("%d",&son);

printf("Armstrong number between 1 to %d are:",son);

for(i=1;i<=son;i++){
    temp=i;
    sum=0;

  while(temp!=0){
    r=temp%10;
    temp=temp/10;
    sum=sum+(r*r*r);
  }

  if(sum==i)
     printf(" %d,",i);
}
printf("\n");
return 0;
//Question3
long int decn,rmd,q,dn=0,m,l;
	int i=1,j,tmp;
        char s;
  printf("Enter any decimal number:");
  scanf("%ld",&decn);
	printf("Decimal number= ");
	scanf("%ld",&decn);
	q = decn;
        for(l=q;l>0;l=l/16)
               {
		tmp = l % 16;
		if( tmp < 10)
		           tmp =tmp + 48; else
		         tmp = tmp + 55;
                         dn=dn*100+tmp;
	        }
          printf("Hexadecimal Number = ");
         for(m=dn;m>0;m=m/100)
            {
               s=m % 100;
               printf("%c",s);
            }
    printf("\n\n");
    return 0;
    //Question4
    #include<stdio.h>
    #include<math.h> //for fourth question, this library is used
    int x=1,i;
    int fact=1,n=10;
    float sum=0;
    
    for(i=1;i<10;i++)
    {
        fact = fact*i;
        sum = sum + (pow(x,i)/fact) ;

    }
    sum= sum +1;
    
    printf("\n\nresult:  %.2f\n\n",sum);
    return 0;
    
    //Question5
     int start;
    int k,n1,s1=0,j,i;
    int fact;
    int end;
    printf("Input starting range of number:");
    scanf("%d",&start);

    printf("Input ending range of number:");
    scanf("%d",&end);

    printf("\n\nThe strong numbers are:\n");

    for(k=start;k<=end;k++){
      n1=k;
      s1=0;
    for(j=k;j>0;j=j/10){
        fact=1;
        for(i=1;i<=j%10;i++){
          fact=fact*i;
        }
        s1=s1+fact;
    }
    if(s1==n1)
        printf(" %d",n1);
    }
printf("\n\n");
     return 0;
}




