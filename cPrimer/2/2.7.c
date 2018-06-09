#include<stdio.h>

void print_smile(char* ha){
    printf("%s",ha);
}
int main(){
    char la[]="smile!";
    for(int i=3;i>0;i--){
        for(int j=i;j>0;j--){
            // printf("%s",la);
            print_smile(la);
        }
        printf("\n");
    }
    return 0;
}