#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void main()
{
    int str_low[26] = { 0 } ;
    int str_upp[26] = { 0 } ;
    char character ;
    printf("please input your characters: ") ;
    while((character = getchar()) != '\n')
    {
        if(isalpha(character))
        {
            if((character >= 97) && (character <= 122))
            {
                str_low[tolower(character) - 'a']++ ; //轉小寫換ASCII 扣掉 字母首'a'的ASCII
            }
            if((character >= 65) && (character <= 90))
            {
                str_upp[toupper(character) - 'A']++ ; //同理如上
            }
        }
    }
    for(int i = 0 ; i < 26 ; i++)
    {
        printf("character %c : %d \n", 'a' + i, str_low[i]) ;
        printf("character %c : %d \n", 'A' + i, str_upp[i]) ;
    }
}