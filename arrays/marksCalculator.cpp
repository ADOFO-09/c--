#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    const int numStudents = 5; 
    const int numSubjects = 3;
    
    // Arrays to hold marks
    int marks[numStudents][numSubjects];
    int totalScores[numSubjects] = {0}; // Total scores for each subject
    int studentTotalScores[numStudents] = {0}; // Total score for each student
    float averageScores[numStudents]; // Average scores for each student

    // Input marks for each student
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter marks for Student " << (i + 1) << " (Subject 1, Subject 2, Subject 3): ";
        for (int j = 0; j < numSubjects; ++j) {
            cin >> marks[i][j];
            totalScores[j] += marks[i][j]; //  total score for each subject
            studentTotalScores[i] += marks[i][j]; //  total score for this student
        }
    }

    // Calculate average scores for each student
    for (int i = 0; i < numStudents; ++i) {
        averageScores[i] = static_cast<float>(studentTotalScores[i]) / numSubjects;
    }

    // Display the results
    cout << fixed << setprecision(2); 
    cout << "\nStudents\tSubject 1\tSubject 2\tSubject 3\t\tTotal\t\tAverage\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << (i + 1) << "\t\t";
        for (int j = 0; j < numSubjects; ++j) {
            cout << marks[i][j] << "\t\t";
        }
        cout << studentTotalScores[i] << "\t\t" << averageScores[i] << endl;
    }

    cout << "\nTotal Scores\t";
    for (int j = 0; j < numSubjects; ++j) {
        cout << totalScores[j] << "\t\t";
    }
    cout << endl; 

    return 0;
}
