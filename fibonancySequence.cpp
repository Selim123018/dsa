#include<iostream>

using namespace std;
int main(){
    int i, n, t1, t2, nextTerm;
    t1=0;
    t2=1;
    nextTerm=t1+t2;
    printf("Enter no of terms \n");
    scanf("%d", &n);
    printf("%d, %d,", t1, t2);

    for(i=3; i<=n; i++){
        printf("%d,", nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
    return 0;
}
