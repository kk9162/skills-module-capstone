#include <iostream>

int printNums() {
     using namespace std;
    for (int i = 0; i < 20; i++)
    {
        cout << "this is the line number: " << i << endl;
    }
    return 0;
}

int main() {
    using namespace std;
    
    cout << "somg new string" << endl;
    printNums();

    return 0;
}