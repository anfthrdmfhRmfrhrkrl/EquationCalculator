#include <iostream>
#include <cmath>
#include <stdexcept>

void solveLinearEquation(double a, double b) {
    if (a == 0) {
        if (b == 0) {
            std::cout << "��� x�� �� �������� �����մϴ� (������ ���� ��)." << std::endl;
        }
        else {
            std::cout << "�� �������� �ذ� �����ϴ�." << std::endl;
        }
    }
    else {
        double x = -b / a;
        std::cout << "�������� �ش� x = " << x << " �Դϴ�." << std::endl;
    }
}

void solveQuadraticEquation(double a, double b, double c) {
    if (a == 0) {
        solveLinearEquation(b, c);
        return;
    }

    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double x1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double x2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "�������� �� �ش� x1 = " << x1 << ", x2 = " << x2 << " �Դϴ�." << std::endl;
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        std::cout << "�������� �ش� �߱� x = " << x << " �Դϴ�." << std::endl;
    }
    else {
        std::cout << "�� �������� �Ǽ� �ذ� �����ϴ�." << std::endl;
    }
}

int main() {
    int choice;
    std::cout << "������ ���⸦ �����ϼ���:" << std::endl;
    std::cout << "1. 1�� ������ (ax + b = 0)" << std::endl;
    std::cout << "2. 2�� ������ (ax^2 + bx + c = 0)" << std::endl;
    std::cout << "����: ";
    std::cin >> choice;

    if (choice == 1) {
        double a, b;
        std::cout << "a�� ���� �Է��ϼ���: ";
        std::cin >> a;
        std::cout << "b�� ���� �Է��ϼ���: ";
        std::cin >> b;
        solveLinearEquation(a, b);
    }
    else if (choice == 2) {
        double a, b, c;
        std::cout << "a�� ���� �Է��ϼ���: ";
        std::cin >> a;
        std::cout << "b�� ���� �Է��ϼ���: ";
        std::cin >> b;
        std::cout << "c�� ���� �Է��ϼ���: ";
        std::cin >> c;
        solveQuadraticEquation(a, b, c);
    }
    else {
        std::cout << "�߸��� �����Դϴ�." << std::endl;
    }

    return 0;
}
