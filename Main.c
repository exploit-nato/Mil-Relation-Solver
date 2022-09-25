#include <stdio.h>

int main(void){
    float target_height, target_mil_height, result;
    printf("Enter target height(in.): ");
    scanf("%f", &target_height);
    printf("\nEnter target height(mils): ");
    scanf("%f", &target_mil_height);
    printf("Your distance to target is %f meters.", ((target_height * 25.4)/target_mil_height));
    return 0;
}
// 1337 Sn1p3rs <3
