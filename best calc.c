#include <stdio.h>
#include <stdlib.h>


 int main(void){
 char operator;
double num1, num2;

 printf("Enter the operator:");
 scanf("%c",&operator);

printf("Enter the two numbers:");
 scanf("%lf %lf",&num1,&num2);

 switch(operator){

 case'+':
 printf("%.2f+%.2f=%.2f\n",num1,num2,num1+num2);
 break;


 case'-':
 printf("%.2f-%.2f=%.2f\n",num1,num2,num1-num2);
 break;
 case'/':
 printf("%.2f/%.2f=%.2f\n",num1,num2,num1/num2);
 break;

 case'*':
 printf("%.2f*%.2f=%.2f\n",num1,num2,num1/num2);
 break;

 default:
 printf("please try again mister\n");

}
return 0;

}
