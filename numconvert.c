#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *number_string ;
    int length = 0 ;
    printf("please enter your length of string: ") ;
    scanf("%d", &length) ;
    number_string = (int *) malloc(sizeof(int) * length) ;
    for(int i = 0 ; i < length ; i++) 
    {
        printf("please enter the string of number %d: ", i + 1) ;
        scanf("%d", &number_string[i]) ;
    }
    for(int i = 0 ; i < length ; i++)
    {
        switch(number_string[i])
        {
            case 0:
                printf("zero ") ;
                break ;
            case 1:
                printf("one ") ;
                break ;
            case 2:
                printf("two ") ;
                break ;
            case 3:
                printf("three ") ;
                break ;
            case 4:
                printf("four ") ;
                break ;
            case 5:
                printf("five ") ;
                break ;
            case 6:
                printf("six ") ;
                break ;
            case 7:
                printf("seven ") ;
                break ;
            case 8:
                printf("eight ") ;
                break ;
            case 9:
                printf("nine ") ;
                break ;
        }
    }
}