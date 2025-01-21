#include<stdio.h>
int is_prime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1;
}

int main(){
    int arr[10],i,j,size,choices;
    int sum_even=0,sum_prime=0,sum_odd=0,mul_num=1;
    float div_result=1.0;
    printf("Enter the size of an array:");
    scanf("%d",&size);
     if (size > 10 || size <= 0) {
        printf("Invalid size! Please enter a number between 1 and 10.\n");
        return 1;
     }
     /*printf("Enter the elements of an arrays:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }*/
    do {
        // Reset values for each operation
        sum_even = sum_odd = sum_prime = 0;
        mul_num = 1;
        div_result = arr[0];
        printf("\nPress 1 for sum of odd and even number\nPress 2 for sum of prime numbers\nPress 3 for multipy numbers\nPress 4 for divide a numbers\nPress 5 for exit \n");
        scanf("%d",&choices);
        /*printf("Enter the elements of an arrays:");
        for(i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }*/
        switch (choices){
            case 1:
            printf("Enter the elements of an arrays:");
                for(i=0;i<size;i++){
                    scanf("%d",&arr[i]);
                }
                for(i=0;i<size;i++){
                    if(arr[i]%2==0){
                        sum_even +=arr[i];
                    }
                    else{
                        sum_odd +=arr[i];
                    }
                }
                printf("\nThe sum of even numbers = %d",sum_even);
                printf("\nThe sum of odd numbers = %d",sum_odd);
            break;
            case 2:
            printf("Enter the elements of an arrays:");
                for(i=0;i<size;i++){
                    scanf("%d",&arr[i]);
                }
                for (i = 0; i < size; i++) {
                    if (is_prime(arr[i])) {
                        sum_prime += arr[i];
                    }
                }
                printf("Sum of prime numbers: %d\n", sum_prime);
                break;
            case 3:
            printf("Enter the elements of an arrays:");
                for(i=0;i<size;i++){
                    scanf("%d",&arr[i]);
                }
                for(i=0;i<size;i++){
                    mul_num = mul_num * arr[i];
                }
                printf("The multiply of numbers of an arrays = %d",mul_num);
            break;
            case 4:
            printf("Enter the elements of an arrays:");
                    for(i=0;i<size;i++){
                    scanf("%d",&arr[i]);
                    }
                div_result = arr[0];
                for (i = 1; i < size; i++) {
                    if (arr[i] == 0) {
                        printf("Division by zero encountered! Aborting.\n");
                        return 1;
                    }
                    div_result /= arr[i];
                }
                printf("Result of sequential division: %.2f\n", div_result);
            break;
            case 5:
                for(i=0;i<size;i++){
                    printf("EXIT");
                }
            break;
        }
    } while (choices != 5);
        return 0;
    }