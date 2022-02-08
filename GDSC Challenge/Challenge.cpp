#include "Challenge.h"

using namespace std;

vector<vector<int>> challengeFunction(vector<int> inputVector, int target) {

	//Write a function that takes a non-empty array and returns a quadruple* that matches a targetted sum. 
	//The order of returned quadruples does not matter.
	//If no array is found that matches the target sum, return an empty array. 
	//* A quadruple is an array that contains only 4 elements.

	//Evaluations judged on time and space complexity.

	//Inputs 
	//vector<int> testInput = { 7, 6, 4, -1, 1, 2 };
	//int targetSum = 16;

	vector<vector<int>> answerVector{};

	//Map a value (the sum of the pair) to the indices of the elements that make up that value
	map <int, pair <int, int>> map;

	for (int i = 0; i < inputVector.size(); i++) {

		for (int j = i + 1; j < inputVector.size(); j++) {

			//On first iteration through testInput: map[13].first = 0
			map[inputVector[i] + inputVector[j]].first = i;
			//On first iteration through testInput: map[13].second = 1
			map[inputVector[i] + inputVector[j]].second = j;

		}

	}
	
	//At this point we have all possible combo of pairs and their corresponding value saved in map.
	//We now have to find which valid comboes of two values (i.e. 4 pairs) can sum together to make our target value.


	return answerVector;

}
