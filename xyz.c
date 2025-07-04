#include <stdio.h>


int main(){

   int a;
   int b;
   int choice;
   for(int i=0;i<10;i++){
   printf("Enter Two numbers to perform operation \n");
   scanf("%d\t%d",&a,&b);
   printf("\n\n");
   printf("Select Type of operation you want to perform:- \n1.Addition\n2.Substaction\n3.Multiplication\n4.Division\n");
   scanf("%d",&choice);
  
     printf("\n");

    switch(choice){
      case 1:
         printf("Addition is:- %d",a+b);
         break;
      case 2:
         printf("Substraction is:- %d",a-b);
         break;   
      case 3:
         printf("Multiplication is:- %d",a*b);
         break;  
       case 4:
       if(b==0){
            printf("Cann't divide by zero");
           }
         printf("Division is:- %d",a/b);
           
         break;  
       default:
       printf("Wrong opeation choosen");   
    }
    printf("\n\n");
   }
 
   return 0;

}