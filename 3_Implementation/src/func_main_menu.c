#include<stdio.h>
#include "header.h"
#include<math.h>
#include<stdlib.h>

void main_menu()
{
    int n;
    printf("\n=======*** WELCOME TO THE SCIENTIFIC CALCULATOR APPLICATION ***======\n");
    printf("1.Scientific operations\n");
    printf("2.Trignometric operations\n");
    scanf("%d",&n);
    if(n==1)
    {
        scientific_menu();
    }
    else if(n==2)
    {
        trignometric_menu();
    }
    else
    {
      printf("Please enter the value mentioned in menu.\n");
      exit(0);
    }
}