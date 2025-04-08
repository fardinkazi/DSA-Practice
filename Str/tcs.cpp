#include <iostream>
#include <vector>
using namespace std;

int main() {
    double income;
    cout << "Enter the total income: ";
    cin >> income;
    
    vector<string> materials;
    vector<double> expenses;
    
    cin.ignore(); // Ignore leftover newline

    while (true) {
        cout << "\nEnter the type of material (or 'done' to finish): ";
        string material;
        getline(cin, material);

        if (material == "done" || material == "DONE") {
            break; // Exit loop
        }

        cout << "Enter expenditure for " << material << ": ";
        double expenditure;
        cin >> expenditure;
        cin.ignore(); // Ignore leftover newline after entering expenditure

        materials.push_back(material);
        expenses.push_back(expenditure);
    }

    // Calculate total expenditure
    double totalExpenditure = 0.0;
    for (double expense : expenses) {
        totalExpenditure += expense;
    }

    double totalSavings = income - totalExpenditure;

    // Display summary
    cout << "\nTotal income: " << income << endl;
    cout << "Total expenditure: " << totalExpenditure << endl;
    cout << "Total savings: " << totalSavings << endl;

    cout << "\nExpenditures:\n";
    for (size_t i = 0; i < materials.size(); i++) {
        cout << "- " << materials[i] << ": " << expenses[i] << endl;
    }

    return 0; // Program exits here, not inside the loop
}