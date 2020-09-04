//
//  main.c
//  NumberChecker
//
//  Created by Prajwal Dhungana on 9/3/2020.
//  Copyright © 2020 Prajwal Dhungana. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int printOutline(void);
void oddEven(int userChoice);
void primeComposite(int userChoice);

int main(int argc, const char * argv[]) {
    
    int userChoice;
    
    while (1)
    {
        //printing the program outline
        printf("-------------------------------------------------------------------------\n");
        printf("Number Checker\n");
        printf("-------------------------------------------------------------------------\n");
        printf("This program helps to check if a number is odd/even or prime/composite.\n");
        printf("-------------------------------------------------------------------------\n");
        printf("1. Check if a number is odd/even.\n");
        printf("2. Check if a number is prime/composite.\n");
        printf("3. Quit the program.\n");
        printf("-------------------------------------------------------------------------\n");
        printf("Please enter your selection: ");
        scanf ("%d", &userChoice);
        
        //error checking if the user enters incorrect choice
        if (userChoice == 1)
        {
            oddEven(userChoice);
        }
        
        else if (userChoice == 2)
        {
            primeComposite(userChoice);
        }
        
        else if (userChoice == 3)
        {
            printf("\n");
            printf("*-------------------------------*\n");
            printf("* Thanks for using the program. *\n");
            printf("* Have a great day!             *\n");
            printf("* Program closed successfully.  *\n");
            printf("*-------------------------------*");
            printf("\n");
            printf("\n");
            return EXIT_SUCCESS;
        }
        
        else
        {
            printf("!!!!You entered a wrong choice, please try again!!!!\n");
            printf("\n");
            printf("\n");
        }
    }
    return 0;
}

void oddEven(int userChoice)
{
    int oddEvenChecker;
    printf("\n");
    printf("Please enter a number: ");
    scanf("%d", &oddEvenChecker);
    
    if (oddEvenChecker % 2 == 0)
    {
        printf("%d is even.\n", oddEvenChecker);
        printf("\n");
    }
    
    else
    {
        printf("%d is odd.\n", oddEvenChecker);
        printf("\n");
    }
}

void primeComposite(int userChoice)
{
    int value = 0;
    int checkNum;
    
    printf("\n");
    printf("Please enter a number:");
    scanf("%d", &checkNum);
    
    for (int i = 1; i<=checkNum; i++) {
        
        if (checkNum % i == 0) {
            value = value + 1;
        }
    }
    
    if (value == 2) {
        printf("%d is a prime number.\n", checkNum);
        printf("\n");
    }
    
    else {
        printf("%d is a composite number.\n", checkNum);
        printf("\n");
    }
}


