#include<iostream>

using namespace std;
int main(){
    int integerType;
    float floatType;
    double doubleType;
    char charType;
    string stringType;

    printf("Size of char type: %zu bites \n", sizeof(charType));
    printf("Size of int type: %zu bites \n", sizeof(integerType));
    printf("Size of double type: %zu bites \n", sizeof(doubleType));
    printf("Size of fload type: %zu bites \n", sizeof(floatType));
    printf("Size of string type: %zu bites \n", sizeof(stringType));
}
