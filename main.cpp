#include <iostream>
using namespace std;

// Variables to store votes for each candidate
int votesA = 0, votesB = 0, votesC = 0;

// Function to display candidates and take votes
void vote() {
    int choice;
    cout << "\n--- Candidates ---\n";
    cout << "1. Candidate A\n";
    cout << "2. Candidate B\n";
    cout << "3. Candidate C\n";
    cout << "Enter your vote (1-3): ";
    cin >> choice;

    // Increase vote count based on the user's choice
    switch (choice) {
        case 1:
            votesA++;
            cout << "You voted for Candidate A.\n";
            break;
        case 2:
            votesB++;
            cout << "You voted for Candidate B.\n";
            break;
        case 3:
            votesC++;
            cout << "You voted for Candidate C.\n";
            break;
        default:
            cout << "Invalid choice, try again.\n";
            vote(); // Ask again if input is invalid
    }
}

// Function to show voting results
void showResults() {
    cout << "\n--- Voting Results ---\n";
    cout << "Candidate A: " << votesA << " votes\n";
    cout << "Candidate B: " << votesB << " votes\n";
    cout << "Candidate C: " << votesC << " votes\n";
}

// Main function
int main() {
    int choice;
    
    do {
        // Display menu
        cout << "\n--- Voting Menu ---\n";
        cout << "1. Vote\n";
        cout << "2. View Results\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                vote();
                break;
            case 2:
                showResults();
                break;
            case 3:
                cout << "Exiting the system...\n";
                break;
            default:
                cout << "Invalid choice, try again.\n";
        }

    } while (choice != 3);

    return 0;
}