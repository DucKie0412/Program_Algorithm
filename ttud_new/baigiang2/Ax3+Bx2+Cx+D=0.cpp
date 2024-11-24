#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Hàm tính giá trị của f(x)
double f(double A, double B, double C, double D, double x) {
    return A * pow(x, 3) + B * pow(x, 2) + C * x + D;
}

// Hàm tính đạo hàm f'(x)
double f_prime(double A, double B, double C, double x) {
    return 3 * A * pow(x, 2) + 2 * B * x + C;
}

// Hàm tính nghiệm bằng phương pháp Newton-Raphson
double newton_raphson(double A, double B, double C, double D, double x, double tolerance, int max_iterations) {
    for (int i = 0; i < max_iterations; i++) {
        double fx = f(A, B, C, D, x);
        double fpx = f_prime(A, B, C, x);

        if (fabs(fpx) < 1e-10) { // Tránh chia cho 0
            cout << "Không thể tìm nghiệm do đạo hàm gần b��ng 0.\n";
            return NAN;
        }

        double x_new = x - fx / fpx;

        // Kiểm tra độ chính xác
        if (fabs(x_new - x) < tolerance) {
            return x_new;
        }

        x = x_new;
    }
    return x;
}


int main() {
    double A, B, C, D;
    cout << "Nhập các hệ số A, B, C, D: ";
    cin >> A >> B >> C >> D;

    // Giá trị khởi tạo x0 (cố định, ví dụ x0 = 0)
    double x = 0.0;

    // Độ chính xác yêu cầu
    double tolerance = 1e-5; // 1e-5 tương ứng với 5 chữ số thập phân
    int max_iterations = 1000; // Số lần lặp tối đa là 1000

    // Tìm nghiệm
    double root = newton_raphson(A, B, C, D, x, tolerance, max_iterations);

    if (!isnan(root)) {
        cout << "Nghiệm của f(x) = " << A << "x^3 + " << B << "x^2 + " << C << "x + " << D << " là: x ≈ " << fixed << setprecision(5) << root << endl;
    } else {
        cout << "Không tìm được nghiệm nào trong số lần lặp tối đa.\n";
    }

    return 0;
}
