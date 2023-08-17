#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(int r1, int r2) {
    long long answer = 4;
    long long int r1_val = (r1 * 2) - 1;
    long long int r2_val = (r2 * 2) - 1;
    answer += pow(r1_val, 2) - pow(r2_val, 2);
    return answer;
}

#include <iostream>
int main() {
    int a = 5;
    double b = sqrt(2);
    for (int i = 1; i <= 1000000; i++) {
        if (i * b <= i + 1) {
            cout << i <<endl;
        }
    }
}