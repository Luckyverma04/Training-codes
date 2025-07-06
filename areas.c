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
    return 0;

}