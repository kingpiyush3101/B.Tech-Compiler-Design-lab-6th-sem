#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()  {
    char input[100],l[50],r[50],temp[10],tempprod[20],productions[25][50];
int i=0,j=0,flag=0,consumed=0;
printf("Enter the productions: ");
scanf("%1s->%s",l,r);
printf("%s",r);
while(sscanf(r+consumed,"%[^|]s",temp) == 1 && consumed <= strlen(r))  {
if(temp[0] == l[0])  {
flag = 1;
printf(productions[i++],"%s->%s%s'\0",l,temp+1,l);
        }
else
printf(productions[i++],"%s'->%s%s'\0",l,temp,l);
consumed += strlen(temp)+1;
    }
if(flag == 1)  {
printf(productions[i++],"%s->e\0",l);
printf("\nThe productions after eliminating Left Recursion are:\n");
for(j=0;j<i;j++)
printf("%s\n",productions[j]);
    }
else
printf("\nThe Given Grammar has no Left Recursion");
getch();
}

