#include<stdio.h>
#include<string.h>
int main()
{ int i,d;
  d=0;
  char str1[50],str2[50];
  printf("enter the string\n");
  gets(str1);
  for(i=0;str1[i]!='\0';++i)
  { if(str1[i]!='a'&& str1[i]!='e'&&str1[i]!='i'&&
       str1[i]!='o'&&str1[i]!='u')
    {
       str2[d]=str1[i];
       ++d;
    }
  }
  str2[d]='\0';
  printf("%s",str2);
  return 0;
}
