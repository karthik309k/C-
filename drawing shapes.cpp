#include <iostream>
#include <vector>
using namespace std;

// Base class with pure virtual function
class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function
    virtual ~Shape() {}           // Virtual destructor
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a Rectangle." << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a Triangle." << endl;
    }
};

// Function to create and populate an array of Shape pointers
vector<Shape*> createShapes() {
    vector<Shape*> shapes;
    shapes.push_back(new Circle());
    shapes.push_back(new Rectangle());
    shapes.push_back(new Triangle());
    return shapes;
}

// Main function to test
int main() {
    // Dynamically create an array of shapes
    vector<Shape*> shapes = createShapes();

    // Call the draw() function for each shape
    for (Shape* shape : shapes) {
        shape->draw();
    }

    // Clean up memory
    for (Shape* shape : shapes) {
        delete shape;
    }
    shapes.clear();

    return 0;
}