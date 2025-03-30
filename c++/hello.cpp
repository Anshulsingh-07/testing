// # include <iostream>
// using namespace std;
// int main(){
//     cout<<"jai shree ram" << "\n"; // this is more faster than "\n"
//     cout<<"hello world\n";
//     cout<<"anshul" << "\n" << "singh" <<"\n" ;
//     return 0;
// }

// # include <iostream>
// using namespace std;
// int main(){
//     int age = 18;
//     cout << age << endl;
//     return 0;
// }

// # include<iostream>
// using namespace std;
// int main(){
//     int age = 18;
//     float cg = 8.24;
//     char grade = 'A';
//     cout << age << endl;
//     cout << cg << endl;
//     cout << grade << endl;
//     return 0;
// }

// # include <iostream>
// using namespace std;
// int main(){
//     double a = 100.99;
//     int b = int(a);
//     cout << b << endl;
//     return 0;
// }

// # include <iostream>
// using namespace std;
// int main(){
//     int age;
//     cout << "enter your age is" << endl;
//     cin >> age;
//     cout << " your age is" << age << endl;
//     return 0;
// }

// # include <iostream>
// using namespace std;
// int main(){

// int a ,b;

// cout << "enter your first number taken from user:" << endl;
// cin >> a;
// cout << "enter your second number taken from user :" <<endl;
// cin >> b;


// int sum;
// sum = a+b;
// int multi = a*b;
// int subs = a-b;
// float div = (float)a/b;
// int rem = a%b;

// cout << " my sum is  " << sum  ;
// cout << "\n multiplication is " << multi;
// cout << "  \n substraction is " << subs;
// cout << "\n division is " << div;
// cout << "\n  reminder is  " << rem;
// return 0;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int b = a++;
//     cout << b<< endl;
//     cout << a << endl;
//     return 0;
// }

// find a number ius a positive or negative number 
// # include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout << "enter the numer a:" << endl;
//     cin >> a ;

//     if(a>= 0){
//         cout << "this is a positive number " << endl;
//     }
//     else{
//         cout << " this is  a negative number " << endl;
//     }
//     return 0;

        
//     }


// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter a number " << endl;
//     cin >> n;

//     if(n%2 == 0) {
//         cout << "this is a even number " <<endl;
//     }
//         else{
//             cout << " this is odd number" << endl;
//                     }
//     return 0;


//     }



// # include <iostream>
// using namespace std;
// int main(){
//     int age ;
//     cout << "enter age "<< endl;
//     cin >> age;
//     if (age >= 18){
//         cout<< "you can drive " << endl;
//     }
//     else{
//         cout << "you can't drive" << endl;

//     }
// return 0;

// }


// # include <iostream>
// using namespace std;
// int main (){
//     float cgpa;
//     cout << " enter your cgpa" << endl;
//     cin >> cgpa;

//     if(cgpa >= 9.0){
//         cout << "you got grade AA" << endl;
//     }
//         else if(8.0<=cgpa < 9.0){
//             cout << "you got grade AB" << endl;
//         }
//         else if (7.0 <= cgpa <8.0 ){
//             cout << "you got grade BB" << endl;

//         }
//         return 0;
//     }



// find that any character is upper case or lower case

// # include <iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout <<" enter your character" << endl;
//     cin >> ch;
//     if(ch >= 'a'  &&  ch <= 'z'){
//         cout << " this is a lower case character" << endl;
//     }
//     else if(ch >= 'A' &&  ch <= 'Z'){
//         cout << " this is a upper case character" << endl;
//     }
//     else{
//         cout << "this is not a alphabet character" << endl;

//     }
//     return 0;
// }


// loop in programming

// print number from 1 to 5

// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter your number " << endl;
//     cin >> n;
//     int a = 0;
//      while(a<=n){
//         cout << a << endl;
//         a++;
//      }
//      return 0;
// }
    


// # include <iostream>
// using namespace std;
// int main(){
    

    // find the sum of the number from 1 to n

    // # include <iostream>
    // using namespace std;

    // int main(){
    //     int n;
    //     cout << "enter the number taking from use" << endl;
    //     cin>> n;
    //     int sum = 0;
    //     for(int i =0 ; i<=n;i++){
    //         sum = sum+i;
    //     }
    //     cout << sum <<endl;
    //     return 0;
    // }

    // find the sum of  all odd number

    // # include <iostream>
    // using namespace std;

    // int main(){
    //     int n;
    //     cout << "enter a number taken from the user" << endl;
    //     cin >> n;
        
    //     int count = 0;
    //     for(int i = 1 ; i<=n;i = i+2){
    //         count = count+i;
            
        
    //     }
    //             cout << count << endl;


    //     return 0;
    // }
        
        

// check a number is a prime number or not 

// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter the number taking from user  " << endl;
//     cin >> n;
//     if (n%2 != 0 && n % 3 != 0){
//         cout << " this is a prime number " << endl;
//     }
//     else{
//         cout << "this number is not prime number " << endl;
//     }
//     return 0;
// }

        

        // nested loop
        // print the pattern of the given character

// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << " enter the number taken from user " << endl;
//     cin >> n;
//     for (int i = 1; i<= n ; i++){
//         for(int j = 1; j<=100;j++){
//         cout << '*';
//         }

//     }
// return 0;
// }


# include <iostream>
using namespace std;
int main(){
    int m;
    
    for(int i =1;i<=m;i++){
        
        for (int j =1;j<=10;j++){

        cout<<'*';
        }
    }
    
    return 0;
}

