// Case Study 6: Flight Seat Reservation System
#include <iostream>
using namespace std;

//Step 2: Input Seating Chart
void input_seating_chart(char seats[6][4]) {
    for (int r = 0; r < 6; r++) {
        for (int c = 0; c < 4; c++) {
            cout << "[Row: " << r + 1 << "] Column: " << c + 1 << "] = ";
            cin >> seats[r][c];
        }
    }

    cout << endl;
}

//Step 3: Function to Display Seating Chart
void display_seating_chart(char seats[6][4]) {
    for (int r = 0; r < 6; r++) {
        cout << "Row: " << r + 1 << "\t\t";
        for (int c = 0; c < 4; c++) {
            cout << "Column " << c + 1 << ": \t";
            cout << seats[r][c] << "\t";
        }
        cout << endl;
    }

    cout << endl;
}

//Step 4: Book a seat (change 'E' to 'B')
//Allows a user to book a seat if it's empty.
void book_seat(char seats[6][4]) {
    int row, column;
    cout << "Enter row number (1-6): ";
    cin >> row;
    cout << "Enter column number (1-4): ";
    cin >> column;

    // check if the seat is empty
    if (seats[row - 1][column - 1] == 'E') {
        seats[row - 1][column - 1] = 'B'; // book the seat
        cout << "Seat Booked." << endl;
    }
    else {
        cout << "Error. Seat is already booked." << endl;
    }
    cout << endl;

    // Show the seating chart after booking
    cout << "Updated Seating Chart:" << endl;
    display_seating_chart(seats);

    cout << endl;
}

//Step 5: Count available seats.
void available_seats_count(char seats[6][4]) {
    int available_count = 0;
    for (int r = 0; r < 6; r++) {
        for (int c = 0; c < 4; c++) {
            if (seats[r][c] == 'E' || seats[r][c] == 'e') {
                available_count++; // increase count if seat is empty
            }
        }
    }

    cout << "Total empty seats: " << available_count << endl;
    cout << endl;
}

//Step 6:Find the row with maximum empty seats.
void row_max_empty_seats(char seats[6][4]) {
    int max_empty = 0;     // stores max number of empty seats found
    int row_number = -1;   // stores the row with most empty seats

    for (int r = 0; r < 6; r++) {
        int empty_in_row = 0; // count of empty seats in this row

        for (int c = 0; c < 4; c++) {
            if (seats[r][c] == 'E') {
                empty_in_row = empty_in_row + 1;
            }
        }

        // check if this row has more empty seats than previous max
        if (empty_in_row > max_empty) {
            max_empty = empty_in_row;
            row_number = r + 1; // we add 1 to show row number from 1 to 6
        }
    }

    if (row_number != -1) {
        cout << "Row " << row_number << " has the most empty seats: " << max_empty << endl << endl;
    }
    else {
        cout << "No empty seats found in any row." << endl << endl;
    }
    cout << endl;
}


int main()
{
    //Step 1: 2D char array of 6 (rows) and 4 (columns)
    char seats[6][4]; //declaration of 2d array

    //Step 2: Function to Input Seating Chart
    cout << "Input Seating Chart: " << endl;
    input_seating_chart(seats);

    //Step 3: Function to Display Seating Chart
    cout << "Display Seating Chart: " << endl;
    display_seating_chart(seats);

    //Step 4: Book a seat (change 'E' to 'B')
    cout << "Book a seat (change 'E' to 'B'): " << endl;
    //Allows a user to book a seat if it's empty.
    book_seat(seats);

    //Step 5: Count available seats.
    cout << "Available Seats Count: " << endl;
    available_seats_count(seats);

    //Step 6:Find the row with maximum empty seats.
    cout << "Row with maximum empty seats: " << endl;
    row_max_empty_seats(seats);

    return 0;
}
