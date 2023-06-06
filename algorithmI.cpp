#include <vector>
#include <climits>
#include "functions.h"

int functionI(std::vector<int> multiset) {
    long target = sumList(multiset)/2;
    vector<int> lst = knapsack(multiset, multiset, target);
    return target - sumList(lst);
}

vector<int> knapsack(vector<int> multiset, vector<int> weights, int target) {
    vector<vector<int>> T(multiset.size()+1, vector<int>(target + 1));
    vector<vector<bool>> keep(multiset.size()+1, vector<bool>(target + 1));
    int itemValue, itemWeight, best;

    for (int index = 0; index <= multiset.size(); index++) {
        T[index][0] = 0;
        keep[index][0] = false;
    }
    for (int weight = 0; weight <= target; weight++) {
        T[0][weight] = 0;
        keep[0][weight] = false;
    }
    for (int index = 1; index <= multiset.size(); index++) {
        for (int weight = 0; weight <= target; weight++) {
            itemValue = multiset[index - 1];
            itemWeight = weights[index - 1];
            if (weight - itemWeight >= 0) {
                best = itemValue + T[index - 1][weight - itemWeight];
            } else {
                best = -1;
            }
            if (itemWeight <= weight && T[index-1][weight] < best) {
                T[index][weight] = best;
                keep[index][weight] = true;
            } else {
                T[index][weight] = T[index-1][weight];
                keep[index][weight] = false;
            }
        }
    }
    vector<int> out(multiset.size(), 0);
    int weight2 = target;
    for (int index = multiset.size(); index > 0; index--) {
        if (keep[index][weight2]) {
            weight2 = weight2 - weights[index - 1];
            out[index - 1] = multiset[index - 1];
        }
    }
    return out;
}