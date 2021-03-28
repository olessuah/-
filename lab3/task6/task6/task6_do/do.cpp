#include <iostream>
using namespace std;

double sum(int n) {
    double sum1 = 0;
    int i = 0;
    do {
        sum1 += pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
        i++;
    } while (i < n);
    return sum1;
}

double sum2(double eps) {
    int i = 0;
    double s = 0;
    double a = 0;
    do {
        a = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
        s += a;
        i++;
    } while (abs(a) > eps);
    return s;
}


void print(int n, int k) {
    int i = 0;
    double sum1 = 0;
    do {
        sum1 = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
        i++;
        if (i % k == 0) continue;
        printf("���������: %d ", i);
        printf("���������: %f\ ", sum1);

    } while (i < n);

}
int findFirstElement(double eps) {
    int i = 0;
    int k = 0;
    double sum1 = 0;
    do {
        if (abs(sum1) <= eps) break;
        i++;
        sum1 = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
        k = i;
    } while (true);
    return k;
}

int findFirstNegativeElement(double eps) {
    int i = 0;
    int k = 0;
    double sum1 = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
    do {
        i++;
        sum1 = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
        k = i;
        if (sum1 > 0) continue;
        if (abs(sum1) >= eps) {
            return k;
        };
    } while (true);
}
