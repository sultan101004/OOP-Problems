//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <iomanip>
//#include <sstream>
//
//using namespace std;
//
//// Struct to hold account data
//struct Account {
//    string name;
//    int accNo;
//    double amount;
//};
//
//int main() {
//    // Open the file
//    ifstream infile("bankFile.txt");
//
//    // Check if file opened successfully
//    if (!infile) {
//        cout << "Error opening the file\n";
//        return 1;
//    }
//
//    cout << "Opened successfully\n";
//
//    // Vector to store accounts
//    vector<Account> accounts;
//
//    // Temporary variables for reading
//    string line;
//    int lineCount = 0;
//
//    // Read data from file line by line
//    while (getline(infile, line)) {
//        stringstream ss(line);
//        string name;
//        int accNo;
//        double amount;
//
//        // Read name (up to first tab)
//        getline(ss, name, '\t');
//        // Read accNo and amount
//        ss >> accNo >> amount;
//
//        // Check if reading was successful
//        if (!ss.fail()) {
//            lineCount++;
//            // Create a new Account struct
//            Account acc;
//            acc.name = name;
//            acc.accNo = accNo;
//            acc.amount = amount;
//            // Add to vector
//            accounts.push_back(acc);
//            // Debug: Print what was read
//            cout << "Read line " << lineCount << ": " << name << " " << accNo << " " << amount << endl;
//        }
//        else {
//            cout << "Error parsing line " << lineCount + 1 << ": " << line << endl;
//        }
//    }
//
//    // Check if any data was read
//    if (lineCount == 0) {
//        cout << "No data read from file. Check if File1.txt is empty or incorrectly formatted.\n";
//    }
//    else {
//        cout << "\nTotal accounts read: " << accounts.size() << endl;
//        // Print all accounts with formatted output
//        cout << left << setw(20) << "Name" << setw(10) << "Account No" << setw(10) << "Amount" << endl;
//        cout << string(40, '-') << endl;
//        for (const Account& acc : accounts) {
//            cout << left << setw(20) << acc.name << setw(10) << acc.accNo << fixed << setprecision(2) << setw(10) << acc.amount << endl;
//        }
//    }
//
//    // Close the file
//    infile.close();
//
//    // Optional: Pause to see output in Visual Studio
//    // cin.get();
//
//    return 0;
//}