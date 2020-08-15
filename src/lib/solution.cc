#include "solution.h"
#include <map>
#include <iostream>
#include <numeric>    

using namespace std;

int Solution::KthLarge (vector<int> & input0, int k){
    priority_queue<int> queue;
    vector<int> result0;
    if (k > 0 && k < input0.size() + 1)
    {
        for(int i: input0)
        {
            queue.push(i);
        }

        while(!queue.empty())
        {
            result0.push_back(queue.top());
            queue.pop();
        }

        input0 = result0; 
        int kth = result0[k - 1];

        return kth;   
    }else
    {
        cout << "Error!" << endl;
        return 0;
    }

}



