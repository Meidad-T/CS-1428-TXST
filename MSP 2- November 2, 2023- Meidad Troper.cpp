#include <iostream>
#include <iomanip>
using namespace std;

double averages(int firstGrade, int secondGrade, int thirdGrade, double& best2Avg) {
    double bestscore1;
    double bestscore2;
    best2Avg = 999;

    if ((firstGrade > secondGrade) && (firstGrade > thirdGrade)) {
        bestscore1 = firstGrade;
        if (secondGrade > thirdGrade) {
            bestscore2 = secondGrade;
        }
        else {
            bestscore2 = thirdGrade;
        }
    }
    if ((secondGrade > firstGrade) && (secondGrade > thirdGrade)) {
        bestscore1 = secondGrade;
        if (firstGrade > thirdGrade) {
            bestscore2 = firstGrade;
        }
        else {
            bestscore2 = thirdGrade;
        }
    }
    if ((thirdGrade > firstGrade) && (thirdGrade > secondGrade)) {
        bestscore1 = thirdGrade;
        if (firstGrade > secondGrade) {
            bestscore2 = firstGrade;
        }
        else {
            bestscore2 = secondGrade;
        }
    }
    if ((firstGrade == secondGrade) && (firstGrade == thirdGrade)) {
        if (secondGrade == thirdGrade) {
            bestscore1 = firstGrade;
            bestscore2 = secondGrade;
        }
        else {
            cout << "ERROR CODE 404";
        }
    }

    best2Avg = (bestscore1 + bestscore2) / 2.0;

    return (firstGrade + secondGrade + thirdGrade) / 3.0;
}

int main() {
    double best2Avg = 0;
    double average = 0;
    cout << fixed << setprecision(2);

    int firstGrade;
    int secondGrade;
    int thirdGrade;

    cin >> firstGrade;
    cin >> secondGrade;
    cin >> thirdGrade;

    average = averages(firstGrade, secondGrade, thirdGrade, best2Avg);

    cout << average << " ";
    cout << best2Avg << endl;

    return 0;
}
