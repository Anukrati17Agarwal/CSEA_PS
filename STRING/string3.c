#include<stdio.h>
int length(char str[])
{
    int i=0;
    int l=0;
    while(str[i]!='\0')
    {
        i++;
        l++;
    }
    return l;
}
int main()
{
    char str[50];
    int l=0;
    printf("enter the string\n");
    scanf("%s",&str);
    int h=strlen(str)-1;
    while(h>l)
    {
        if(str[l++]!=str[h--])
        {
            printf("%s is not palindrome\n",str);
            return 0;
        }
    }
    printf("%s is a palindrome\n",str);
    return 0;
}