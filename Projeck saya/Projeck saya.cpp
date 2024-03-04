#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status(double c) {
    if (c >= 60)
        return "lulus";
    else
        return "gagal";
}

string status2(double r, double n) {
    if (r >= 60 && n >= 70)
        return "lulus";
    else
        return "gagal";
}

string status3(double r, double n, double m) {
    if (r >= 60 || n >= 70 && m >= 80)
        return "lulus";
    else
        return "gagal";
}

int main() {
    double nilM, nilF; // Changed nilB to nilF (Physics)

    cout << "Masukkan Nilai Matematika = ";
    cin >> nilM;
    cout << "Masukkan Nilai Fisika = "; // Changed "Bahasa" to "Fisika"
    cin >> nilF;

    cout << "Status Kelulusan : " << status(rerata(nilM, nilF));
    cout << "\nStatus Kelulusan ke 2 : " << status2(rerata(nilM, nilF), nilM);
    cout << "\nStatus Kelulusan ke 3 : " << status3(rerata(nilM, nilF), nilM, nilF); // Changed nilB to nilF (Physics)
    return 0;
}
