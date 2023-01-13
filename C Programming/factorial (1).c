//Factorial of a number
   
#include<iostream>

using namespace std;

int main()
{
	int num, i, fact = 1;
	cout<<"enter a number ";
	cin>>"%d",&num;  

	for(i=num; i>=1; i--)  //for(i=1; i<=num; i++)
	{
		fact = fact * i;  
	}
	cout<<"\nFactorial of fact<<1;
	return 0;
}
