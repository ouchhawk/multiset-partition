#include "functions.h"

using namespace std;

int functionC( vector<int> multiset, bool doPrint){
    int deviation=0;
    vector<int> *S1 = new vector<int>;
    vector<int> *S2 = new vector<int>;

    for(int index=0; index<multiset.size();index++){
        if(multiset[index]%2 == 0){
            S1->push_back(multiset[index]);
        }
        else{
            S2->push_back(multiset[index]);
        }
    }
    deviation = calculateDeviation(*S1,*S2);
    if(doPrint)
        printPartitions(*S1,*S2);
    free(S1);
    free(S2);
    return deviation;
}