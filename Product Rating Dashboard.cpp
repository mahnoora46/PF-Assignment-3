//  Case Study 7: Product Rating Dashboard
#include <iostream>
using namespace std;

//Step 2: Input User Ratings
void input_ratings(int ratings[5][10]) {
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 10; c++) {
            cout << "[Product: " << r + 1 << "] User: " << c + 1 << "] = ";
            cin >> ratings[r][c];
        }
    }

    cout << endl;
}

//Step 3: Display User Ratings
void display_ratings(int ratings[5][10]) {
    for (int r = 0; r < 5; r++) {
        cout << "Product " << r + 1 << ":\t";
        for (int c = 0; c < 10; c++) {
            cout << "R" << c + 1 << ": ";
            cout << ratings[r][c] << "\t";
        }
        cout << endl;
    }

    cout << endl;
}

//Step 4: Average rating of each product
void average_ratings(int ratings[5][10]) {
    //float avg = 0.0;
    for (int r = 0; r < 5; r++) {
        float avg = 0.0;
        int total_ratings = 0;
        cout << "Product " << r + 1 << "\t Total Average Rating: ";
        for (int c = 0; c < 10; c++) {
            total_ratings += ratings[r][c];
            avg = total_ratings / 10.0;
        }
        cout << avg << endl;
    }
    cout << endl;
}

//Step 5: Count products of with a perfect rating
void perfect_rating(int ratings[5][10]) {
    int perfect_count = 0;
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 10; c++) {
            if (ratings[r][c] == 5) {
                perfect_count++;
            }
        }
    }
    cout << "Total perfect ratings: " << perfect_count << "." << endl;
    cout << endl;
}

//Step 6: Display products with worst average score
void worst_average(int ratings[5][10]) {
    int worst_index = 0;
    float worst_avg = 100;

    for (int r = 0; r < 5; r++) {
        int total = 0;
        for (int c = 0; c < 10; c++) {
            total += ratings[r][c];
        }

        float avg = total / 10.0;

        if (avg < worst_avg) {
            worst_avg = avg;
            worst_index = r;
        }
    }

    cout << "Product " << worst_index + 1 << " has the worst average rating: " << worst_avg << endl;
    cout << endl;
}

int main() {

    //Step 1: 2D array of 5 products (rows) and 10 users(columns)
    int ratings[5][10];

    //Step 2: Input USer Ratings
    cout << "Enter User Ratings (1 to 5): " << endl;
    input_ratings(ratings);

    //Step 3: Display USer Ratings
    cout << "Display User Ratings: " << endl;
    display_ratings(ratings);

    //Step 4: Average rating of each product
    cout << "Average Rating of Each Product: " << endl;
    average_ratings(ratings);

    //Step 5: Count products of with a perfect rating
    cout << "Product Count with a perfect rating: " << endl;
    perfect_rating(ratings);

    //Step 6: Display products with worst average score
    cout << "Products with worst average score: " << endl;
    worst_average(ratings);

    return 0;
}
