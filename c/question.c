// question no 1

// # include <stdio.h>
// int  main(){
//     int x ;
//     printf(" the basic salary of ramesh : ",x);
//     scanf("%d",&x);
//     int dearness_allowance = 4*x/10;
//     int rent =  2*x/10;
//     int gross_salary  = 4*x/10;

//     printf("his gross salary is %d", gross_salary);
// return 0;
// }

// question 2;

// # include <stdio.h>
// int main(){
//     int x ;
//     printf(" \" the distance between two cities is \" : ",x);
//     scanf("%d",&x);
//     int distance_meter = x*1000;
//     float distance_feet = x*3000;
//     float distance_inches = x*3000*12.0;
//     float distance_centimeter = x*100000;

//     printf("distance im meter , feet , inches , centimeter iss \n %d \n %f \n %f\n %f\n",distance_meter,distance_feet,distance_inches,distance_centimeter);
//     return 0;
// }


// question no 3;
// # include <stdio.h>
// int main(){
//     int phy,chem,math,hindi,english ;
//     printf(" marks obtained in each subject by student is :" );
//     scanf("%d %d %d %d %d", &phy, &chem, &math, &hindi, &english);

//     int aggregate_marks = (phy+chem+math+hindi+english);
//     int percentage_marks = (phy+chem+math+hindi+english)/5;

//     printf("the aggregated marks is %d \n",aggregate_marks);
//     printf("the percentage marks IS%d : ", percentage_marks);
//     return 0;
// }

// question 4

// #include <stdio.h>
// int main(){
//     int temp;
//     printf("enter the temperature  of a city : ",temp);
//     scanf("%d",&temp);

//     float temp_celsius = (temp-32)*5/9.0;
//     printf(" the temperature of city in celsius %f" ,temp_celsius);
//     return 0;
// }

// q 4
// # include <stdio.h>
// int main(){ 
//     int l,b,r;

//     printf("enter the length and breath of rectangle is \n: ");
//     scanf("%d %d",&l, &b);
//     printf("enter the radius of circle is \n: ");
//     scanf("%d",&r);
//     float perimeter = (l+b)*2;
//     float area1 = l*b;
//     float circumference = 2*3.14*r;
//     float area = 3.14*r*r;
//     printf("\naria and perimeter of the rectangle is : \n%f \n%f ",area1,perimeter);
//     printf("\naria and circumference of the circle is :\n%f \n%f ",area,circumference);
//     return 0 ;
// }


// question 6???

// # include <stdio.h>
// int main(){
//     int l,b,n;
//     printf("the size of A0 paper is \n is l*b :  ");
//     scanf("%d %d",&l,&b);
//     printf("size is : %d %c %d\n",l,'*',b);

//     return 0;
// }

// exercise 2 question number 

// sum of the digit

// # include <stdio.h>
// int main(){
//     int n1;
//     printf("enter a 5 digit number taken from user");
//     scanf("%d",&n1);

//     int r1 = n1%10;
//     int n2 = n1/10;
//     int r2 = n2%10;
//     int n3 = n2/10;
//     int r3 = n3%10;
//     int n4 = n3/10;
//     int r4 = n4%10;
//     int n5 = n4/10;
//     int digit_sum = r1+r2+r3+r4+n5;
//     printf("sum of the digit is %d \n",digit_sum);
//     return 0;
// }


// write the program to reverse te number 

// # include <stdio.h>
// int main(){
//     int n1;
//     printf("enter a 5 digit number taken from user ");
//     scanf("%d",&n1);
//     int r1 = n1%10;
//     int n2 = n1/10;
//     int r2 = n2%10;
//     int n3 = n2/10;
//     int r3 = n3%10;
//     int n4 = n3/10;
//     int r4 = n4%10;
//     int n5 = n4/10;

//     int new_number = r1*10000+r2*1000+r3*100+r4*10+n5*1;
//     printf("the 5 digit new number is %d\n",new_number);
//     return 0;
// }

// area of a triangle

// #include <stdio.h>
// # include <math.h>
// int main(){
//     int a,b,c;

//     printf("enter  the three side of the triangle is a,b,c :");
//     scanf("%d %d %d",&a,&b,&c);

//     float s = (a+b+c)/2.0;
//     float area = pow(s(s-a)(s-b)(s-c),0.5);
//     printf("area of the triangle is : %f",area);
//     return 0;
// }


// convert cartesian into the polar

// # include <stdio.h>
// # include <math.h>
// int main(){
//     int x,y;
//     printf("enter the cartesian coordinate : ");
//     scanf("%d %d",&x,&y);
    
//     printf("enter the coordinate form %d %d\n",x,y);

//     float r = pow(((float)x*x+y*y),0.5);
//     float angle = atan(y/x);
//     printf("the polar coordinate is %f %f",r,angle);
//     return 0;
// }

// write a program to find out the distance between two point
// #  include <stdio.h>
// # include <math.h>

// int main(){
//     int x,y;
//     int a,b;
//     printf("enter the longitude coordinate : ");

//     scanf("%d %d",&x,&y);

//     printf("enter thr latitude coordinate :");
//     scanf("%d %d",&a,&b);

//     float distance  = 3963*acos(sin(a)*sin(b)+cos(a)*cos(b)*cos(y-x));
//     printf("the distance between those two point is  %f \n ",distance);
//     return 0;
// }


// wind chill factor 
// # include <stdio.h>
// # include <math.h>

// int main(){
//     int v,t;
//     printf("enter the temp and the velocity of the wind :");
//     scanf("%d %d",&t,&v);

//     float wct = 35.74+0.6125*t+(0.4275*t-35075)*pow(v,0.16);
//     printf("the wind chill temperature is %f",wct);
//     return 0;
// }

// trigonometric ratio ????
// # include <stdio.h>
// #include <math.h>
// int main(){
//     int x;
//     printf("enter the angle in degree :");
//     scanf("%d",x);

//     float s  = asin(x);
//     float c = acos(x);
//     float t = atan(x);

//     printf("the trigonometric ratio are %f %f %f",s,c,t);
//     return 0;
//


// interchange the location of the two number

// # include <stdio.h>
// int main(){
//     int c ,d ,x;
//     printf("enter the first number :");
//     scanf("%d",&c);
//     printf("enter the second number :");
//     scanf("%d",&d);

//     x = c;
//     c = d;
//     d = x;
//     printf("the fist and the second number are %d %d \n",c,d);
//     return 0;
// }

// find out the gross salary of an employ

// # include <stdio.h>
// int main(){
//     int bs , hra , da  ;
//     float gs;
//     printf("enter the basic salary :");
//     scanf("%d",&bs);

//     if(bs <= 1500){
//         hra = bs*0.1;
//         da = bs*0.9;
//         gs = bs+hra+da;
//         printf("the gross salary is %f\t",gs);
//     }
//     else{
//         hra = 500;
//         da = bs*0.98;
//         gs = bs+hra+da;
//         printf("the gross salary is %f\t",gs);
//     }
//     return 0;

//     }



// find  out the loss and the profit 

// # include <stdio.h>
// int main(){
//     float cp , sp;
//     printf("enter the cost price :" );
//     scanf("%f",&cp);
//     printf("enter the selling price :" );
//     scanf("%f",&sp);
    
//     if (sp>cp){
//         printf("he gain the profit %f\t", sp -cp);
//     }
//     else{
//         printf("he is in the loss that is %f\t,cp-sp");
        

//     }return 0;


//find a number is even or odd
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     if(n%2 == 0){
//         printf("this is a even number ");
//     }
//     else{
//         printf("this is not a even number this is a odd number ");
//     }
//     return 0;

//     }

// find that a year is a leap year or not

// # include <stdio.h>
// int main(){
//     int year;
//     printf("enter the year :");
//     scanf("%d",&year);

//     if (year%4 == 0 && year %100 !=0 || year%400 == 0){
//         printf("it is a leap year %d",year);

//     }
//     else{
//         printf("it is not a leap year");
        
//     }
//     return 0;


// }



// # include <stdio.h>
// int main(){
//     int age1 ,age2, age3;
//     printf("enter the age of the persoN ram shyam and anshul ");
//     scanf("%d %d %d",&age1,&age2,&age3);
    
//     if(age1<age2 && age1<age3){
//         printf("ram is the youngest person");
//     }
//     else if(age2<age3 && age2<age1){
//         printf("shyam is youngest person");
//     }
//     else{
//         printf("anshul is the youngest person");
//     }
//     return 0;
// }

// find that any tringle is valid or not

// # include <stdio.h>
// int main(){
//     int angle;
//     int a,b,c;
//     printf("enter the three angle of the triangle is :");
//     scanf("%d %d %d",&a,&b,&c);

//     if(a+b+c == 180){
//         printf("this is a valid triangle");
//     }
//     else {
//         printf("it is not a valid triangle ");
//     }
//     return 0;
// }

// find the absolute value of the given number 
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number taken from the user :");
//     scanf("%d",&n);

//     if(n<0){
//         printf("the absolute value of the number is %d\n",n*-1);
//     }
//     else{
//         printf("the absolute value of the number is %d\t",n);

//     }
//     return 0;

// }

// find that the area of the rectangle is greater than perimeter or not

// # include <stdio.h>
// int main(){
//     int l,b;

//     printf("enter the length of the retangle is :");
//     scanf("%d",&l);
//     printf("enter the breath of the retangle is :");
//     scanf("%d",&b);

//     int area = l*b;
//     int perimeter = 2*(l+b);
//     if(area>perimeter){
//         printf("area is greater than perimeter");
//     }
//     else{
//         printf("perimeter is greater than area");
//     }
//     return 0;
// }

// find that all point lie on the same line or not
// # include <stdio.h>
// int main(){
//     int x1,x2,x3,y1,y2,y3;
//     printf("enter the points");
//     scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);

//     int slope1 = (y3-y2)/(x2-x1);
//     int slope2 = (y3-y1)/(x3-x1);
//     if(slope1 == slope2){
//         printf("all point lie on the same line");

//     }
//     return 0;
// }


// check whether the point lie on the circle or outside the circle if radius is r

// # include <stdio.h>
// #include <math.h>
// int main(){
//     int a,b,r;
//     int x,y;
//     printf("enter the center of the circle (a,b): ");
//     scanf("%d %d",&a,&b);
//     printf("enter the radius of circle : \t");
//     scanf("%d",&r);
//     printf("center is (%d,%d)\t",a,b);
//     printf("enter the checking point (x,y ): ");
//     scanf("%d %d",&x,&y);


//     int p = pow((x-a),2)+pow((y-b),2)-pow(r,2);
//     if(p<0){
//         printf("this point lies inside the circle");
//     }
//     else if(p == 0){
//         printf("this point lies on the circle");
//     }
//     else{
//         printf("lies outside the circle");
//     }
//     return 0;
// }

// find out that point lies on the x axis or the y axis or origin

// # include <stdio.h>
// int main(){
//     int x,y;
//     printf("enter the point (x,y) :");
//     scanf("%d %d",&x,&y);
//     printf("the point are (%d,%d)\t",x,y);

//     if(x == 0 && y == 0){
//         printf("point lies on the origin");
//     }
//     else if(x== 0){
//         printf("point lies on the y axis");
//     }
//     else if (y == 0){
//         printf("point lies on the x axis");

//     }
//     else{
//         printf("point lies other than the axis and origin");

//     }
//     return 0;
//     }


// percentage of the student

// # include <stdio.h>
// # include <math.h>

// int main(){
//     int m1,m2,m3,m4,m5;
//     float per;
//     printf("enter the marks of the student : ");
//     scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

//     int total_marks = m1+m2+m3+m4+m5;
//     per = (total_marks)/5.0;
//     printf("percentage of the student : %f\n",per);

//     if(per>=90){
//         printf("you are the good student");
//     }
//     else{
//         printf("you are not a good student");
//     }
//     return 0;



// }


// print the salary of a worker

// # include <stdio.h>
// int main(){
//     int salary;
//     int sy;
//     char sex,education;
//     char male,female;
//     char ps,g;
//     printf("enter the sex of the employ : ");
//     scanf("%s",&sex);
//     printf("enter the education: ");
//     scanf("%s",&education);
//     printf("enter the year of service :");
//     scanf("%d",&sy);
    
//     if(sex == male){
//         if(sy >= 10 && education == ps){
//             salary = 15000;
//         }
//         else if (sy>=10 && education == g){
//             salary = 10000;
//         }
//         else if(sy <10 && education == ps){
//             salary = 10000;
//         }
//         else if(sy <10 && education == g){
//             salary = 7000;
//         }
            
//     }
    
// if(sex == female){
//     if(sy >= 10 && education == ps){
//         salary = 12000;
//     }
//     else if (sy>=10 && education == g){
//         salary = 9000;
//     }
//     else if(sy <10 && education == ps){
//             salary = 10000;
//         }
//     else if(sy <10 && education == g){
//         salary = 6000;
//     }
            
//     }
        
//     printf("your salary is %d \n",salary);
//     return 0;

//     }
    



// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);

//     for(int i=1;i<=10;i++){
//         printf("%d*%d = %d\n",n,i,n*i);
//     }
//     return 0;
// }

// print the interest of three person using loop

// # include <stdio.h>
// int main(){
//     int p,n,x;
//     float si,r;
//     x=0;
//     x= x+1;
//     while(x<=3){
//         printf("enter the principal amount : ");
//         scanf("%d",&p);
//         printf("enter rate : ");
//         scanf("%f",&r);
//         printf("enter  number of year : ");
//         scanf("%d",&n);
//         printf(" your interest of %d person is %f\n",x,p*n*r/100);
//             }
//             return 0;
// }



// # include <stdio.h>
// int main(){
//     int n;
//     int i;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     while(i<=10){
//         printf("%d * %d = %d\n",n,i,n*i);
//         i++;
//     }
//     return 0;
// }

// loop  

// q1

// # include <stdio.h>
// int main(){
//     int h = 0;

//     while(h<=40){
//         printf("your overtime payment of %d hour  is %d\n" ,h,12*h);
//         h++;
//     }
//     return 0;
// }

// to find out the factorial of any number 

// # include <stdio.h>
// int main(){
//     int n,x;
//     x=n;
//     printf("enter the number taken from the user:");
//     scanf("%d",&n);
//     int fact = 1;
//     while(n>1){
//         fact = fact*n;
//         n--;
//     }
//     printf("factorial of number %d is = %d\n",n,fact);
// return 0;
// }

// print the ascii vale from 0 to 225

// # include <stdio.h>
// int main(){
//     int i;
//     for(i = 0;i<=255;i++){
//         printf("%c\n",i);
//     }
//     return 0;
// }


// print out the all armstrong number from 0 to 255

// # include <stdio.h>
// int main(){
//     int n =1;
    
//     int d1,d2,d3;
//     d1 = n%10;
//     d2 = (n/10)%10;
//     d3 = (n/100)%10;

//     while(d1*d1*d1 + d2*d2*d2 + d3*d3*d3 == n && n<=500){
//         printf("%d\n",n);
//         n++;
        
//     }
//     return 0;
// }


// enter the number till the user want

// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n :");
//     scanf("%d",&n);

    
//     int i =1;
//     while(i<n){
//         printf("%d\n",i);
//         i = i
//         i++;
        
//     }
//     count++;
//     count = count+i;
//     printf("%d\n",count);
// }
    


// # include <stdio.h>
// int main(){
//     int n = 15%-10;
//     int m = -15%10;

//     printf("%d\n",n);
//     printf("%d\n",m);
// return 0;
// }


// # include <stdio.h>
// int main(){
//     int a,b;
//     printf("enter a :");
//     scanf("%d",&a);
//     printf("enter b :");
//     scanf("%d",&b);
//     if(a<b){
//         for(int i=a+1;i<b;i++){
//                 if(i%15 == 0){
//                     printf("%d\n",i);
//                 }
//         }
//     }
//     else{
//         for(int i=b+1;i<=a;i++){
//             if(i%15==0){
//                 printf("%d\n",i);
//             }
//         }
//     }
//     return 0;
// }

// # include <stdio.h>
// int main(){
//     int y1,y2;
//     printf("enter the year 1 :");
//     scanf("%d",&y1);
//     printf("enter the year 2 :");
//     scanf("%d",&y2);
//     if(y1>=1000 && y2>y1){
//         for(int i = y1;i<=y2;i++){
//             if(i%4 == 0 || i%400 == 0 && i%100!=0){
//                 printf("%d\n",i);
//             }
//         }
//     }
//     else{
//         printf("it is not valid");
//     }
//     return 0;
// }

// # include <stdio.h>
// # include <math.h>
// int main(){
//     int a,b;
//     printf("enter the number a");
//     scanf("%d",&a);
//     printf("enter the number b");
//     scanf("%d",&b);

//     int c = pow(a,b);
//     printf("%d\n",c);
//     return 0;
// }

// # include <stdio.h>
// int main(){
//     for(int i =0;i<=255;i++){
//         printf("%c\t",i);
//     }
//     return 0;
// }


// #include <stdio.h>
// # include <math.h>
// int main(){
//     int n;
//     printf("enter three  digit number n :");
//     scanf("%d",&n);

//     int d1 = n%10;
//     int d2 = (n/10)%10;
//     int d3 = n/100;

//     for(int i = 1;i<=n ;i++){
//         int d1 = n%10;
//         int d2 = (n/10)%10;
//         int d3 = n/100;
//         if((pow(d1,3) + pow(d2,3) + pow(d3,3) )== i){
//             printf("%d\n",i);
//         }
    

//     }
//     return 0;
// }


// print out the all armstrong number between 0 to 255


// # include <stdio.h>
// # include <math.h>
// int main(){
//     for(int i=0;i<=255;i++){
//         int d1 = i%10;
//         int d2 = (i/10)%10;
//         int d3 = i/100;
//         if((pow(d1,3) + pow(d2,3) + pow(d3,3) )== i){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }

// sum of the number enter by user

// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int sum = 0;
//     for(int i =1;i<=n;i++){
//         printf("%d\n",i);
//         sum = sum+i;
//     }
//     printf(" sum of the above given number is :m%d",sum);
//     return 0;
// }

// find out the octal value of any decimal number 

// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the decimal number :");
//     scanf("%d",&n);
//     int octal = 0;
//     int i = 1;
//     while (n>0){
//         int rem = n%8;
//         octal = octal + rem*i;
//         n = n/8;
//         i = i*10;
//     }
//     printf("%d",octal);
// }/


// find the set of the given number 

// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number n :");
//     scanf("%d",&n);

//     int i = 1;
//     while(i<n){
//         printf("{%d\t}",i);
//         i++;
//     }
//     return 0;
// }


// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);

//     for(int i =1;i<=n;i++){
//         for(int j = 1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k =1;k<=i;k++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);

//     for(int i =1;i<=n;i++){
//         for(int k =1;k<=i;k++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n :");
//     scanf("%d",&n);

//     for(int i =1 ;i<=n;i++){
//         for(int space = 2*n-i;space>=i;space--){
//             printf(" ");
//         }
//         for(int j = 1;j<=i;j++){
//             printf(" *");

//         }
//         printf("\n");

//     }
//         return 0;
//     }

// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n :");
//     scanf("%d",&n);

//     for (int i=1;i<=n;i++){
//         for(int space = 2*n-i;space>=i;space++){
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
    
//             if(i== 5){
//                 break;
//                 printf(" ** ");
            
//             continue ;
//         }
//             printf("\n");
//     }
//     return 0;
// }
        

// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n :");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         for(int j=2*n-i;j>=i;j--){
//             printf(" ");
//         }
//         for(int k = 1;k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// average marks of the 30 students in a test

// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number of the student in the class: ");
//     scanf("%d",&n);

//     int class[n];

//     for(int i=0;i<n;i++){
//         printf("enter the marks of the student having roll number %d is = ",i);
//         scanf("%d",&class[i]);
//     }

//     int sum =0;
//     for (int i =0;i<n;i++){
//         sum = sum+class[i];
        
//     }

//     float avg = sum/n;
//     printf("\n\naverage of the marks of %d student in the classs is = %f ",n,avg);
//     return 0;
// }

// linear search of the array



# include <stdio.h>
int main(){
    int l,b,m,n;
    printf("enter the length of the arr : ");
    scanf("%d",&l);
    printf("enter the width of the arr : ");
    scanf("%d",&b);

    int a[l][b];

    for(int i = 0;i<l;i++){
        for(int j=0;j<b;j++){
            printf("enter the integer which you want to store at index (%d,%d) is = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
        
        printf("\n arr is\n\n ");
        printf("__________________________________________________\n");
        for(int i =0;i<l;i++){
            for(int j=0;j<b;j++){
                
                printf("\t%d",a[i][j]);
                printf(" | ");
            }
            printf("\n");
        }
        printf("____________________________________________________\n\n");
        int found = 0;
        int x,count =0;
        printf("enter the number which you want to search : ");
        scanf("%d",&x);
        for(int i=0;i<l;i++){
            for(int j=0;j<b;j++){
                if(a[i][j]== x){
                    m = i;
                    n = j;
                    found =1;
                    count++;
                    continue;
                }
            }
        }
        if(found == 1){
            printf("the integer got found at the index (%d,%d) ",m,n);
        }
        else{
            printf("not found");
        }
        return 0;


    }


//largest integer found in tje matrix of 5*5



// # include <stdio.h>
// int main(){
//     int l,b,largest;
//     printf("enter the length of the arr : ");
//     scanf("%d",&l);
//     printf("enter the width of the arr : ");
//     scanf("%d",&b);

//     int a[l][b];

//     for(int i = 0;i<l;i++){
//         for(int j=0;j<b;j++){
//             printf("enter the integer which you want to store at index (%d,%d) is = ",i,j);
//             scanf("%d",&a[i][j]);
//         }
   // }



// # include <stdio.h>
// int main(){
//     char name[100];
//     int marks;
//     int m,n;
//     printf("enter the number of the student in the class  : ");
//     scanf("%d",&m);
//     printf("enter the row you want to use :  ");
//     scanf("%d",&n);

//     for(int i=0;i<m;i++){
//         for(int j = 0;j<n;j++){
//             printf("\n the name of the student");
//             scanf("%s",&name[100]);
//             printf("enter the marks of the student");
//             scanf("%d",&marks);
//         }
//     }
//         for(int i =0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 printf("\t%c",name[100]);
//             }
            
//                 printf("\n\t %d",marks);
//         }
//         return 0;
//     }



































































