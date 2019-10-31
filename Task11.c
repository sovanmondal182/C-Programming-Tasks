#include<stdio.h>
#include<string.h>
#define SIZE 20
 
struct book
{
          char title[20];
          char author[20];
          char genre[20];
          
 
};
 
void output(struct book v[],int n);
 
void main()
{
          struct book b[SIZE];
 
          int num,i;
          printf("Enter the Numbers of Books: ");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)
 
          {
 
                   printf("\n\t=:Book %d Detail:=\n",i+1);
 
                   printf("\n\tEnter the Book title: ");
                   scanf("%s",b[i].title);
 
                   printf("\tEnter the Author of Book: ");
                   scanf("%s",b[i].author);
 
                   printf("\tEnter the Genre of Book: ");
                   scanf("%s",&b[i].genre);
 
                   
          }
 
          output(b,num);
 
}
 
void output(struct book v[],int n)
 
{
 
          int i;
 
          for(i=0;i<n;i++)
 
          {
 
                   printf("\n");
                   
				   printf("\n--------------------------------------------");
				    
                   printf("\nBook No.%d\n",i+1);
 
                   printf("\t\tBook %d Title is= %s \n",i+1,v[i].title);
 
                   printf("\t\tBook %d Author is= %s \n",i+1,v[i].author);
 
                   printf("\t\tBook %d Genre is= %s \n",i+1,v[i].genre);

                   printf("\n");
 
          }
 
}
