#include <iostream>
#include <cmath>

int correlation(int a[], int b[], int n) {
    int p = 0;
    for (int i = 0; i < n; i++) {
        p += a[i] * b[i];
    }
    return p;
}

double normalized_correlation(int a[], int b[], int n) {
    double p = 0;
    double a_2 = 0;
    double b_2 = 0;

    for (int i = 0; i < n; i++) {
        p += (double)a[i] * b[i];
        a_2 += (double)a[i] * a[i];
        b_2 += (double)b[i] * b[i];
    }

    double corr = p / (sqrt(a_2) * sqrt(b_2));

    return corr;
}

int main() {
    int a[] = {4, 2, 8, -2, -4, -4, 1, 3};
    int b[] = {2, 4, 7, 0, -3, -4, 2, 5};
    int c[] = {-5, -1, 3, -4, 2, -6, 4, -1};
    int n = sizeof(a) / sizeof(a[0]);

    std::cout << "Корреляция между a, b и с:" << std::endl;
    std::cout << "+----+---+---+---+" << std::endl;
    std::cout << "| |a |b |c |" << std::endl;
    std::cout << "+----+---+---+---+" << std::endl;
    std::cout << "|a | - |"<<correlation(a, b, n)<<"|"<<correlation(a, c, n)<<"|" << std::endl;
    std::cout << "+----+---+---+---+" << std::endl;
    std::cout << "|b |"<<correlation(a, b, n)<<"| - |"<<correlation(b, c, n)<<"|" << std::endl;
    std::cout << "+----+---+---+---+" << std::endl;
    std::cout << "|c |"<<correlation(a, c, n)<<"|"<<correlation(b, c, n)<<"| - |" << std::endl;
    std::cout << "+----+---+---+---+" << std::endl;

    std::cout << "Нормализованная корреляция между a, b и с:" << std::endl;
    std::cout << "+----+---------+---------+---------+" << std::endl;
    std::cout << "| |a |b |c |" << std::endl;
    std::cout << "+----+---------+---------+---------+" << std::endl;
    std::cout << "|a | - |"<<normalized_correlation(a, b, n)<<" |"<<normalized_correlation(a, c, n)<<"|" << std::endl;
    std::cout << "+----+---------+---------+---------+" << std::endl;
    std::cout << "|b |"<<normalized_correlation(a, b, n)<<" | - |"<<normalized_correlation(b, c, n)<<"|" << std::endl;
    std::cout << "+----+---------+---------+---------+" << std::endl;
    std::cout << "|c |"<<normalized_correlation(a, c, n)<<"|"<<normalized_correlation(b, c, n)<<"| - |" << std::endl;
    std::cout << "+----+---------+---------+---------+" << std::endl;

    return 0;
}
