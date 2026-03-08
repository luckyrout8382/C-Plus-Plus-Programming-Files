#include <iostream>
using namespace std;

#define Size 10 // Define the size of the stack
int stack[Size]; // Declare the stack array
int top = -1; // Initialize the top of the stack

bool isFull () {
    return (top == Size - 1); // Check if the stack is full
}
bool isEmpty () {
    return (top == -1); // Check if the stack is empty
}

// Push Operation.
void push (int value) {
    if (isFull ()) {
        cout << "stack Overflow" << endl; // Handle stack overflow
    } else {
        top ++; // Increment the top index
        stack[top] = value; // Add the value to the stack
        cout << value << " - Pushed to stack" << endl; // Confirm the push operation
    }
}

// Pop Operation.
void pop () {
    if (isEmpty ()) {
        cout << "stack Underflow" << endl; // Handle stack underflow
    } else {
        int value = stack[top]; // Get the top value
        top --; // Decrement the top index
        cout << value << " - Popped from stack" << endl; // Confirm the pop operation
    }
}

//Peek Operation.
void peek () {
    if (isEmpty ()) {
        cout << "stack is empty" << endl; // Handle empty stack
    } else {
        cout << "Top element is: " << stack[top] << endl; // Display the top element
    }
}

// Display Operation.
void display () {
    if (isEmpty ()) {
        cout << "stack is empty" << endl; // Handle empty stack
    } else {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) { // Loop through the stack from top to bottom
            cout << stack[i] << " "; // Display each element
        }
        cout << endl; // New line after displaying the stack
    }
}
int main () {
    int n = 0;
    int value = 0;

    while( n != 10 ) { // Loop until the user chooses to exit
        cout << "__LIFO_-_Last_In_First_Out__Menu__" << endl;
        cout << "\t1. Push - Add" << endl;
        cout << "\t2. Pop - Remove" << endl;
        cout << "\t3. Peek - View Top" << endl;
        cout << "\t4. Display - Show All" << endl;
        cout << "\t5. Exit" << endl;
        cout << "\tPlease Select => ";
        cin >> n;
        cout << endl;

        switch (n) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value); // Call the push function
                cout << endl;
                break;
            case 2:
                pop(); // Call the pop function
                cout << endl;
                break;
            case 3:
                peek(); // Call the peek function
                cout << endl;
                break;
            case 4:
                display(); // Call the display function
                cout << endl;
                break;
            case 5:
                exit(0); // Exit the program
                cout << "Exiting..." << endl; // Confirm exit
                cout << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl; // Handle invalid input
                cout << endl;
        }
    }
    return 0;
}