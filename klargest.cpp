#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k){

    std::priority_queue<int> large;
    
    for(int i = 0; i < values.size(); i++){
        large.push(values[i]);
    }

    for(int j = 0; j < k-1; j++){
        large.pop();
    }

    return large.top();
}