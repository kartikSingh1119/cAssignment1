#include <stdio.h>
#define PI 3.14159265358979323846 
//kartikSingh comment 
//2303511530009

int main() {
    float radius, volume;

    printf("Input the radius of the sphere: ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("The volume of the sphere is %f.\n", volume);

    return 0;
}
