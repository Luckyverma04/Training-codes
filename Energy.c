#include<stdio.h>
int FindKineticEnergy(int mass, int velocity) {
    return (0.5 * mass * velocity * velocity);
}
int FindPotentialEnergy(int mass, int height) {
    return (mass * 9.8 * height);
}
int main() {
    int mass, velocity, height;
    printf("Enter mass=: ");
    scanf("%d", &mass);
    printf("Enter velocity=: ");
    scanf("%d", &velocity);
    printf("Enter height=: ");
    scanf("%d", &height);
    int kineticEnergy = FindKineticEnergy(mass, velocity);
    printf("Kinetic Energy = %d J\n", kineticEnergy);
    int potentialEnergy = FindPotentialEnergy(mass, height);
    printf("Potential Energy = %d J\n", potentialEnergy);
    return 0;
}