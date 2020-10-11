/* Author: ALOK KHULBAY.
Date:11/10/2020.
Program to automatacally print the bill of the customer using File operations.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *replace_word(const char *str, const char *oldword, const char *newword)
{
    char *resultstring;
    int i, count = 0;
    int oldwordlength = strlen(oldword);
    int newwordlength = strlen(newword);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;
            i = i + oldwordlength - 1;
        }
    }
    resultstring = (char *)malloc(i + count * (newwordlength - oldwordlength) + 1);
    i = 0;
    while (*str)
    {
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultstring[i], newword);
            i += newwordlength;
            str += oldwordlength;
        }
        else
        {
            resultstring[i] = *str;
            i++;
            str++;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr1 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr1 = fopen("genbill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill template was:%s\n", str);
    char *newstr;
    newstr = replace_word(str, "{{name}}", "ALOK");
    newstr = replace_word(newstr, "{{item}}", "table fan");
    newstr = replace_word(newstr, "{{outlet}}", "U-PROG Cop");
    printf("The acutal bill generated is:%s\n", newstr);
    printf("The generated bill has been written to the file genbill.txt\n");
    fprintf(ptr1, "%s", newstr);
    fclose(ptr);
    fclose(ptr1);
    return 0;
}