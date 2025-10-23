//  Write a ‘C’ program to convert hours to minutes and seconds
#include<stdio.h>
int main(){
    int hr;
    printf("Enter time in hour: ");
    scanf("%d", &hr);

    printf("Time in minute is: %d\n", hr*60);
    printf("Time in second is: %d\n", hr*60*60);

    return 0;
}