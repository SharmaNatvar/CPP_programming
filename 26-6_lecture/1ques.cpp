#include <iostream>

using namespace std;

class Calculate {
public:
    virtual void calculator() = 0;
};

class Circle : public Calculate {
private:
    float radius;

public:
    void set(float n) {
        radius = n;
    }

    void calculator() {
        cout << "Area of circle: " << 22 / 7 * radius<< endl;
    }
};

class Triangle : public Calculate {
private:
    float base;
    float height;

public:
    void set(float n, float p) {
        base = n;
        height = p;
    }

    void calculator() {
        cout << "Area of triangle: " << (base * height) / 2 << endl;
    }
};

class Rectangle : public Calculate {
private:
    float width;
    float height;

public:
    void set(float n, float p) {
        width = n;
        height = p;
    }

    void calculator() {
        cout << "Area of rectangle: " << width * height << endl;
    }
};

int main() {
    Circle obj;
    Triangle obj1;
    Rectangle obj2;

    obj.set(12.3);
    obj1.set(2.2, 4);
    obj2.set(13, 16);

    obj.calculator();
    obj1.calculator();
    obj2.calculator();

    return 0;
}

