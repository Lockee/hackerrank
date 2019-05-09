#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int width = arr[0].size();
    int height = arr.size();
    int biggest_sum = -100;

    for (int i = 0; i < width - 2; i++) {
        for (int j = 0; j < height - 2; j++) {
            int sum_hourglass = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
                                arr[i + 1][j + 1] +
                                arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if (sum_hourglass > biggest_sum) {
                biggest_sum = sum_hourglass;
            }
        }
    }
    return biggest_sum;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
