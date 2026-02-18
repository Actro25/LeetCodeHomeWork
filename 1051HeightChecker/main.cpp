#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
std::vector<int> MySortQuick(std::vector<int>& heights){
	if(heights.size() <= 1){
		return heights;
	}

	int seredina = heights[int(heights.size() / 2)];
	std::vector<int> leftV = {};
	std::vector<int> rightV = {};
	std::vector<int> equalV = {};
	std::vector<int> returningV = {};

	for(int i = 0; i < heights.size(); i++){
		if(heights[i] < seredina){
			leftV.push_back(heights[i]);
		}
		else if(heights[i] > seredina){
			rightV.push_back(heights[i]);
		}
		else{
			equalV.push_back(heights[i]);
		}
	}


	std::vector<int> leftOut = MySortQuick(leftV);
	returningV.insert(returningV.end(), leftOut.begin(), leftOut.end());

	returningV.insert(returningV.end(), equalV.begin(), equalV.end());
	
	std::vector<int> rightOut = MySortQuick(rightV);
	returningV.insert(returningV.end(), rightOut.begin(), rightOut.end());
	
	return returningV;
} 
int heightChecker(std::vector<int>& heights) {
	std::vector<int> exprectation = MySortQuick(heights);
	int couting = 0;
	for(int i = 0; i < heights.size(); i++){
		if(heights[i] != exprectation[i])
			couting++;
	}

	return couting;
}

int main()
{
	std::vector<int> inputVector = {1,1,4,2,1,3};
	std::cout << heightChecker(inputVector);
	return 0;
}