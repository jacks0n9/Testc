#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Hi! What is your name? ");
	char name[255];
	scanf("%s",name);
	printf("Hello %s! ", name);
	printf("How old are you?\n ");
	int age;
	scanf("%i", &age);
	printf("Your name is %s and you are %i years old!\n",name,age);
	int year = age + 10;
	printf("In 10 years you will be %i years old!\n",year);
}
