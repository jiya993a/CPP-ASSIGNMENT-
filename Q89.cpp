//
class Entity {
    public:
        virtual void display() = 0; // Pure virtual function
    };
    
    class Person : virtual public Entity {
    public:
        void display() override {
            cout << "Person Entity\n";
        }
    };
    
    class Organization : virtual public Entity {
    public:
        void display() override {
            cout << "Organization Entity\n";
        }
    };
    