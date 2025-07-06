#include<stdio.h>
    //For finding the area of triangle:

int areaOfRectangle(int length, int breadth){
    
    return length * breadth;
}
    //For finding the perimeter of triangle:

int perimeterOfRectangle(int length, int breadth){
    return 2 * (length +breadth);
}
//For finding the area of circle:
int areaOfCircle(int radius){
    return 3.14 * radius * radius;
}
//For finding the circumference of circle:
int circumferenceOfCircle(int radius){
    return 2 * 3.14 * radius;
}
//For finding the area of triangle:
int areaOfTriangle(int length, int breadth){ // length = base, breadth = height:
    // for input useOnly:
    //return (length * breadth) / 2;
    return (length * breadth) / 2;
}
// for finding the simple interest:
int simpleInterest(int principal, int rate, int time){
    return (principal * rate * time) / 100;
}
// For finding the area of trapezoid:
int areaOftrapezoid(int a, int b, int height){
    return ((a + b) * height) / 2;
}
// total surface ara of cube:
int totalSurfaceAreaOfCube(int side){
    return 6 * side * side;
}

int main(){
    int l,b,area;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &b);
      int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area = areaOfRectangle(l, b);
    printf("The area of the rectangle is: %d\n", area);

    int perimeter;
    perimeter = perimeterOfRectangle(l, b);
    printf("The perimeter of the rectangle is: %d\n", perimeter);

  
    int Circle = areaOfCircle(radius);
    printf("The area of the circle is: %d\n", Circle);

    int circumference = circumferenceOfCircle(radius);
    printf("The circumference of the circle is: %d\n", circumference);

    int triangleArea = areaOfTriangle(l, b);
    printf("The area of the triangle is: %d\n", triangleArea);
   

    printf("The simple interest is: %d\n", simpleInterest(1000, 5, 2));
    printf("The area of the trapezoid is: %d\n", areaOftrapezoid(5, 10, 4));
    printf("The total surface area of the cube is: %d\n", totalSurfaceAreaOfCube(3));
    return 0;

}