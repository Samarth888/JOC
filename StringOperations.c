#include <stdio.h>
#include <string.h>

int main () 
{

   char str1[12] = "Hello";
   char str2[12] = "World";
   char str3[12];
   int  len ;

   // copy str1 into str3 
   strcpy(str3, str1);
   printf("strcpy( str3, str1) :  %s\n", str3 );

   // concatenates str1 and str2 
   strcat( str1, str2);
   printf("strcat( str1, str2):   %s\n", str1 );

   // Finding length of str1 after concatenation
   printf("strlen(str1) :  %d\n", strlen(str1) );

   return 0;
}