#include<stdio.h>
void two();
void one_three(){
    printf("one\n");
    two();
    printf("three\n");
}
int main(){
    printf("starting now:\n");
    one_three();
    printf("done!");
    return 0;
}
void two(){
    printf("two\n");
}