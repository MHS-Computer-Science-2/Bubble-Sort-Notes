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
    //Repeat numbers.size() times 
    for (int times = 0; times < numbers.size(); times++) {
        //Go from 1st element to 2nd to last
        for (int i = 0; i < numbers.size() - 1; i++) {
            //Compare two adjacent elements
            if (numbers[i] > numbers[i + 1]) {
                //Flip if element i is bigger
                int temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
            }
        }
    }

    //Display numbers after sorting
    cout << endl << endl << "AFTER SORTING: ";
    for (int i = 0; i < 25; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl << endl;
    system("pause");
}
