#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    int hours = stoi(s.substr(0, 2));
    string minutes = s.substr(3, 2);
    string seconds = s.substr(6, 2);
    string times = s.substr(8, 2);
    hours = (times == "PM" ? (hours % 12 + 12) : hours % 12);
    string hours_normalized = hours < 10 ? "0" + to_string(hours) : to_string(hours);
    //cout << to_string(hours) << ":" << minutes << ":" << seconds;
    return hours_normalized + ":" + minutes + ":" + seconds;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
