#include <stdio.h>
void main()
{
    char str;
    int special characters, i;
    special characters =i = 0;
    printf("Enter any string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            special characters++;
        }
        i++;
    }

    printf("special characters = %d\n", special characters);
}
