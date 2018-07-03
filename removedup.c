#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char str[10000];
    int flag = 0 ; 
    printf("please enter your string: ") ;
    gets(str) ;
    for(int i = 0 ; i < 10000 ; i++)
    {
       int j ;
       for(j = 0 ; j < i ; j++)
       {
           if(str[i] == str[j])
           {
               break ;
           }
       }
       if(i == j)
        {
            str[flag++] = str[i] ;
        }
    }
        printf("After duplicate: %s", str) ;
}

