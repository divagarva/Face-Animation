#include <iostream>
#include <unistd.h> // For sleep function

void drawFace(bool eyesOpen) {
    std::cout << "\033[2J\033[1;1H"; // Clear the screen and move cursor to home position
    std::cout << "   +\"\"\"\"\"+ \n";
    if (eyesOpen) {
        std::cout << " [|  o o  |] \n"; // Eyes open
    } else {
        std::cout << " [|  - -  |] \n"; // Eyes closed
    }
    std::cout << "  |   ^   |  \n";
    std::cout << "  |  '-'  |  \n";
    std::cout << "  +-------+  \n";
}

int main() {
    while (true) {
        drawFace(true); // Draw face with eyes open
        sleep(2);       // Wait for 2 seconds
        drawFace(false); // Draw face with eyes closed
        sleep(1);       // Wait for 1 second
    }

    return 0;
}
