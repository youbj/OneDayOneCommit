#include <iostream>
#include <vector>
#include <string>
using namespace std;

int b2675() {
    int a, T;
    char a1;
    vector<char> c;
    vector<int> R;
    vector<vector<char>> S;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> a >> a1;
        R.push_back(a);
        c.push_back(a1);
        S.push_back(c);
    }

    for (int i = 0; i < T; i++) {
        for (int j = 0; j < S.size(); j++) {
            for (int k = 0; k < R[i]; k++) {
                cout << S[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;

}
int b11720() {
    int n, answer = 0;
    char arr[100];
    cin >> n;
    if (n > 100 || n < 0)
        return 0;
    cin >> arr;
    for (int i = 0; i < n; i++) {
        answer += (int)arr[i] - 48;
    }
    cout << answer;
    return 0;
}

void b11654() {
    char c;
    cin >> c;
    cout << (int)c;
}

int main()
{
    b2675();
    return 0;
}
