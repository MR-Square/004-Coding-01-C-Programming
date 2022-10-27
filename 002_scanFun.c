/*
TITLE : USE OF SCANF FUNCTION
OWNER : MOHD RAZA MOHD RAFIQUE SHAIKH
DATE  : 25/10/2022
*/
#include<stdio.h>
void main()
{
	/*
	First we will take number from user.
	for integer data type we use 'int' keyword and for float data type we use 'float' keyword.
	*/
	int no;  // this step is called declaration.
	// Here 'no' is the name of our variable  and it is of integer type.You can also write float instead of int.
	printf("Enter a number::");
	scanf("%d",&no);
	// %d is used for integer and %f is used for float.
	
	/*
	 Now we will take character from user 
	 for character data type we use 'char' keyword.
	*/
	char a;
	// Here a is the name of our variable and data type is character.You can give the name which you want.
	printf("Enter a alphabet::");
	scanf(" %c",&a);
	// %c is used for character.
    // NOTE: DON'T FORGET TO ADD SPACE BEFORE %c AS WE ARE TAKING INTERGER FIRST.

	printf("You entered %d no and %c alphabet",no,a);
	//NOTE: in scanf don't forget to use & before writing name of variable.
	//		Don't forget to put semicolon(;) after completing all statement.
	
}

/*
ABOUT MY YOUTUBE CHANNEL
NAME : MR SQUARE
LINK : https://www.youtube.com/channel/UCFQ-C2iL9J9cbE0X1fawH_w
*/
