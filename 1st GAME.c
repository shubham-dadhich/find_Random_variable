#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int number,guess;
	int guessnumber=1;
	srand(time(0));
	number=rand()%100+1;
//	printf("the random number is %d\n",number);

	do
	{
    printf("guess the number between 1 to 100 \n");
	scanf("%d",&guess);
	if(number<guess)
	{
	printf("lower number please!\n");
    }
    else if(number >guess)
    {
	printf("Higher numer please!\n");
	}
	else
	{
	printf("you gussed number in %d attempts/n",guessnumber);    
	}
    guessnumber++;
    }while(number!=guess);
	return 0;
}
