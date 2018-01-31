#include <stdio.h>
void main()
{
    char str;
    int alphabets, i;
    alphabets =i = 0;
    printf("Enter any string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        i++;
    }

    printf("Alphabets = %d\n", alphabets);
}
