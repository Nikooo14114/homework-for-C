#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, r1, x2, y2, r2, m, s;

    printf("分别输入两个圆的圆心坐标和半径\n");
    scanf("%f,%f,%f,%f,%f,%f", &x1, &y1, &r1, &x2, &y2, &r2);

    m = fabs(sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));

    if (m >= r1 + r2) {
        printf("重合面积为0\n");
    } else if (m <= fabs(r1 - r2)) {
        s = 3.14 * fmin(r1, r2) * fmin(r1, r2);
        printf("重合面积为%f\n", s);
    } else {
        float d = m * m + r1 * r1 - r2 * r2;    //类似余弦定理 
        float h1 = d / (2 * m);
        float h2 = m - h1;
        float s1 = r1 * r1 * acos(h1 / r1);
        float s2 = r2 * r2 * acos(h2 / r2);
        float s3 = h1 * sqrt(r1 * r1 - h1 * h1);
        s = s1 + s2 - s3;

        printf("重合面积为%f\n", s);
    }

    return 0;
}

