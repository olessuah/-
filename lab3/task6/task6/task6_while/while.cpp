#include <iostream>
using namespace std;

double sum(int n) {
    double sum1 = 0;
    int i = 0;
    while (i < n) {
        sum1 += pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
        i++;
    }
    return sum1;
}

double sum2(double eps) {
    int i = 0;
    double a = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
    double s = a;
    while (abs(a) > eps) {
        s += a;
        a = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
        i++;
    }
    return s;
}


void print(int n, int k) {
    int i = 0;
    double sum1 = 0;
    while (i < n) {
        sum1 = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
        i++;
        if (i % k == 0)	continue;
        printf("Иттерация: %d ", i);
        printf("Результат: %f\ ", sum1);
    }
}

int findFirstElement(double eps) {
    int i = 0;
    int k = 0;
    double sum1 = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
    while (true) {
        if (abs(sum1) <= eps) break;
        i++;
        sum1 = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
        k = i;
    }
    return k;
}

int findFirstNegativeElement(double eps) {
    int i = 0;
    int k = 0;
    double sum1 = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
    while (true) {
        i++;
        sum1 = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
        k = i;
        if (sum1 > 0) continue;
        if (abs(sum1) >= eps) {
            return k;
        }
    }
}
