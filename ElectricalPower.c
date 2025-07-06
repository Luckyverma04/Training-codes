#include<stdio.h>
// find the electrical power:
int findElectricalPower(int voltage, int current) {
    return voltage * current;       
}

int main(){
    int voltage, current;
    printf("Enter the voltage: ");
    scanf("%d", &voltage);
    printf("Enter the current : ");
    scanf("%d", &current);  
    int power = findElectricalPower(voltage, current);
    printf("The electrical power is: %d watts\n", power);
    return 0;
}