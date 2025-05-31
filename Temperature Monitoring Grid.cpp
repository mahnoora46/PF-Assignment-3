//Case Study 4: Temperature Monitoring Grid
#include <iostream>
using namespace std;

//Step 2: Now creating function to input temp
void input_temp(float temp[5][5]) {
    cout << "Enter Elements of 2d Array: " << endl;
    for (int r = 0; r < 5; r++) { //r for rows
        for (int c = 0; c < 5; c++) { //c for columns
            cout << "[Locations = " << r + 1 << "][ Temp. = " << c + 1 << "] = ";
            cin >> temp[r][c];
        }
    }
    cout << endl;
}

//Step 3: Now creating function to display temp
void display_temp(float temp[5][5]) {
    cout << "Enter Elements of 2d Array: " << endl;
    for (int r = 0; r < 5; r++) { //r for rows
        for (int c = 0; c < 5; c++) { //c for columns
            cout << temp[r][c] << "\t \t";
        }
        cout << endl;
    }
    cout << endl;
}

//Step 3: Calculate average temp. of each location
void avg_temp(float temp[5][5]) {
    float average;
    float current_temp_total = 0.0;

    for (int r = 0; r < 5; r++) {
        cout << "Average Temp. of Location " << r + 1 << ": \t";
        for (int c = 0; c < 5; c++) {
            current_temp_total += temp[r][c];
            cout << temp[r][c];
            if (c < 4) {
                cout << " + ";
            }
            average = current_temp_total / 5.0;
        }
        cout << " / 5 \t = \t" << average << endl;
    }

    cout << endl;
}

//Step 4: Calculating Hot and Cold locations
    // Hottest location (highest average)
    // Coldest location (lowest average)
/*
void hot_cold_location (float temp[5][5]) {
    //First i will find average of each location
    float total_temp = 0.0;
    float total_avg_temp = 0.0;
    float hot_location = 0;
    float hottest = 200;
    float cold_location = 0;
    float coldest = 1;

    for (int r = 0; r < 5; r++) {


        cout << "Location: " << r + 1 << "\t" << "Average Temp. : ";
        for (int c = 0; c < 5; c++) {
            total_temp += temp[r][c];
            cout << temp[r][c];
            if (c < 4) {
            cout << " + ";
        }
        total_avg_temp = total_temp / 5.0;
    }
    cout << "/ 5 \t = "<< total_avg_temp << endl;


    if (total_avg_temp > hottest) {
            hottest = total_avg_temp;
            hot_location = r + 1;
        }

        if (total_avg_temp < coldest) {
            coldest = total_avg_temp;
            cold_location = r + 1;
        }
    }
    cout << endl;

    cout << "Location: " << hot_location << "\tTemperature is Hottest.  \t = " << hottest << endl;
    cout << "Location: " << cold_location << "\tTemperature is Coldest. \t = " << coldest << endl;                          cout << endl;
}
*/

void hot_cold_location(float temp[5][5]) {
    int hot_location = 0;
    int cold_location = 0;
    float hottest = -1000.0; // very small value
    float coldest = 1000.0;  // very large value

    for (int r = 0; r < 5; r++) {
        float total_temp = 0.0;
        for (int c = 0; c < 5; c++) {
            total_temp += temp[r][c];
        }
        float avg = total_temp / 5.0;
        cout << "Location " << r + 1 << " Average Temp: " << avg << endl;

        if (avg > hottest) {
            hottest = avg;
            hot_location = r + 1;
        }

        if (avg < coldest) {
            coldest = avg;
            cold_location = r + 1;
        }
    }
    cout << endl;
    cout << "Hottest Location: " << hot_location << " with Avg Temp = " << hottest << endl;
    cout << "Coldest Location: " << cold_location << " with Avg Temp = " << coldest << endl;

    cout << endl;
}

int main()
{
    //Step 1: (Using Float) 2D array of 5 locations(rows) and 5 temperature(columns)
    float temp[5][5]; //declaration of 2d array

    //Step 2: Now creating function to input temp
    cout << "Input Temperature: " << endl;
    input_temp(temp);

    //Step 3: Now creating function to display temp
    cout << "Display Temperature: " << endl;
    display_temp(temp);

    //Step 3: Calculate average temp. of each location
    cout << "Average of Each Location: " << endl;
    avg_temp(temp);

    //Step 4: Calculating Hot and Cold locations
    cout << "Hot and Cold Location: " << endl;
    hot_cold_location(temp);


    return 0;
}
