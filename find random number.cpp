#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int number,guess;
	int guessnumber=1;
	srand(time(0));
	number=rand()%100+1;
//	cout<<"the random number is : "<<number\n";

	do
	{
    cout<<"guess the number between 1 to 100 \n";

	cin>>guess;
	if(number<guess)
	{
	cout<<"lower number please!\n";
    }
    else if(number >guess)
    {
	cout<<"Higher numer please!\n";
	}
	else
	{
	cout<<"you gussed number in "<<guessnumber<<" attempts/n";    
	}
    guessnumber++;
    }while(number!=guess);
return 0;
} 
