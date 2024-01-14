#include<iostream>

using namespace std;
int main(){
    int n, i;
    unsigned long long fac=1;
    printf("Enter positive integer \n");
    scanf("%d", &n);

    if(n<0){
        printf("Error! Factorial of a negative number doesn't exist.");
    }else{
        for(i=1; i<=n; i++){
            fac*=i;
        }
        printf("Factorial of %d = %llu", n, fac);
    }
}
