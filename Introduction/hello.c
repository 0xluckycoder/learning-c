/* Multiline */

// Single Line comment

#include <stdio.h>
#include <string.h>

#define MYNAME "Lakshan Perera";

int globalVar = 100;

// basic data types
int main()
{
    char firstLetter = 'L';
    int age = 20;
    long int superBigNum = -327670000;
    float piValue = 3.14159;
    double reallyBigPi = 3.141591415914159;

    printf("\n");

    printf("This will print to screen \n\n");
    printf("I am %d years old \n\n", age);
    printf("Big Number %ld \n\n", superBigNum);
    printf("Pi = %.5f\n\n", piValue);
    printf("Big Pi = %.15f\n\n", reallyBigPi);
    printf("First letter in my name is %c \n\n", firstLetter);
    printf("My Name is %s \n\n", "Lakshan");

    // char myName[14] = "Lakshan Perera";
    char myName[] = "Lakshan Perera";
    // changing the value of
    strcpy(myName, "John Doe");

    printf("My Name is %s \n\n", myName);
}

// usage of scanf
int main()
{
    char middleInitial;
    printf("What is your middle initial? ");
    scanf(" %c", &middleInitial);
    printf("Middle initial %c \n\n", middleInitial);

    char firstName[30], lastName[30];
    printf("What is your name? ");
    scanf(" %s %s", firstName, lastName);
    printf("Your Name is %s %c %s \n\n", firstName, middleInitial, lastName);

    int month, day, year;
    printf("What is your birthday? ");
    scanf(" %d/%d/%d", &month, &day, &year);
    printf("Your Birthday is %d/%d/%d", month, day, year);
}