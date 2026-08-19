#include <iostream>
using namespace std;

class students{

    private:
        int roll;
        string name;
        string branch;

    public:

    students(int roll, string name, string branch){

        this->roll = roll;
        this->name = name;
        this->branch = branch;
    }

    void displayName(){
        cout << "My name is " << name << endl;
        cout << "I study " << branch << endl;
        cout << "My roll no. is  " << roll << endl;
    }

    void study(){
        cout << "i study" << branch << endl;
    }
};

int main() {

    students st1(12, "ashish", "computer science");
    students st2(13, "yash", "artificial I");

    st1.displayName();
    st1.study();
    st2.displayName();
    st2.study();



    return 0;
}   