//
//  source.c
//  NumberChecker
//
//  Created by Prajwal Dhungana on 9/3/20.
//  Copyright © 2020 Prajwal Dhungana. All rights reserved.
//

#include <stdio.h>

//including the header file
#include "header.h"

//Functions part
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

