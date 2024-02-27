#include <stdio.h>
#include <stdbool.h>

// DFA transition function
int transition(int state, char input) {
    if (state == 0 && input == 'a') {
        return 1;  // Move to state 1 after reading 'a'
    } else if (state == 1 && input == 'a') {
        return 2;  // Move to state 2 after reading 'a'
    } else if (state == 2 && input == 'b') {
        return 3;  // Move to state 3 after reading 'b'
    } else if (state == 3) {
        // Self-loop on state 3 for inputs 'a' or 'b'
        return 3;
    } else {
        return -1; // Invalid transition
    }
}

// DFA simulation function
bool simulateDFA(const char *input) {
    int state = 0;  // Initial state
    for (int i = 0; input[i] != '\0'; i++) {
        state = transition(state, input[i]);
        if (state == -1) {
            return false; // Invalid transition, reject input
        }
    }
    return state == 3; // Accept if in the final state (state 3)
}

int main() {
    char input[100];

    // Read input string
    printf("Enter a string over {a, b}: ");
    scanf("%s", input);

    // Simulate DFA and print result
    if (simulateDFA(input)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }

    return 0;
}

