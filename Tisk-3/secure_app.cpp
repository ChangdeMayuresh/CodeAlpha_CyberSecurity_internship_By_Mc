#include <iostream>
#include <string>

// Simulating a function that processes user input securely
void processUserInput(const std::string& input) {
    // SECURE: std::string automatically handles memory allocation and sizing
    // No buffer overflow can occur here, regardless of input length.
    std::cout << "User input processed: " << input << std::endl;
}

int main() {
    std::cout << "--- Secure System Login ---" << std::endl;
    // Normal input
    processUserInput("AdminUser");
    
    // Previously malicious input is now handled safely
    processUserInput("ThisInputIsWayTooLongButWillNowBeHandledSafely");
    
    return 0;
}
