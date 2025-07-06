#include <stdio.h>

// Function to calculate speed
double calculateSpeed(double distance, double time) {
    return distance / time;
}
// Function to calculate distance
double calculateDistance(double speed, double time) {
    return speed * time;
}
// Function to calculate time
double calculateTime(double distance, double speed) {
    return distance / speed;
}

int main() {
    int choice;
     double speed, distance, time, result;
    printf("Choose what to calculate:\n");
    printf("1. Speed\n2. Distance\n3. Time\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter distance (in meters): ");
            scanf("%lf", &distance);
            printf("Enter time (in seconds): ");
            scanf("%lf", &time);
            result = calculateSpeed(distance, time);
            printf("Speed = %.2lf m/s\n", result);
            break;
    
        case 2:
            printf("Enter speed (in m/s): ");
            scanf("%lf", &speed);
            printf("Enter time (in seconds): ");
            scanf("%lf", &time);
            result = calculateDistance(speed, time);
            printf("Distance = %.2lf meters\n", result);
            break;
       case 3:
            printf("Enter distance (in meters): ");
            scanf("%lf", &distance);
            printf("Enter speed (in m/s): ");
            scanf("%lf", &speed);
            result = calculateTime(distance, speed);
            printf("Time = %.2lf seconds\n", result);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}