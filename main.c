#include <stdio.h>
#include <stdlib.h>

int main()
{/*
    printf("Hello world!\n");
    //LEARNING HOW TO BUILD SHAPES
    printf("   /|\n");
    printf("  / | \n");
    printf(" /  | \n");
    printf("/   |  \n");
    printf("____\n");

    char myName[] = "Nonye";
    int myAge =18;
    printf("My name is %s \n",myName);
    printf("I started learning C language today \n");
    printf("Nonye is almost a pro \n");
    printf("%s is %d old hahaha \n",myName,myAge);

    char grade = 'A';
    int age = 18;
    double cumAver = 88.9;
    printf("Name: %s \n",myName);
    printf("Age: %d \n",age);
   printf("Grade: %c \n",grade);
    printf("Average: %f \n",cumAver);

//MATH FUNCTIONS
//%f will return a float \8.00,9.00000,1.25000..
//%c will return a single character \ "A"
//%s wil return a bunch of characters \ "nonye"
//%d will return an integer \... 5,56,90...
    printf("%f \n",8.9);
    printf("%f \n",pow(7,2));

//GETTING USER INPUT
int Newage;
printf("Enter your age : ");
scanf("%d",&age);
printf("Man oh man you are %d years old \n",age);

double gpa;
printf("Enter your gpa : ");
//use %lf to specify that you are looking for a double
scanf("%lf",&gpa);
printf("Man oh man you gpa is %f \n",gpa);

//char name2[20];
printf("Enter your name: ");
fgets(name2,20,stdin);
printf("Your name is %s",name2);*/


//SIMPLE CALCULATOR
int num1;
int num2;
printf("Enter first digit: ");
scanf("%d",&num1);
printf("Enter second number : ");
scanf("%d",&num2);

printf("%d + %d is %d \n",num1,num2,num1 + num2);
printf("%d - %d is %d",num1,num2,num1 - num2);
    return 0;
}
