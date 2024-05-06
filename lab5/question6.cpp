#include <iostream>
#include <fstream>
#include <string>
#include <cctype> 

using namespace std;

int countVowels(const string& str) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char c : str) {
        if (vowels.find(c) != string::npos) {
            count++;
        }
    }
    return count;
}

int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isalpha(c) && !inWord) {
            count++;
            inWord = true;
        } else if (!isalpha(c)) {
            inWord = false;
        }
    }
    return count;
}

string reverseString(const string& str) {
    string reversed;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed.push_back(str[i]);
    }
    return reversed;
}

string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalize = false;
    
    for (char& c : result) {
        if (isalpha(c)) {
            if (capitalize) {
                c = toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}

int main() {
    ifstream inFile("test.txt"); 
    if (!inFile) {
        cerr << "Error: Unable to open input file." << endl;
        return 1;
    }

    string fileData;
    getline(inFile, fileData);

    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount << endl;

    int wordCount = countWords(fileData);
    cout << "Number of words: " << wordCount << endl;

    string reversedStatement = reverseString(fileData);
    cout << "Reversed statement: " << reversedStatement << endl;

    string capitalizedStatement = capitalizeSecondLetter(fileData);
    cout << "Capitalized second letter: " << capitalizedStatement << endl;

    inFile.close(); 

    ofstream outFile("test.txt");
    if (!outFile) {
        cerr << "Error: Unable to open output file." << endl;
        return 1;
    }

    outFile << capitalizedStatement << endl;
    cout << "Updated '.txt file' with capitalized second letters." << endl;

    outFile.close();

    return 0;
}
