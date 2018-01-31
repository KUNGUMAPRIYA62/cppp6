#include <stdio.h>
void main()
{
    char str;
    int spaces, i;
    spaces =i = 0;
    printf("Enter any string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            spaces++;
        }
        i++;
    }

    printf("spaces = %d\n", spaces);
}
