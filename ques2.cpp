#include <iostream>
#include <vector>
#include <cctype> // For toupper
using namespace std;

// Function to capitalize the first character of each string in the vector
vector<string> capitalizeFirst(vector<string> &vec) {
    for (string &str : vec) {
        if (!str.empty()) {
            str[0] = toupper(str[0]);
        }
    }
    return vec;
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    
    vector<string> vec(n);
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    // Capitalizing the first character of each string
    vector<string> capitalizedVec = capitalizeFirst(vec);
    
    cout << "The capitalized strings are:" << endl;
    for (const string &str : capitalizedVec) {
        cout << str << endl;
    }
    
    return 0;
}

