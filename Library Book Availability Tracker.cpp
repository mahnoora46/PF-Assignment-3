//  Case Study 8: Library Book Availability Tracker
#include <iostream>
using namespace std;

//Step 2: Input Book Status
void input_books(char books[5][5]) {
    cout << "Enter Elements of 2d Array: " << endl;
    for (int r = 0; r < 5; r++) { // r for rows 
        for (int c = 0; c < 5; c++) { // c for columns 
            cout << "[Book = " << r + 1 << "][Status = " << c + 1 << "] = ";
            cin >> books[r][c];
        }
    }
    cout << endl;
}

// Step 3: Display Patient Records Status
void display_books(char books[5][5]) {
    for (int r = 0; r < 5; r++) { // r for rows 
        cout << "Book: " << r + 1 << "\t";
        for (int c = 0; c < 5; c++) { // c for columns 
            cout << "Status" << c + 1 << ": " << books[r][c] << " \t";
        }
        cout << endl;
    }
    cout << endl;
}

//Step 4:Count total available, issued, and missing books.
void count_books(char books[5][5]) {
    int a_count = 0, i_count = 0, m_count = 0;
    char current_status = 0;

    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            current_status = books[r][c];

            //Book Status Count
            if (current_status == 'A' || current_status == 'a') {
                a_count++;
            }
            else if (current_status == 'I' || current_status == 'i') {
                i_count++;
            }
            else if (current_status == 'M' || current_status == 'm') {
                m_count++;
            }
        }
    }
    cout << "Total Available Books: " << a_count << endl;
    cout << "Total Issued Books: " << i_count << endl;
    cout << "Total Missing Books: " << m_count << endl;
    cout << endl;
}

//Step 5:Identify rows (shelves) with the highest missing count.
void missing_book_row_count(char books[5][5]) {
    int max_missing = 0;
    int row_max_missing = 0;

    for (int r = 0; r < 5; r++) {
        int missing_count = 0;
        for (int c = 0; c < 5; c++) {
            if (books[r][c] == 'M' || books[r][c] == 'm') {
                missing_count++;
            }
        }

        if (missing_count > max_missing) {
            max_missing = missing_count;
            row_max_missing = r;
        }
    }
    cout << "Row(Shelf): " << row_max_missing + 1 << " with most missing books." << endl;

    cout << endl;
}

int main()
{
    //Step 1: 2D char array of 5 books (rows) and 10 book status (columns)
    char books[5][5];

    //Step 2: Input Book Status
    cout << "Enter Book Status: " << endl;
    cout << "('A' = Available, 'I' = Issued, 'M' = Missing ) " << endl;
    input_books(books);

    //Step 3: Display Book Status
    cout << "Display Book Status: " << endl;
    display_books(books);

    //Step 4:Count total available, issued, and missing books.
    cout << "Count total available, issued, and missing books: " << endl;
    count_books(books);

    //Step 5:Identify rows (shelves) with the highest missing count.
    cout << "Row with Highest Missing Book Count: " << endl;
    missing_book_row_count(books);

    return 0;
}
