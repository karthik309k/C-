#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
public:
    virtual void displayArea() const = 0; // Pure virtual function
    virtual ~Shape() {}                  // Virtual destructor
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void displayArea() const override {
        double area = length * width;
        cout << "Rectangle Area: " << area << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    void displayArea() const override {
        double area = M_PI * radius * radius; // M_PI is defined in <cmath>
        cout << "Circle Area: " << area << endl;
    }
};

// Main function to test runtime polymorphism
int main() {
    // Create objects of derived classes
    Shape* rect = new Rectangle(10.0, 5.0);
    Shape* circ = new Circle(7.0);

    // Call displayArea() using base class pointers
    rect->displayArea();
    circ->displayArea();

    // Clean up memory
    delete rect;
    delete circ;

    return 0;
}