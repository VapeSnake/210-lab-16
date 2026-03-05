// COMSC-210 | Lab 16 | Noel Mier-Luna

// Using Lab 14's code, we will add a default, parameter, and partial constructor.

#include <iostream>
#include <iomanip>

using namespace std;

const int TABLE_WIDTH = 5; // Constant for table width, used in print() function.

class Color {
    int red;
    int green; // Private member variables to store color components.
    int blue;

    public:
    // Constructors
    Color() {red = 0, green = 0, blue = 0;} // Default constructor initializes RGB values to 0.
    Color(int r) {red = r, green = 0, blue = 0;} // Partial constructor for initializing red member variable only.
    Color(int r, int g) {red = r, green = g, blue = 0;} // Partial constructor for initializing red and green member variables.
    Color(int r, int g, int b) {red = r, green = g, blue = b;} // Parameter constructor for initializing all RGB values.

    int getRed() const {
            return red;
        }
    void setRed(int r) {
        red = r;
    }
    int getGreen() const {
        return green;
    } // Getter functions const to avoid modifying objects. Used by print() to access private member variables.
    void setGreen(int g) {
        green = g;
    } // Setter functions to modify private member variables.
    int getBlue() const {
        return blue;
    }
    void setBlue(int b) {
        blue = b;
    }

    void print() const {
        cout << setw(TABLE_WIDTH) << "R: " << getRed() << " " <<
            setw(TABLE_WIDTH) << "G: " << getGreen() << " " <<
            setw(TABLE_WIDTH) << "B: " << getBlue() << endl; // Prints color's RGB values.
    }
};

int main() {
    /*
    Color Yellow; // RGB values are 255, 224, 32.
    Yellow.setRed(255);
    Yellow.setGreen(224); // Setting RGB values for Yellow color using setter functions.
    Yellow.setBlue(32); // Useful for controlled access to private member variables.
    cout << "Yellow's RGB values are: " << endl;
    Yellow.print();

    Color Purple; // RGB values are 160, 32, 255.
    Purple.setRed(160);
    Purple.setGreen(32);
    Purple.setBlue(255);
    cout << "Purple's RGB values are: " << endl;
    Purple.print();

    Color MintTeal; // RGB values are 102, 205, 170.
    MintTeal.setRed(102);
    MintTeal.setGreen(205);
    MintTeal.setBlue(170);
    cout << "Mint-teal's RGB values are: " << endl;
    MintTeal.print();*/

    Color Default; // Using default constructor to create a Color object with RGB values initialized to 0.
    cout << "Default's RGB values are: " << endl;
    Default.print();
    Color Red(255); //
 
    return 0;
}