#include <stdio.h>
#include <math.h>
#define lines "\n--------------------------------------------------------\n"
typedef  struct {
  float x;
  float y;
} point;

float pointsDistance(point *a, point *b) {
  return sqrt(pow(b->x - a->x, 2) + pow(b->y - a->y, 2));
}

int main() {
  int quite;
  float distance;
  point p1, p2;
  while (1) {
    printf("%s", lines);
    printf("Program to calculate the distance between two points");
    printf("%s", lines);
    printf("Type the coordinates of the first point (x, y):  ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Type the coordinates of the second point (x, y):  ");
    scanf("%f %f", &p2.x, &p2.y);
    
    distance = pointsDistance(&p1, &p2);

    printf("\nThe distance between the two given points is: %f\n", distance);
    printf("Type '0' if you want to quite the program and type '1' to calculate other distance --->  ");
    scanf("%d", &quite);
    if (quite == 0) {
      break;
    }
  }

}
