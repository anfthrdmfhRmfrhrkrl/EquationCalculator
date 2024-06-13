#include <iostream>
#include <cmath>
#include <stdexcept>

void solveLinearEquation(double a, double b) {
    if (a == 0) {
        if (b == 0) {
            std::cout << "모든 x는 이 방정식을 만족합니다 (무한히 많은 해)." << std::endl;
        }
        else {
            std::cout << "이 방정식은 해가 없습니다." << std::endl;
        }
    }
    else {
        double x = -b / a;
        std::cout << "방정식의 해는 x = " << x << " 입니다." << std::endl;
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
        std::cout << "방정식의 두 해는 x1 = " << x1 << ", x2 = " << x2 << " 입니다." << std::endl;
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        std::cout << "방정식의 해는 중근 x = " << x << " 입니다." << std::endl;
    }
    else {
        std::cout << "이 방정식은 실수 해가 없습니다." << std::endl;
    }
}

int main() {
    int choice;
    std::cout << "방정식 계산기를 선택하세요:" << std::endl;
    std::cout << "1. 1차 방정식 (ax + b = 0)" << std::endl;
    std::cout << "2. 2차 방정식 (ax^2 + bx + c = 0)" << std::endl;
    std::cout << "선택: ";
    std::cin >> choice;

    if (choice == 1) {
        double a, b;
        std::cout << "a의 값을 입력하세요: ";
        std::cin >> a;
        std::cout << "b의 값을 입력하세요: ";
        std::cin >> b;
        solveLinearEquation(a, b);
    }
    else if (choice == 2) {
        double a, b, c;
        std::cout << "a의 값을 입력하세요: ";
        std::cin >> a;
        std::cout << "b의 값을 입력하세요: ";
        std::cin >> b;
        std::cout << "c의 값을 입력하세요: ";
        std::cin >> c;
        solveQuadraticEquation(a, b, c);
    }
    else {
        std::cout << "잘못된 선택입니다." << std::endl;
    }

    return 0;
}
