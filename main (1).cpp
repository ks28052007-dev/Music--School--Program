#include <iostream>
using namespace std;

int main()
{
    int N, i;
    float fee;
	float totalIncome = 0;
    int premiumCount = 0;

    cout << "Enter number of students: ";
    cin >> N;

    for (i = 1; i <= N; i++)
    {
        cout << "Enter monthly fee for student " << i << ": ";
        cin >> fee;

        if (fee > 1800)
        {
            cout << "Premium Course" << endl;
            premiumCount++;
        }

        totalIncome += fee;
    }

    cout << "\nTotal Income: " << totalIncome << endl;
    cout << "Premium Students Count: " << premiumCount << endl;

    return 0;
}