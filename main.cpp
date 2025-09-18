#include <iostream>

void printMessage() {
    std::cout << "Hello from printMessage!" << std::endl;
}

int main() {
    std::cout << "Program started." << std::endl;

    int* p = new int[5];
    for (int i = 0; i < 5; ++i)
        p[i] = i * 10;

    for (int i = 0; i < 5; ++i)
        std::cout << "Value: " << p[i] << std::endl;

    printMessage();

    return 0;  // Oops: memory leak (forgot to delete[])
}
