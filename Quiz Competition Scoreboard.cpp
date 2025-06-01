// Case Study 5: Quiz Competition Scoreboard
#include <iostream>
using namespace std;

//Step 1: Input quiz data
void input_quiz(int quiz[6][4]) {
    for (int r = 0; r < 6; r++) {
        for (int c = 0; c < 4; c++) {
            cout << "[Team: " << r + 1 << "] Score: " << c + 1 << "] = ";
            cin >> quiz[r][c];
        }
    }

    cout << endl;
}

//Step 2: Dislay quiz data
void display_quiz(int quiz[6][4]) {
    for (int r = 0; r < 6; r++) {
        cout << "Team: " << r + 1 << "\t\t";
        for (int c = 0; c < 4; c++) {
            cout << "Score " << c + 1 << ": \t";
            cout << quiz[r][c] << "\t";
        }
        cout << endl;
    }

    cout << endl;
}

//Step 3: Final Score per Team
void final_score(int quiz[6][4]) {
    int final = 0;
    for (int r = 0; r < 6; r++) {
        cout << "Team " << r + 1 << "\t Score: ";
        for (int c = 0; c < 4; c++) {
            final += quiz[r][c];
            cout << quiz[r][c];
            if (c < 3) {
                cout << " + ";
            }
        }
        cout << " = " << final << endl;
        final = 0;
    }

    cout << endl;
}

//Step 4: Find Winner and Runner up
//means finding max and second max
void winner_runner_up(int quiz[6][4]) {
    int winner = -1;  //max
    int runner_up = -1;  // second max
    int winner_index = -1;
    int runner_up_index = -1;

    for (int r = 0; r < 6; r++) {
        int total = 0;
        for (int c = 0; c < 4; c++) {
            total += quiz[r][c];
        }

        if (total > winner) {
            // shift current winner to runner up
            runner_up = winner;
            runner_up_index = winner_index;

            // update winner
            winner = total;
            winner_index = r;
        }
        else if (total > runner_up) {
            runner_up = total;
            runner_up_index = r;
        }
    }

    cout << "Winner: Team " << winner_index + 1 << " with Score = " << winner << endl;
    cout << "Runner-up: Team " << runner_up_index + 1 << " with Score = " << runner_up << endl;



    cout << endl;
}

//Step 5: Team that failed to score more than 10 points
void team_less_10pts(int quiz[6][4]) {
    for (int r = 0; r < 6; r++) {
        int total = 0;
        for (int c = 0; c < 4; c++) {
            total += quiz[r][c];  // add up the scores
        }
        if (total <= 10) {
            cout << "Team " << r + 1 << " scored " << total << " points (less than or equal to 10)" << endl;
        }
    }
    cout << endl;
}

int main()
{
    //2D array of 6 team(rows) and 4 columns(quiz score)
    int quiz[6][4];

    //Step 1: Input quiz data
    cout << "Enter Quiz Score:" << endl;
    input_quiz(quiz);

    //Step 2: Dislay quiz data
    cout << "Dislay Quiz Score:" << endl;
    display_quiz(quiz);

    //Step 3: Final Score per Team
    cout << "Final Score per Team: " << endl;
    final_score(quiz);

    //Step 4: Find Winner and Runner up
    cout << "Winner and Runner up: " << endl;
    winner_runner_up(quiz);

    //Step 5: Team that failed to score more than 10 points
    cout << "Any Team that failed to score more than 10 points: " << endl;
    team_less_10pts(quiz);


    return 0;
}