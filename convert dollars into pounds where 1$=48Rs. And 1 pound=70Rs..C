
#include<stdio.h> 
int main() 
{
float dollar=7.0,rupee_per_dollar=48.0,rupee_per_pound=70.0,total_rupee,pound;
total_rupee= dollar * rupee_per_dollar;
pound= total_rupee/rupee_per_pound;
printf("Convert %f dollars into pounds\n", dollar);
printf("where 1 dollars = 48 Rs. and 1 pounds=70 Rs.\n");
printf("=%fpounds \n",pound);

}