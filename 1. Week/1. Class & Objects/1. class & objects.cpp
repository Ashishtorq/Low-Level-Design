#include <iostream>
using namespace std;

class Car{
    private:
        string brand;
        string model;
        string year;

    public:

        Car(string brand, string model, string year){
            this->brand = brand;
            this->model = model;
            this->year = year;
        }

        void startEngine(){
            cout << "engine of" << brand << "has been started" << endl;
        }

};

int main() {

    Car car1("honda", "civic", "2300");

    car1.startEngine();
    return 0;
}   