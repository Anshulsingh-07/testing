
//exp 1
  // addition of three number 
// # include <stdio.h>
// #include <math.h>

// int sum(int a,int b,int c);
// int main(){
//     sum(10,20,30);
//     printf("\n");
//     return 0;
// }

// int sum(int a,int b,int c){
//     int sum = a+b+c ;
//     printf("%d",sum);
// }


//exp 2

// # include <stdio.h>
// # include <math.h>

// int main(){
//     int principal_amount , rate ,year;
//     printf("enter the principal_amount is :",principal_amount);
//     scanf("%d",&principal_amount);
//     printf("enter the rate is :",rate);
//     scanf("%d",&rate);
//     printf("enter the principal_amount is :",year);
//     scanf("%d",&year);

//     int interest = (principal_amount*rate*year)/100 ;
//     printf("your interest is %d\n:",interest);
//     return 0;
// }


// perform arithmetic operation of two number 

// # include <stdio.h>
// # include <math.h>

// int main(){
//     int a,b;
//     printf("enter the number a is : ",a);
//     scanf("%d",&a);
//     printf("enter the number b is :",b);
//     scanf("%d",&b);

//     int sum = a+b;
//     int subs  = a-b;
//     int product = a*b;
//     float div = a/b;

//     printf("ans is :%d\n",sum);
//     printf("ans is :%d\n",subs);
//     printf("ans is :%d\n",product);
//     printf("ans is :%f\n",div);

// return 0;
// }


// avr of two number ;

// # include <stdio.h>
// int main(){
//     int a,b;

//     printf("enter the number a is :",a);
//     scanf("%d",&a);

//     printf("enter the number a is :",b);
//     scanf("%d",&b);

//     int avr = (a+b)/2;
//     printf("avr is %d",avr);
//     return 0;
// }

// check whether a number is positive or negative

// # include <stdio.h>
// int main(){int n;
//   printf("enter the number taking from user",n);
//   scanf("%d",&n);
//   if(n > 0){
//     printf("this number is positive");
//     printf("\n");
//   }
//   else if(n<0){
//     printf("this number is negative");
//   }
//   else{
//     printf("this is not a number if is a number it is zero");
//   }
//   return 0;
//   }

//check a number is a even or odd

// #include <stdio.h>
// int main(){
//   int a;
//   printf("enter the number taken from user",a);
//   scanf("%d",&a);
//   if(a%2 == 0){
//     printf("this number is even");
//   }
// else if(a%2 !=0){
//   printf("this is not a even number either it is odd or prime ");
// }
// return 0;
// }




// to find out the largest number 

// # include <stdio.h>
// int main(){
//   int a,b,c;
//   printf("enter a number taken from user :",a);
//   scanf("%d",&a);
//   printf("enter a number taken from user :",b);
//   scanf("%d",&b);
//   printf("enter a number taken from user :",c);
//   scanf("%d",&c);

//   if(a>b && a>c){
//     printf("a is the largest number ");
//   }
//   else if(b>a && b>c){
//     printf("b is the largest number ");
//   }
//   else{
//     printf("c is the largest number ");
//   }
//   return 0;
// }0


// check whether a year is leap year or not

// # include <stdio.h>
// int main(){
//   int year;
//   printf("enter the year taken from user :",year);
//   scanf("%d",&year);
//   if(year%4 ==0){
//     printf("it is a leap year");
//   }
//   else{
//     printf("it is not a leap year");
//   }
//   return 0;
// }

// find the factorial of the given number 

// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter a number taken from user :",n);
//     scanf("%d",&n);
//     int fact = 1;
//     for(int i =2;i<=n;i=i*(i-1)){
//         fact = fact*i;
//         printf("%d\n",fact);
//     }
//       return 0;
      
//     }

// print multiplication table 

// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter a number taken from user:",n);
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d\n",n*i);
//     } 
//     return 0;
// }

// print a number is prime or not 

// # include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number :",n);
//     scanf("%d",&n);
//     if(n%2 != 0 && (n-1)%2!=0 ){
//       printf("it is a prime number");
//     }
//     else{
//       printf("it is not a prime number");
//     }
    
//     return 0;
// }

// lcm of two number 

// # include <stdio.h>
// # include <math.h>

// int main(){
//   int a,b;
//   printf("enter the number taken from user:",a);
//   scanf("%d",&a);
//   printf("enter the number taken from user:",b);
//   scanf("%d",&b);
  
//   int max = (a>b)?a:b;
//   while(1){
//     if(max%a ==0 && max%b ==0){
//       printf("lcm of the given number is %d",max);
//       break;
//     }
//     max++;
//   }
//   return 0;
// }

// print the fibonacci series
// # include <stdio.h>
// int main(){
//   int n;
//   printf("enter the number taken from user:",n);
//   scanf("%d",&n);
//   int a=0,b=1;
//   for(int i=1;i<=n;i++){
//     printf("%d\n",a);
//     int c = a+b;
//     a = b;
//     b = c;
//   }
//   return 0;
// }
    


//print the pattern of the given char *
// # include <stdio.h>
// int main(){
//   int n;
//   printf("enter the number taken from user",n);
//   scanf("%d",&n);
//   for(int i =1;i<= n;i++){
//         printf("\t");

//     for(int j = 1;j<=i;j++){
//       printf("*");
      
//     }
//     printf("\n");
    
    

//   }
//   return 0;

// }


// sum of n natural number 

// # include <stdio.h>
// int main(){
//   int n;
//   printf("enter the number n taken from user :",n);
//   scanf("%d",&n);
//   int sum = 0;
//   for (int i =1;i<=n;i++){
//     sum = sum+i;
//   }
//   printf("%d",sum);
//   return sum;
// }

// is a number is prime or not

// # include <stdio.h>
// int main(){
//   int n;
//   printf("enter a number taken from user :",n);
//   scanf("%d",&n);
  
//   if(n%n ==0 && n%1 ==0 && n%2 !=0 && n%3 !=0){
//     printf("this is a prime number");
//   }
//   else{
//     printf("this is not a prime number ");
//   }
//   return 0;
// }


# include <stdio.h>
int main(){
  int m,n;
  printf("enter number of the row in the matrix :");
  scanf("%d",&m);
  printf("enter number of the column in the matrix :");
  scanf("%d",&n);
  int matrix[m][n];
  for(int i = 0;i<m;i++){
    for(int j = 0;j<n;j++){
      printf("enter the integer at the index (%d,%d) is = ",i,j);
      scanf("%d",&matrix[i][j]);
    }
  }

  printf("\n\n\t\t\t matrix is\n ");
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("\t %d",matrix[i][j]);
    
    }
    printf("\n");
  }
  printf("transpose");
   for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
      printf("\t %d",matrix[i][j]);
    
    }
    printf("\n");
  }
  

  // printf("\t\t\t the transpose of the matrix is \n");
  // for(int i =0;i<m;i++){
  //   for(int j =0;j<n;j++){
  //     int temp = matrix[i][j];
  //     matrix[i][j] = matrix[j][i];
  //     printf("\t%d",matrix[i][j]);
  //   }
  //   printf("\n");
  // }

  return 0;
}


  

shdugd
  
