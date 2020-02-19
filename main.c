#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void count(char* s,int d[]);       /*count the alphabet totalnumber*/
int max(int d[]);                  /*most time appear*/
int main()
{
  int data[26]={0};
  char str[1000];
  int value;
  int i,j=0;
  scanf("%d",&value);
  while(i<=value)
  {
    gets(str);
    count(str,data);
    i++;
  }
  j=max(data);
  while(j!=0)
  {
   for(i=0;i<=25;i++)
   {
    if(data[i]==j)
    {
      printf("%c ",65+i);
      printf("%d\n",data[i]);
    }
   }
    j--;
  }
  
  
  

return 0;
}
void count(char* s,int d[])
{ 
   int init=0;
   while(s[init]!='\0')
   {
     
	  if(s[init]>=65&&s[init]<=90)
	  {
	    d[s[init]-65]++;
	  }
	  else if(s[init]>=97&&s[init]<=122)
	  {
	    d[s[init]-97]++;
	  }
	  init++;
   }
 }
int max(int d[])
{
  int temp,i=0;
  while(i<26)
  {
    if(temp<d[i])
    {
      temp=d[i];
    }
    i++;
  }
  return temp; 
}
  

