#include <iostream>
using namespace std;

char key;
double x, y, res, task;
bool result;

char func(char key) {
    switch (key) {
    case '1':
        return 1;
        break;
    case '2':
        return 2;
        break;
    default:
        cout << "�������� ����\n";
        return key;
        break;
    }
}

bool IsInArea(double x, double y) {
    if (x * x + y * y < 1) return true;
    else if ((x <= 1) && (x >= 0) && (y <= 1) && (y >= -1)) return true;
    else return false;
}

double f(double x) {
    x <= 3 ? x = x * x + 3 * x + 9 : x = 1 / (x * x * x + 6);
    return x;
}

void main() {
    setlocale(LC_ALL, "RUS");
    cout << "�������� ������ �������:\n1. ������� 1\n2. ������� 2" << endl;
    cin >> key;
    task = func(key);
    if (task == 1) {
        printf("������� 1\n");
        bool IsInArea(double x, double y);
        cout << "������� x:";
        cin >> x;
        cout << "������� y:";
        cin >> y;
        result = IsInArea(x, y);
        if (result == true) cout << "����� ��������� � ����������� �������\n";
        else cout << "����� �� ��������� � ����������� �������\n";
    }
    else if (task == 2) {
        printf("������� 2\n");
        double f(double x);
        cout << "x=";
        cin >> x;
        res = f(x);
        cout << "f(x)=" << res << endl;
    }
    system("pause");
}