#include <stdio.h>
int main() {   
    int number;
   
    printf("Enter an integer betweeen 1 - %d: ",__INT_MAX__);  
    
    // reads and stores input
    scanf("%d", &number);

    // displays output
    printf("You entered: %d\n", number);
    
    return 0;
}