//
class Shape {
    public:
        virtual void draw() {
            cout << "Drawing a shape\n";
        }
    };
    
    class Circle : public Shape {
    public:
        void draw() override {
            cout << "Drawing a circle\n";
        }
    };
    