#include <stdio.h>
#include <stdlib.h>



void reverseString(char *str,char *nstr)
{
	
	do
	{
		printf("%p\n",str);
		*nstr = *str;
		nstr--;
		str++;
	}
	while(*(str-1)!='\0');

}


void main()
{
	char mystr[] = "Hello World!";
	char *str = &mystr[0];
	char *nstr;
	*nstr= (char*)malloc(13*sizeof(char));
	printf("ptr = %s\n",*str);
	reverseString(str,nstr);
	printf("%p",nstr);
	printf("%s",*nstr);
	printf("\n");
}

/*

char str[] = "Hello World!";
void reverseString(char *ptr)
{
	char *start, *end, temp;
	start = ptr;
	end = ptr;
	
	for(int j=0;j<13;j++)
		end++;
		

	for(int i=0;i<(15/2);i++)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
	printf("%s",*ptr);
}

void main()
{
	
	printf("String => %s\n",str);
	reverseString(str);
	
	printf("Reverse => %s\n",str);
}

#include<stdio.h>
 
int string_length(char*);
void reverse(char*);
 
main() 
{
   char string[100];
 
   printf("Enter a string\n");
   gets(string);
 
   reverse(string);
 
   printf("Reverse of entered string is \"%s\".\n", string);
 
   return 0;
}
 
void reverse(char *string) 
{
   int length, c;
   char *begin, *end, temp;
 
   length = string_length(string);
 
   begin = string;
   end = string;
 
   for ( c = 0 ; c < ( length - 1 ) ; c++ )
      end++;
 
   for ( c = 0 ; c < length/2 ; c++ ) 
   {        
      temp = *end;
      *end = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}
 
int string_length(char *pointer)
{
   int c = 0;
 
   while( *(pointer+c) != '\0' )
      c++;
 
   return c;
}

*/
