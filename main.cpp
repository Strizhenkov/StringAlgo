#include <fstream>
#include <string>
#include <iostream>

using namespace std;

string make_string(string s) {
    return '<' + s + '>';
}

void run_tests() {
    ifstream file1;
    string str1;
    file1.open("test1.txt");
    getline(file1, str1);
    if (make_string(str1) == "<123>") {
        cout << "Test number 1 is OK!" << '\n';
    } else {
        cout << "WA on test number 1!" << '\n';
    }

    ifstream file2;
    string str2;
    file2.open("test2.txt");
    getline(file2, str2);
    if (make_string(str2) == "<Hello>") {
        cout << "Test number 2 is OK!" << '\n';
    } else {
        cout << "WA on test number 2!" << '\n';
    }

    ifstream file3;
    string str3;
    file3.open("test3.txt");
    getline(file3, str3);
    if (make_string(str3) == "<.>") {
        cout << "Test number 3 is OK!" << '\n';
    } else {
        cout << "WA on test number 3!" << '\n';
    }

    ifstream file4;
    string str4;
    file4.open("test4.txt");
    getline(file4, str4);
    if (make_string(str4) == "<123456789>") {
        cout << "Test number 4 is OK!" << '\n';
    } else {
        cout << "WA on test number 4!" << '\n';
    }

    ifstream file5;
    string str5;
    file5.open("test5.txt");
    getline(file5, str5);
    if (make_string(str5) == "<!>") {
        cout << "Test number 5 is OK!" << '\n';
    } else {
        cout << "WA on test number 5!" << '\n';
    }
}

int main() {
    run_tests();
    return 0;
}