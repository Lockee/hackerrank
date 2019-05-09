#include <bits/stdc++.h>

using namespace std;

int abs(int n) {
    return n < 0 ? -n : n;
}

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr, int n) {
    int r_dia = 0;
    int l_dia = 0;
    for (int i = 0; i < n; i++) {
        r_dia += arr[i][i];
        l_dia += arr[i][n - 1 - i];
    }
    return abs(r_dia - l_dia);
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
