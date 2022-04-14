// Bubble Sort Notes

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Create a vector and fill with 25 random numbers
    srand(unsigned(time(0)));
    vector<int> numbers;
    for (int i = 0; i < 25; i++) {
        numbers.push_back(rand() % 100);
    }

    //Display numbers before sorting
    cout << "BEFORE SORTING: ";
    for (int i = 0; i < 25; i++) {
        cout << numbers[i] << " ";
    }

    //BUBBLE SORT




    //Display numbers after sorting
    cout << endl << endl << "AFTER SORTING: ";
    for (int i = 0; i < 25; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl << endl;
    system("pause");
}
