#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="Hello";
    char b[20]="World";
    printf("%d\n",strlen(a));
    strcpy(b,a);
    printf("%s\n",b);
    strcat(a,b);
    printf("%s\n",a);
    printf("%d",strcmp(a,b));
    return 0;
}
