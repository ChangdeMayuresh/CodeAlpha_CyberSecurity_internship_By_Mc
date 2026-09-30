#include <iostream>
#include <cstring>

// Simulating a function that processes user input
void processUserInput(const char* input) {
    char buffer[15]; 
    
    // VULNERABILITY: Copying input into the buffer without checking its length
    strcpy(buffer, input); 
    
    std::cout << "User input processed: " << buffer << std::endl;
}

int main() {
    std::cout << "--- System Login ---" << std::endl;
    // Simulating normal input
    processUserInput("AdminUser");
    
    // Simulating a malicious input that exceeds 15 characters
    processUserInput("ThisInputIsWayTooLongAndWillCauseABufferOverflow");
    
    return 0;
}
