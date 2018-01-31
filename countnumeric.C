#include <stdio.h>
void main()
{
    char str;
    int numeric characters, i;
    numeric characters =i = 0;
    printf("Enter any string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            numeric characters++;
        }
        i++;
    }

    printf("numeric characters = %d\n", numeric characters);
}
