//
//  main.c
//  NumberChecker
//
//  Created by Prajwal Dhungana on 9/3/2020.
//  Copyright © 2020 Prajwal Dhungana. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//including the header file
#include "header.h"

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
            //Calls oddEven function
            oddEven(userChoice);
        }
        
        else if (userChoice == 2)
        {
            //calls primeComposite function
            primeComposite(userChoice);
        }
        
        else if (userChoice == 3)
        {
            //closes the program
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
            //error checking for wrong input
            printf("!!!!You entered a wrong choice, please try again!!!!\n");
            printf("\n");
            printf("\n");
        }
    }
    return 0;
}

