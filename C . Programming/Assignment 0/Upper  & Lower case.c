#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character:\n");
	scanf("%c",&ch);
	
	if ( ch >= 'a' && ch <= 'z')
	{
	   	printf("The given character is lower case");
	}
	else 
	{
	    if ( ch >= 'a' && ch <= 'z')
		{
	     	printf("The given character is upper case");
	    }
        else 
        {
  	        printf("Enter valid character");

     	}
    }
}