#include<stdio.h>
int leap_year(int age){
    int brith_year=2018-age;
    int count=0;
    for(int i=brith_year;i<2018;i++){
        if((i%4==0 && i%100!=0) || (i%400==0)){
            count++;
        }
    }
    return count;
}
int age_2_day(int age){
    int day;
    int count = leap_year(age);
    day=365*(age-count)+366*count;
    return day;
}
int main(){
    printf("%d\n",age_2_day(2));

    return 0;
}