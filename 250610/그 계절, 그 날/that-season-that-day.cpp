#include <iostream>

using namespace std;

bool isLeapYear(int year) {
    if (year % 4 != 0) return false;
    if (year % 100 == 0 && year % 400 != 0) return false;
    return true;
}

bool isValidDate(int year, int month, int day) {
    int daysInMonth[13] = {
        0,  // index 0 unused
        31, // Jan
        28, // Feb (default, updated if leap)
        31, // Mar
        30, // Apr
        31, // May
        30, // Jun
        31, // Jul
        31, // Aug
        30, // Sep
        31, // Oct
        30, // Nov
        31  // Dec
    };

    if (isLeapYear(year)) {
        daysInMonth[2] = 29;
    }

    if (month < 1 || month > 12) return false;
    if (day < 1 || day > daysInMonth[month]) return false;

    return true;
}

string getSeason(int month) {
    if (month >= 3 && month <= 5) return "Spring";
    else if (month >= 6 && month <= 8) return "Summer";
    else if (month >= 9 && month <= 11) return "Fall";
    else return "Winter"; // 12, 1, 2
}


int Y, M, D;

int main() {
    cin >> Y >> M >> D;

    if (!isValidDate(Y, M, D)) {
        cout << -1 << endl;
    } else {
        cout << getSeason(M) << endl;
    }

    // Please write your code here.

    return 0;
}