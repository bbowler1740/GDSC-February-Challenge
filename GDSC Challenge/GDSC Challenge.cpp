#include "Challenge.h"
#include <iostream>

int main()
{

    //Testing driver.

    vector<int> testInput = { 7, 6, 4, -1, 1, 2 };
    int targetSum = 16;

    vector<vector<int>> answerVector = challengeFunction(testInput, targetSum);

    cout << "Test Input: { ";

    for (int i = 0; i < testInput.size(); i++) {

       

        if (i < testInput.size() - 1) {

            cout << testInput.at(i) << ", ";

        }

        else if (i == testInput.size() - 1) {

            cout << testInput.at(i);

        }

    }

    cout << " }";
    cout << " Target: " << targetSum;
    cout << "\n\n";

    int vectorCount = 1;
    for (vector<int> vector : answerVector) {

        int sum = 0;

        cout << "Index Vector (" << vectorCount << "): { ";

        for (int i = 0; i < vector.size(); i++) {
            
            if (i < vector.size() - 1) {

                cout << vector.at(i) << ", ";

            } 

            else if (i == vector.size() - 1) {

                cout << vector.at(i);

            }

        }

        cout << " }";

        cout << " Input mapping: { ";

        for (int i = 0; i < vector.size(); i++) {

            if (i < vector.size() - 1) {

                cout << testInput.at(vector.at(i)) << ", ";

            }

            else if (i == vector.size() - 1) {

                cout << testInput.at(vector.at(i));

            }

            int value = testInput.at(i);
            sum += value;

        }

        cout << " }" << " Sum: " << sum << "\n";
        vectorCount++;

    }

    return 0;

}
