#include<stdio.h>
// calculate the volume of sphere and cube:
double volumeOfSphere(double radius) {
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}
// calculate the volume of cube:
double volumeOfCube(double side) {
    return side * side * side;
}
int main(){
    double radius;
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);  
    double volume = volumeOfSphere(radius);
    printf("Volume of the sphere: %.2lf\n", volume);

    double side;
    printf("Enter the side length of the cube: ");
    scanf("%lf", &side);
    double cubeVolume = volumeOfCube(side);
    printf("Volume of the cube: %.2lf\n", cubeVolume);
    return 0;
}