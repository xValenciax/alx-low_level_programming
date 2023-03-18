#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all digits below 10 using only putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstDig;
int scndDig;
int thrdDig;
int frthDig;
 
firstDig = 48;
scndDig = 48;;
thrdDig = 48;
frthDig = 49; 

 while(firstDig < 58){
   scndDig = 48;
   while(scndDig < 57){
     thrdDig = firstDig;
     while(thrdDig < 58){
       frthDig = scndDig + 1;
       while(frthDig < 58){
	 putchar(firstDig);
	 putchar(scndDig);
	 putchar(' ');
	 putchar(thrdDig);
	 putchar(frthDig);
	 if(firstDig != 57){
	   putchar(',');
	   putchar(' ');
	 }
	 frthDig++;
       }
       thrdDig++;
     }
     scndDig++;
     /*     frthDig = scndDig + 1;*/
   }
   firstDig++;
   /*   thrdDig = firstDig + 1;*/
 }

putchar('\n');
return (0);
}
