/*
#include <iostream>

class Singleton {
private:
    // Private constructor
    Singleton() {
        std::cout << "Singleton Instance Created\n";
    }

    // Delete copy constructor and assignment operator
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

public:
    // Static method to access the single instance
    static Singleton& getInstance() {
        static Singleton instance; // Created only once, destroyed automatically
        return instance;
    }

    void display() {
        std::cout << "Singleton instance method called\n";
    }
};

int main() {
    // Get the single instance of Singleton
    Singleton& instance1 = Singleton::getInstance();
    instance1.display();

    // Get the same instance
    Singleton& instance2 = Singleton::getInstance();
    instance2.display();

    // Prove that both are the same instance
    std::cout << "Addresses: " << &instance1 << " and " << &instance2 << '\n';

    return 0;
}
*/
