// sum of the digit of any number 


// # include <stdio.h>
// int sum_digit(int n, int m);
    
//     int main(){
//         sum_digit(1234,10);
//         return 0;
//     }


/// find the fibonacci series 

# include <stdio.h>
int fibonacci_num(int n);

int main(){
    fibonacci_num(10);
    return 0;


}
int fibonacci_num(int n){
    if (n == 0){
        return 0;}
    if (n == 1){
        return 1;
    }

    int fibN1 = fibonacci_num(n-1);
    int fibN2 = fibonacci_num(n-2);
    int fibN = fibN1 + fibN2;
    return fibN;
}







