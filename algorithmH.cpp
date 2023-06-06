#include "functions.h"

using namespace std;

vector<int> getClosestListToTarget(std::vector<int> multiset, long index, long target){
    long target1, target2;
    if(index >= multiset.size()) return std::vector<int>();
    std::vector<int> list1 = getClosestListToTarget(multiset, index+1, target-multiset[index]);
    list1.push_back(multiset[index]);
    std::vector<int> list2 = getClosestListToTarget(multiset, index+1, target);
    target1=sumList(list1);
    target2=sumList(list2);
    if(abs(target1 - target) < abs(target2-target)){
        return list1;
    }
    else{
        return list2;
    }
}

int functionH(vector<int> multiset, bool doPrint) {
    long target = sumList(multiset)/2, result=0, index=0;
    vector<int> S1 = getClosestListToTarget(multiset, index, target);

    if(doPrint){
        vector<int> S2 = getDifference(multiset, S1);
        printPartitions(S1, S2);
    }
    result = sumList(S1);
    return (target - result);
}