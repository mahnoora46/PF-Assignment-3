//  Case Study 1: School Result Processing System
#include <iostream>
using namespace std;

//Step 2: Now creating function to input marks
void input_marks(int result[10][5]) {
    cout << "Enter Elements of 2d Array: " << endl;
    for (int r = 0; r < 10; r++) { //r for rows
        for (int c = 0; c < 5; c++) { //c for columns
            cout << "[Student = " << r + 1 << "][ Subject = " << c + 1 << "] = ";
            cin >> result[r][c];
        }
    }
    cout << endl;
}

//Step 2(2): Displaying Student marks
void display_marks(int result[10][5]) {
    cout << "Displaying 2d Elements: " << endl;
    for (int r = 0; r < 10; r++) {
        cout << "Student " << r + 1 << endl;
        for (int c = 0; c < 5; c++) {
            cout << result[r][c] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

//Step 3: Calculating each student total marks of all subjects
void calculate_student_marks(int result[10][5]) {
    for (int r = 0; r < 10; r++) {
        int student_marks = 0;
        cout << "Student " << r + 1 << " Total Marks: ";
        for (int c = 0; c < 5; c++) {
            student_marks += result[r][c];
            cout << result[r][c];
            if (c < 4) { //0 to 4 (total 5 subjects)
                cout << " + ";
            }
            //When c is 0 (1st subject): 0 < 1 is true. So, it prints " + ". This puts a plus after the first mark.
            //When c is 4 (5th subject, which is the last subject in this 2-subject example): 4 < 4 is false. So, it does not print " + ". This means no plus sign appears after the last mark.
        }
        cout << " = " << student_marks << endl;
        student_marks = 0;
    }
    cout << endl;
}

//Step 4: Calculating each student average marks
void each_student_avg_marks(int result[10][5]) {
    for (int r = 0; r < 10; r++) {
        float student_marks = 0.0;
        float avg_marks;
        cout << "Student " << r + 1 << " Average: ";
        for (int c = 0; c < 5; c++) {
            student_marks += result[r][c];
            cout << result[r][c];
            if (c < 4) { //0 to 4 (total 5 subjects)
                cout << " + ";
            }
            avg_marks = student_marks / 5.0;

        }
        cout << " / 5 = " << avg_marks << endl;
    }
    cout << endl;
}

//Step 4: Calculating overall student average marks 
void overall_avg_marks(int result[10][5]) {
    float overall_total_marks = 0.0;
    float overall_avg = 0.0;
    for (int r = 0; r < 10; r++) {
        for (int c = 0; c < 5; c++) {
            overall_total_marks += result[r][c];
        }
        overall_avg = overall_total_marks / 5.0;
    }
    cout << overall_total_marks << "/ 5 = " << overall_avg << endl;

    cout << endl;
}

//Step 6: Among all 10 students, find the highest scorer
void highest_scorer(int result[10][5]) {
    int total_max_marks = 1;
    int highest_scorer_index = -1; //store index of student with highest marks

    for (int r = 0; r < 10; r++) {
        int current_student_marks = 0;
        cout << "Student " << r + 1 << " Total Marks: ";
        for (int c = 0; c < 5; c++) {
            current_student_marks += result[r][c];
            cout << result[r][c];
            if (c < 4) { //0 to 4 (total 5 subjects)
                cout << " + ";
            }
        }
        cout << " = " << current_student_marks << endl;

       // Comparing 'current student marks  with total max marks
        if (current_student_marks > total_max_marks) {
            total_max_marks = current_student_marks;         // If current student's total is higher, update total max marks
            highest_scorer_index = r;               // Also update the index of the highest scorer
        }
    }
    // Display the result
    if (highest_scorer_index != -1) {
        cout << "The Highest Scorer is Student " << highest_scorer_index + 1;
        cout << " with a Total Marks: " << total_max_marks << endl;
    } else {
        cout << "Error. No student with a highest scorer." << endl;
    }

    cout << endl;
}

//Step 7: Display each student grade (A,B,C,F) based on average
void avg_based_grade(int result[10][5]) {
    float student_marks = 0.0;
    float avg_marks;
    for (int r = 0; r < 10; r++) {
        cout << "Student " << r + 1 << ": Average = ";
        for (int c = 0; c < 5; c++) {
            student_marks += result[r][c];
            avg_marks = student_marks / 5.0;
        }
        cout << avg_marks << " \t";

        //grade based on average 
        if (avg_marks < 15) {
            cout << "Grade: F(Fail)" << endl;
        }
        else if (avg_marks >= 15 && avg_marks <= 50) {
            cout << "Grade: C" << endl;
        }
        else if (avg_marks >= 50 && avg_marks <= 80) {
            cout << "Grade: B" << endl;
        }
        else if (avg_marks >= 80 && avg_marks <= 100) {
            cout << "Grade: A" << endl;
        }
    }

    cout << endl;
}


int main()
{
    cout << "Case Study 1: School Result Processing System" << endl;
    int result[10][5]; //declaration of 2d array

    //Step 2: Now creating function to input marks
    cout << "Entering Student Result: " << endl;
    input_marks(result);

    //Step 3: Now creating function to display marks
    cout << "Displaying Student Result: " << endl;
    display_marks(result);

    //Step 3: Calculating each student total marks of all subjects
    cout << "Calculating each student total marks of all subjects: " << endl;
    calculate_student_marks(result);

    //Step 4: Calculating each student average marks
    cout << "Calculating each student average marks: " << endl;
    each_student_avg_marks(result);

    //Step 5: Calculate overall average marks
    cout << "Calculate overall average marks: " << endl;
    overall_avg_marks(result);

    //Step 6: Among all 10 students, find the highest scorer
    cout << "Among all 10 students, The highest scorer:  " << endl;
    highest_scorer(result);


    //Step 7: Display each student grade (A,B,C,F) based on average
    cout << "Each Student Grade (A,B,C,F) based on average:  " << endl;

    cout << "Grade Chart: " << endl;
    cout << "From 0 - 19 = F (Fail)" << endl;
    cout << "From 20 - 29 = C " << endl;
    cout << "From 30 - 39 = B " << endl;
    cout << "From 40 - 50 = A " << endl;
    cout << endl;

    avg_based_grade(result);


    return 0;
}


