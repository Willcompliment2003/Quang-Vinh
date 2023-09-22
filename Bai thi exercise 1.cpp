#include <stdio.h>
int sum(int a, int b);
int substraction(int a, int b);
int multiplication(int a, int b);
int Division(int a, int b);

int main(){
	int num1, num2;
	printf("\nEnter the first number :");
	scanf("%d", &num1);
	printf("\nEnter the second number :");
	scanf("%d", &num2);
	int result1 = sum(num1, num2);
	printf("\nThe sum is : %d", result1);
	int result2 = substraction(num1, num2);
	printf("\nThe substraction is : %d ", result2);
	int result3 = multiplication(num1, num2);
	printf("\nThe multiplication is : %d", result3);
	int result4 = Division(num1, num2);
	printf("\nThe Division is : %d", result4);
}
int sum(int a, int b){
	int c;
	c = a + b;
	return c;
}
int substraction(int a, int b){
	int c;
	c = a - b;
	return c;
}
int multiplication(int a, int b){
	int c;
	c= a * b;
	return c;
}

int Division(int a, int b){
	int c;
	c = a/b;
	return c;
}


