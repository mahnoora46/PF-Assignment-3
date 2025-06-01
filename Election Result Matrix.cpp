//  Case Study 10: Election Result Matrix
#include <iostream>
using namespace std;

// Step 2: Input votes
void input_votes(int votes[4][6]) {
    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < 6; c++) {
            cout << "[Candidate " << r + 1 << "][Polling Station " << c + 1 << "] = ";
            cin >> votes[r][c];
        }
    }
    cout << endl;
}

// Step 3: Display all votes
void display_votes(int votes[4][6]) {
    for (int r = 0; r < 4; r++) {
        cout << "Candidate " << r + 1 << ": ";
        for (int c = 0; c < 6; c++) {
            cout << votes[r][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Step 4: Total votes per candidate
void total_votes_per_candidate(int votes[4][6]) {
    for (int r = 0; r < 4; r++) {
        int totalvotes_candidate = 0;
        for (int c = 0; c < 6; c++) {
            totalvotes_candidate += votes[r][c];
        }
        cout << "Total votes for Candidate " << r + 1 << ": " << totalvotes_candidate << endl;
    }
    cout << endl;
}

// Step 5: Total votes per polling station
void total_votes_per_station(int votes[4][6]) {
    for (int c = 0; c < 6; c++) {
        int totalvotes_station = 0;
        for (int r = 0; r < 4; r++) {
            totalvotes_station += votes[r][c];
        }
        cout << "Total votes at Polling Station " << c + 1 << ": " << totalvotes_station << endl;
    }
    cout << endl;
}

// Step 6: Find candidate with highest total votes
void highest_votes(int votes[4][6]) {
    int max_votes = 0;
    int winner = 0;
    for (int r = 0; r < 4; r++) {
        int total_votes = 0;
        for (int c = 0; c < 6; c++) {
            total_votes += votes[r][c];
        }
        if (total_votes > max_votes) {
            max_votes = total_votes;
            winner = r;
        }
    }
    cout << "Candidate " << winner + 1 << " wins with " << max_votes << " votes." << endl;
    cout << endl;
}

// Step 7: Polling stations with less than 100 votes
void stations_less_than_100(int votes[4][6]) {
    for (int c = 0; c < 6; c++) {
        int total = 0;
        for (int r = 0; r < 4; r++) {
            total += votes[r][c];
        }

        if (total < 100) {
            cout << "Polling Station " << c + 1 << " has less than 100 votes." << total << endl;
        }
    }
}

int main()
{
    //Step 1: 2D array of 4 candidates (rows) and 6 polling stations (columns)
    int votes[4][6];

    //Step 2: Input Votes
    cout << "Enter Votes: " << endl;
    input_votes(votes);

    //Step 3: Display Votes
    cout << "Display Votes: " << endl;
    display_votes(votes);

    //Step 4: Calculate total votes per candidate 
    cout << "Calculate total votes per candidate: " << endl;
    total_votes_per_candidate(votes);

    //Step 5: Calculate total votes per polling station. 
    cout << "Calculate total votes per polling station: " << endl;
    total_votes_per_station(votes);

    //Step 5:Candiate with highest votes (Winner)
    cout << "Candiate with highest votes (Winner): " << endl;
    highest_votes(votes);

    //Step 6: Polling Station with less than 100 votes
    cout << "Polling Station with less than 100 votes: " << endl;
    stations_less_than_100(votes);

    return 0;
}
