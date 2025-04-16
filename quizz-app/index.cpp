#include <iostream>
using namespace std;

struct Question {
    string questionText;
    string options[4];
    char correctAnswer;
};

void color(const string &text, const string &color) {
    if (color == "green") {
        cout << "\033[1;32m" << text << "\033[0m";  
    } else if (color == "red") {
        cout << "\033[1;31m" << text << "\033[0m"; 
    } else {
        cout << text; 
    }
}

void ask(Question q, int &score) {
    char answer;
    cout << q.questionText << endl;
    for (int i = 0; i < 4; ++i) {
        cout << char('A' + i) << ". " << q.options[i] << endl;
    }
    cout << "Your answer: ";
    cin >> answer;
    
    if (toupper(answer) == q.correctAnswer) {
        color("Correct!\n", "green");
        score++;  
    } else {
        color("Incorrect! The correct answer is: ", "red");
        cout << q.correctAnswer << endl;  
    }
}

void add(Question quiz[], int &questionCount) {
    Question newQuestion;
    cout << "Enter the question: ";
    cin.ignore();  
    getline(cin, newQuestion.questionText);
    
    for (int i = 0; i < 4; ++i) {
        cout << "Enter option " << char('A' + i) << ": ";
        getline(cin, newQuestion.options[i]);
    }
    cout << "Enter the correct answer (A, B, C, or D): ";
    cin >> newQuestion.correctAnswer;
    quiz[questionCount] = newQuestion;
    questionCount++;
}

int main() {
    Question quiz[10] = {
        {"What is the capital of France?", {"Paris", "London", "Rome", "Madrid"}, 'A'},
        {"What is 2 + 2?", {"3", "4", "5", "6"}, 'B'}
    };
    int questionCount = 2;
    int choice;

    while (true) {
        cout << "\n--- Quiz App ---\n";
        cout << "1. Start Quiz\n";
        cout << "2. Add Question\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int score = 0;
                cout << "\nStarting quiz...\n";
                for (int i = 0; i < questionCount; ++i) {
                    ask(quiz[i], score);
                }
                cout << "\nQuiz finished! Your score: " << score << "/" << questionCount << "\n";
                break;
            }
            case 2:
                add(quiz, questionCount);
                break;
            case 3:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
