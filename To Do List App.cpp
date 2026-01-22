#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to display menu
void showMenu() {
    cout << "\n--- TO-DO LIST MENU ---\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Remove Task\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

// Function to display tasks
void viewTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    cout << "\nYour Tasks:\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

int main() {
    vector<string> tasks;
    int choice;

    do {
        showMenu();
        cin >> choice;
        cin.ignore(); // Clear input buffer

        if (choice == 1) {
            string task;
            cout << "Enter task: ";
            getline(cin, task);
            tasks.push_back(task);
            cout << "Task added successfully.\n";
        }
        else if (choice == 2) {
            viewTasks(tasks);
        }
        else if (choice == 3) {
            viewTasks(tasks);
            if (!tasks.empty()) {
                int index;
                cout << "Enter task number to remove: ";
                cin >> index;

                if (index >= 1 && index <= tasks.size()) {
                    tasks.erase(tasks.begin() + index - 1);
                    cout << "Task removed successfully.\n";
                } else {
                    cout << "Invalid task number.\n";
                }
            }
        }
        else if (choice == 4) {
            cout << "Exiting program. Goodbye!\n";
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}

