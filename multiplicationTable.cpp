#include<iostream>

using namespace std;
int main(){
    int n, i;

    printf("Enter positive integer \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("%d * %d = %d \n", n, i, i*n);
    }
    return 0;
}
