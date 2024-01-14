#include<iostream>

using namespace std;

long int findFactorial(int n){
    if(n>=1){
        return n*findFactorial(n-1);
    }else{
        return 1;
    }
}
int main(){
    int n;
    printf("Enter positive integer \n");
    scanf("%d", &n);
    printf("Facorial of %d = %ld", n, findFactorial(n));
}
