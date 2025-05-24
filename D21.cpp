//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class PatientAccount {
//private:
//    double charges;
//    int days;
//    static const double daily_rate;
//
//public:
//    PatientAccount() : charges(0), days(0) {}
//
//    void addCharges(double amount) {
//        charges += amount;
//    }
//
//    void setDays(int daysSpent) {
//        days = daysSpent;
//    }
//
//    double calculateTotalCharges() const {
//        return charges + (days * daily_rate);
//    }
//};
//
//const double PatientAccount::daily_rate = 500.0; // Hospital's daily rate
//
//class Surgery {
//private:
//    static const double surgery_costs[5];
//
//public:
//    void addSurgeryCharges(PatientAccount& account, int surgeryType) {
//        if (surgeryType >= 0 && surgeryType < 5) {
//            account.addCharges(surgery_costs[surgeryType]);
//        }
//        else {
//            cout << "Invalid surgery type." << endl;
//        }
//    }
//};
//
//const double Surgery::surgery_costs[5] = { 1000.0, 1500.0, 2000.0, 2500.0, 3000.0 };
//
//class Pharmacy {
//private:
//    static const double medication_costs[5];
//
//public:
//    void addMedicationCharges(PatientAccount& account, int medicationType) {
//        if (medicationType >= 0 && medicationType < 5) {
//            account.addCharges(medication_costs[medicationType]);
//        }
//        else {
//            cout << "Invalid medication type." << endl;
//        }
//    }
//};
//
//const double Pharmacy::medication_costs[5] = { 100.0, 150.0, 200.0, 250.0, 300.0 };
//
//int main() {
//    PatientAccount patient;
//    Surgery surgery;
//    Pharmacy pharmacy;
//    int days, surgeryType, medicationType;
//
//    cout << "Enter number of days spent in the hospital: ";
//    cin >> days;
//    patient.setDays(days);
//
//    cout << "Select a surgery type (0-4): ";
//    cin >> surgeryType;
//    surgery.addSurgeryCharges(patient, surgeryType);
//
//    cout << "Select a medication type (0-4): ";
//    cin >> medicationType;
//    pharmacy.addMedicationCharges(patient, medicationType);
//
//    cout << "Total charges: $" << patient.calculateTotalCharges() << endl;
//
//    return 0;
//}