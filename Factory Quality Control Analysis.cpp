//  Case Study 9: Factory Quality Control Analysis
#include <iostream>
using namespace std;

//Step 2: Input Defect Data
void input_defect(float defect[3][7]) {
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 7; c++) {
            cout << "[Shift " << r + 1 << "][Day " << c + 1 << "] = ";
            cin >> defect[r][c];
        }
    }
    cout << endl;
}

//Step 3: Display Defect Data
void display_defect(float defect[3][7]) {
    for (int r = 0; r < 3; r++) {
        cout << "Shift " << r + 1 << ": ";
        for (int c = 0; c < 7; c++) {
            cout << defect[r][c] << "\t ";
        }
        cout << endl;
    }
    cout << endl;
}

//Step 4: Calculate average defects per shift 
void avg_per_shift(float defect[3][7]) {
    for (int r = 0; r < 3; r++) {
        float shift_total = 0;
        float avg = 0.0;
        for (int c = 0; c < 7; c++) {
            shift_total += defect[r][c];
        }
        avg = shift_total / 7.0;
        cout << "Average defects for Shift " << r + 1 << ": " << avg << endl;
    }
    cout << endl;
}

//Step 5: Calculate average defects per day 
void avg_per_day(float defect[3][7]) {
    for (int c = 0; c < 7; c++) {
        float avg = 0.0;
        float day_total = 0.0;
        for (int r = 0; r < 3; r++) {
            day_total += defect[r][c];
        }
        avg = day_total / 3.0;
        cout << "Average defects for Day " << c + 1 << ": " << avg << endl;
    }
    cout << endl;
}

// Function to find critical shifts (average > 10)
void critical_shifts(float defect[3][7]) {
    for (int r = 0; r < 3; r++) {
        float shift_total = 0.0;
        float avg = 0.0;
        for (int c = 0; c < 7; c++) {
            shift_total += defect[r][c];
        }
        avg = shift_total / 7.0;
        if (avg > 10) {
            cout << "Shift " << r + 1 << " is critical. " << endl;
            cout << "Average = " << avg << endl;
        }
    }
    cout << endl;
}

int main()
{
    //Step 1: 2D (using float) array of 3 shifts (rows) and 7 days(columns)
    float defect[3][7];

    //Step 2: Input Defect Data
    cout << "Enter Defect Data: " << endl;
    input_defect(defect);

    //Step 3: Display Defect Data
    cout << "Display Defect Data: " << endl;
    display_defect(defect);

    //Step 4: Calculate average defects per shift 
    cout << "Calculate average defects per shift : " << endl;
    avg_per_shift(defect);

    //Step 5: Calculate average defects per day 
    cout << "Calculate average defects per day : " << endl;
    avg_per_day(defect);

    //Step 5:Identify critical shifts (where avg defects > 10%).
    cout << "Critical shifts (where avg defects > 10%): " << endl;
    critical_shifts(defect);

    return 0;
}
