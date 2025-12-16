#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
    double hydronium, pH;
    string param = argv[1];
    if(param == "--h" || param == "-help") {
    	cout<<endl<<"Insert the hydronium ion concentration (H+) to evaluate its pH"<<endl<<"Example: findph 0.03"<<endl<<endl<<"Use --h or -help to see this message"<<endl<<endl<<endl;
    } else {
    hydronium = stod(argv[1]);
    pH = -log10(hydronium);
    cout << "pH level is " << pH << endl;
	}
    return 0;
}
