#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double rent_or_mortgage;
    double phones;
    double internet;
    double utilities;
    double cable;

    cout << "enter your monthly rent or mortgage payment: $";
    cin >> rent_or_mortgage;

    cout << "enter your monthly phone bills: $";
    cin >> phones;

    cout << "enter your monthly internet service bill: $";
    cin >> internet;

    cout << "enter your monthly utilities bills: $";
    cin >> utilities;

    cout << "enter your monthly cable bills: $";
    cin >> cable;

    double totalMonthlyCost = rent_or_mortgage + phones + internet + utilities + cable;
    double totalAnnual = totalMonthlyCost * 12.0;

    cout << fixed << setprecision(2);

    cout << "--- housing costs results ---" << endl;
    cout << "total monthly cost: $" << totalMonthlyCost << endl;
    cout << "total annual cost:  $" << totalAnnual << endl;
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}