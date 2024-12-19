#include <iostream>
#include <limits>
using namespace std;

int main() {
    const int SENTINEL = -1;  
    int num;

    cout << "Enter integers (enter -1 to stop):" << endl;

    while (true) {
        try {
            
            cout << "Enter a number: ";
            cin >> num;

            if (cin.fail()) {
                cin.clear();  
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
                throw invalid_argument("Invalid input type. Please enter an integer.");
            }

            // Sentinel value to stop the loop
            if (num == SENTINEL) {
                cout << "Program terminated by sentinel value." << endl;
                break;
            }

            // Check for out-of-range values (example: range [-100, 100])
            if (num < -100 || num > 100) {
                throw out_of_range("Value out of range. Please enter a value between -100 and 100.");
            }

            // If valid, print the number
            cout << "You entered: " << num << endl;

        } catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        } catch (const out_of_range& e) {
            cout << "Error: " << e.what() << endl;
        } catch (...) {
            cout << "An unexpected error occurred." << endl;
        }
    }

    return 0;
}