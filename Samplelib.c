#include "SampleLib.h"
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
 unsigned int result = 1;
 while ( value > 1 ) {
 result *= value;
 value --;
 }
 return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
	
 if ( pow == 0 ) return 1;
 if ( pow == 1 ) return value;
 int accumulator = 1;
 while( pow > 0 ) {
 accumulator *= value;
 pow--;
 }
 return accumulator;
}
void greet(void)
{
	printf("bonjour\n");
}
void sumf(int a, int b)
{

printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	int sum;
	sum=a+b;
	printf("sum=%d\n",sum);

}
int reverseNumber(int num) {
    int reversed = 0;
    printf("Enter a number to convert\n");
    scanf("%d",&num);
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    printf("%d",reversed);
    
    return reversed;
}
float prod(float num1, float num2)
{
	printf("Enter two numbers for multiplication\n");
	scanf("%f%f",&num1,&num2);
	float product=num1*num2;
	printf("Th product is %.2f",product);
	return 0;
}
int even(int a){
	printf("Enter an integer\n");
	scanf("%d",&a);
	if(a%2==0)
	printf("Number is even\n");
	else
	printf("Number is odd\n");
	return 0;
} 
int comp(int a,int b)
{
	printf("Enter two integers\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("%d>%d",a,b);
	else if(a<b)
	printf("%d<%d",a,b);
	else
	printf("%d=%d",a,b);
	return 0;
}

void sortThreeNumbers(int a, int b, int c) {
    // Using simple bubble sort logic
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
     printf("Sorted numbers: %d %d %d\n", a,b, c);
}
