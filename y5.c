#include <math.h>
#include <stdio.h>
// Function to calculate EMI
void calculate_EMI(){
   float principle, rate, time1, emi;
   scanf("%f%f%f",&principle,&rate,&time1);
   rate = rate / (12 * 100); // one month interest
   time1 = time1 * 12; // one month period
   emi = (principle * rate * pow(1 + rate, time1)) / (pow(1 + rate, time1) - 1);
   printf("Monthly EMI is= %.3f", emi);
}
int main(){
   calculate_EMI();
   return 0;
}