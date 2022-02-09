#include "Challenge.h"
#include <iostream>

int main()
{

    //Testing driver.

    vector<int> testInput = { 7, 6, 4, -1, 1, 2 };
    int targetSum = 16;

    vector<vector<int>> answerVector = challengeFunction(testInput, targetSum);

    cout << "Test Vector: { ";

    for (int i = 0; i < testInput.size(); i++) {

        if (i < testInput.size() - 1) {

            cout << testInput.at(i) << ", ";

        }

        else if (i == testInput.size() - 1) {

            cout << testInput.at(i) << " }" << "\n";;

        }

    }

    cout << "Target Sum: " << targetSum <<"\n\n";

    if (answerVector.empty()) {
        cout << "No possible quadruples summing to " << targetSum << " in Test Vector.\n";
    }

    int count = 1;
    for (vector<int> indexVector : answerVector) {

        cout << "Index Vector (" << count << "): { ";

        for (int i = 0; i < indexVector.size(); i++) {

            if (i < indexVector.size() - 1) {

                cout << indexVector.at(i) << ", ";

            }

            else if (i == indexVector.size() - 1) {

                cout << indexVector.at(i) << " }";

            }

        }


        cout << " Mapping against Test Vector: { ";
        int sum = 0;
        for (int i = 0; i < indexVector.size(); i++) {

            if (i < indexVector.size() - 1) {

                cout << testInput.at(indexVector.at(i)) << ", ";

            }

            else if (i == indexVector.size() - 1) {

                cout << testInput.at(indexVector.at(i)) << " }";

            }

            sum += testInput.at(indexVector.at(i));

        }

        cout << " Sum of mapping: " << sum << "\n";
        count++;

    }


    return 0;

}
