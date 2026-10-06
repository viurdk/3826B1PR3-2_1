#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
// задача №1
void main() {
	int V1 = 0;
	int V2 = 0;
	int T1 = 0;
	int T2 = 0;
	int S = 0;
	scanf("%d %d %d %d", &V1, &V2, &T1, &T2);
	S = V1 * T1 + (V1 - V2) * T2;
	printf("%d", S);
}
// задача №2
int main() {
	double x1, y1, r1, x2, y2, r2, d;
	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
	d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	if (d > r1 + r2) {
		printf("do not intersect\n");
	} else if (fabs(d - (r1 + r2)) < 1e-9 || fabs(d - fabs(r1 - r2)) < 1e-9) {
		printf("touch upon\n");
	} else if (d < r1 + r2 && d > fabs(r1 - r2)) {
		printf("intersect\n");
	} else {
		printf("one circle inside another\n");
	}
	return 0;
}
// задача №3
int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
		printf("is not a triangle\n");
		return 0;
	}
	if (fabs(a - b) < 1e-9 && fabs(b - c) < 1e-9) {
		printf("equilateral\n");
	}
	else if (fabs(a - b) < 1e-9 || fabs(b - c) < 1e-9 || fabs(a - c) < 1e-9) {
		printf("isosceles\n");
	}
	else {
		printf("scalene\n");
	}
	return 0;
}