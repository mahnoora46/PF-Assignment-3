//  Case Study 2: Restaurant Sales Tracker    
#include <iostream>
using namespace std;

// Step 1: Input 7 days sales
void input_sales(int week[7][4]) {
    //2D array of 7 days(rows) and 4 items(columns)
    cout << "Enter Elements of 2d Array: " << endl;
    for (int r = 0; r < 7; r++) { //r for rows
        for (int c = 0; c < 4; c++) { //c for columns
            cout << "[Day = " << r + 1 << "][ Item = " << c + 1 << "] = ";
            cin >> week[r][c];
        }
    }
    cout << endl;
}

//Step 2: Display 7 days sales
void display_sales(int week[7][4]) {
    cout << "Display Elements of 2d Array: " << endl;
    for (int r = 0; r < 7; r++) { //r for rows
        for (int c = 0; c < 4; c++) { //c for columns
            cout << week[r][c] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

//Step 3: Calculating total sales per item
void sales_per_item(int week[7][4]) {
    for (int c = 0; c < 4; c++) {
        int item_sales = 0;
        cout << "Item:" << c + 1 << "   Total Sales Per Item: ";
        for (int r = 0; r < 7; r++) {
            item_sales += week[r][c];
            cout << week[r][c];
            if (r < 6) {
                cout << " + ";
            }
        }
        cout << " =   " << item_sales << endl;
    }
    cout << endl;
}

//Step 4: Calculating total sales per day
void sales_per_day(int week[7][4]) {
    for (int r = 0; r < 7; r++) {
        int item_sales_per_day = 0;
        cout << "Day" << r + 1 << "   Total Sales Per Day: ";
        for (int c = 0; c < 4; c++) {
            item_sales_per_day += week[r][c];
            cout << week[r][c];
            if (c < 3) {
                cout << " + ";
            }
        }
        cout << " =   " << item_sales_per_day << endl;
    }
    cout << endl;
}

//Step 5: Calculate which day had the highest total sales
void highest_sales_day(int week[7][4]) {
    int most_sales = 1;
    int highest_sales_index = -1;

    for (int r = 0; r < 7; r++) {
        int item_sales_per_day = 0;
        cout << "Day:" << r + 1 << "\t" << "Total:";
        for (int c = 0; c < 4; c++) {
            item_sales_per_day += week[r][c];
        }
        cout << " = " << item_sales_per_day << endl;

        // We compare item sales per day  with most sales
        if (item_sales_per_day > most_sales) {
            most_sales = item_sales_per_day;         // If item sales per day is higher, update most sales
            highest_sales_index = r;               // And update the index of the highest sales index
        }
    }

    if (highest_sales_index != -1) {
        cout << "The Highest Sales Day " << highest_sales_index + 1;
        cout << " with a Total Sales of Items: " << most_sales << endl;
    }
    else {
        cout << "Error" << endl;
    }

    cout << endl;
}

//Step 6: Calculate most sold item
void highest_sales_item(int week[7][4]) {
    int most_sold_item = 1;
    int most_sold_item_index = -1;

    for (int c = 0; c < 4; c++) {
        int item_sales = 0;
        cout << "Total Sales Per Item:  " << c + 1;
        for (int r = 0; r < 7; r++) {
            item_sales += week[r][c];
        }
        cout << " = " << item_sales << endl;
        // We compare item sales  with most sold item
        if (item_sales > most_sold_item) {
            most_sold_item = item_sales;         // If item sales is higher, update most sold item
            most_sold_item_index = c;               // And update the index of the most sold item
        }
    }

    if (most_sold_item_index != -1) {
        cout << "The Highest Sale Item " << most_sold_item_index + 1;
        cout << " with a Total Sale " << most_sold_item << endl;
    }
    else {
        cout << "Error" << endl;
    }

    cout << endl;
}


int main()
{
    //Step 1: 2D array of 7 days(rows) and 4 items(columns)
    int week[7][4];

    // Step 1: Input 7 days sales
    cout << "Input 7 days Sales: " << endl;
    input_sales(week);

    //Step 2: Display 7 days sales
    cout << "Displaying 7 days Sales: " << endl;
    display_sales(week);

    //Step 3: Calculating total sales per item
    cout << "Total Sales Per Item: " << endl;
    sales_per_item(week);

    //Step 4: Calculating total sales per day
    cout << "Total Sales Per Day: " << endl;
    sales_per_day(week);

    //Step 5: Calculate which day had the highest total sales
    cout << "Day which had the highest total sales: " << endl;
    highest_sales_day(week);

    //Step 6: Calculate most sold item
    cout << "Most Sold Item: " << endl;
    highest_sales_item(week);


    return 0;
}
