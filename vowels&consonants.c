#include<stdio.h>
//#include<ctype.h>
int main()
{
    char a[12];
    int vow=0,con=0;
    printf("ENter the string : ");
    fgets(a,sizeof(a),stdin);
    
    for(int i=0;a[i]!='\0';i++)
    {
        if (a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            vow++;
        }
        else
        {
            con++;
        }
    }printf("%d vowels \n%dconstants ",vow,con);
   
}

