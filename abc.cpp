#include<iostream>
using namespace std;

 int sum(int n){
    if(n==0){
        return 0;
    }

    int rem=n%10;
    int que=n/10;
    
    return (rem+sum(que));
 }

 struct abc
 {
   /* data */
   int a;
   char b;
   int c;
   double d;
 };
 
 int func(int a[10]){
    // try to make function pointer
    int (*p)(int a[10]);
    return p(a);
 }
 

 int main(){
    int n=16;
    // cout<<"Sum of numbers "<<sum(n);
//    int *i=&n;
//    int **i=&i;

//    char *p[10];
//    cout<<(sizeof(p));
//   int a[10]={1,2,3,4,5,6,7,8,9,10};
//    cout<<func(a);
   int b=3;
   // int c=++b + b++ +--b;
   // cout<<c<<endl;

   // char c=-1;
   // cout<<"Value of c is: "<<c;
   // int a[10]={1,2,3};
//    cout<<a[3];

//   float f=0.01;
//   if(f==0.01){
//       cout<<"Equal"<<endl;
//   } else {
//       cout<<"Not Equal"<<endl;
//   }
   
//  char *c;
//  cout<<sizeof(c);
//   cout<<sizeof(*c);
// int x=0,y=0,z=1;
//  if(x++ || y++ &&z++){
//    cout<<x;
//       cout<<y;
//    cout<<z;

//  }
  cout<<sizeof(abc);

}