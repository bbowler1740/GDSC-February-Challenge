#include "Challenge.h"

using namespace std;

vector<vector<int>> challengeFunction(vector<int> inputVector, int target) {

	//Write a function that takes a non-empty vector and returns a vector of all quadruples* that match the targetted sum. 
	//The order of returned quadruples does not matter.
	//If no vector is found that matches the target sum, return an empty vector. 
	//* A quadruple is a vector that contains only 4 elements.

	//Evaluations judged on time and space complexity.

	//Inputs 
	//vector<int> testInput = { 7, 6, 4, -1, 1, 2 };
	//int targetSum = 16;

	vector<vector<int>> answerVector{};
	
	map <pair <int, int>, int> mapOfPairs;

	//Map a pair (representing index values of inputVector) to the sum of the values at that pair of indices.
	for (int i = 0; i < inputVector.size(); i++) {

		for (int j = i + 1; j < inputVector.size(); j++) {

			//On first iteration through testInput: map[0, 1] = 13
			std::pair <int, int> tempPair = std::make_pair(i, j);
			mapOfPairs[tempPair] = inputVector[i] + inputVector[j];

		}

	}

	//At this point we have all possible combo of pairs and their corresponding value saved in map.
	//We now have to find which valid comboes of two values (i.e. 4 pairs) can sum together to make our target value.

	map <pair <int, int>, int>::iterator firstMapIterator;

	for (firstMapIterator = mapOfPairs.begin(); firstMapIterator != mapOfPairs.end(); firstMapIterator++) {

		//Check to see what value is required to match against the first pair.
		int reqPairValue = (target - firstMapIterator->second);

		map <pair <int, int>, int>::iterator secondMapIterator;
		for (secondMapIterator = std::next(mapOfPairs.begin(), 1); secondMapIterator != mapOfPairs.end(); secondMapIterator++) {

			//Find that value in our map
			if (secondMapIterator->second == reqPairValue) {

				//Create a vector of the index coordinates
				vector<int> tempVector = { firstMapIterator->first.first, firstMapIterator->first.second, secondMapIterator->first.first, secondMapIterator->first.second };
				answerVector.push_back(tempVector);

			}

		}

	}

	return answerVector;

}
