#include <iostream>

int printNums() {
     using namespace std;
    for (int i = 0; i < 20; i++)
    {
        cout << "this is line number: " << i << endl;
    }
    return 0;
}

int main() {
    // Include the namespace std
    using namespace std;
    
    cout << "hello" << endl;
    printNums();

    return 0;
}

