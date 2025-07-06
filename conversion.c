#include<stdio.h>
//conversion celsius to fahrenheit :

float celToFerhen(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
//conversion fahrenheit to celsius :
float ferhenToCel(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}
int main(){
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);  
    fahrenheit = celToFerhen(celsius);  
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = ferhenToCel(fahrenheit);
    printf("Temperature in Celsius: %.2f\n", celsius);
    return 0;
}