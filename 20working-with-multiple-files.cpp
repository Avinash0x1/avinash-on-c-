//working with multiple files
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing to first file
    ofstream fout;
    fout.open("country.txt");
    fout << "USA" << endl;
    fout << "UK" << endl;
    fout << "SouthKorea" << endl;
    fout.close();
    
    // Writing to second file
    fout.open("capital.txt");
    fout << "Washington, D.C." << endl;
    fout << "London" << endl;
    fout << "Seoul" << endl;
    fout.close();
    
    // Reading from files
    const int N = 80;
    char line[N];
    ifstream fin;
    
    // Reading and displaying countries
    fin.open("country.txt");
    cout << "Countries:" << endl;
    while (fin.getline(line, N)) {
        cout << line << endl;
    }
    fin.close();
    
    // Reading and displaying capitals
    fin.open("capital.txt");
    cout << "\nCapitals:" << endl;
    while (fin.getline(line, N)) {
        cout << line << endl;
    }
    fin.close();
    
    return 0;
}