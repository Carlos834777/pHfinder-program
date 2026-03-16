#include <iostream>
#include <cmath>
#include <string>
#include <stdexcept>
using namespace std;
int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Error: No input provided." << endl;
        cout << "Usage: findph [concentration] or findph --h" << endl;
        return 1;
    }
    string param = argv[1];
    if (param == "--h" || param == "-help") {
        cout << "\nInsert the hydronium ion concentration (H+) to evaluate its pH" << endl;
        cout << "Example: findph 0.03" << endl;
        cout << "\nUse --h or -help to see this message\n" << endl;
        return 0;
    }
    try {
        double hydronium = stod(param);
        if (hydronium <= 0) {
            cerr << "Error: Hydronium concentration must be greater than 0." << endl;
            return 1;
        }
        double pH = -log10(hydronium);
        cout << "pH level is " << pH << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: '" << param << "' is not a valid number." << endl;
        return 1;
    } catch (const out_of_range& e) {
        cerr << "Error: Number is too large or too small." << endl;
        return 1;
    }
    return 0;
}
