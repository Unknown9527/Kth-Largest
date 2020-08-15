#include <iostream>
#include "src/lib/solution.h"

using namespace std;

// print the vector
void PrintVector(vector<int> & input){
    
    for(int i =0; i < input.size(); i++){
        cout << input[i] <<" ";
    }
    cout << endl;
}

// Vector Rotation
int main()
{
    Solution solution;

    // cout << result2 << endl;

    vector<int> input0 = {5,9,3,1,7};
    // 9 7 5 3 1
    int k = 2;
    cout << solution.KthLarge(input0, k) << endl;

    


    return EXIT_SUCCESS;
};


