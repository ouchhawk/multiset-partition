#include <vector>
#include <algorithm>
#include <fstream>
#include "functions.h"

void testHarness(bool doPrintToConsole){
    ofstream outputFile;
    outputFile.open ("results.csv");
    long result=0, runCount=1000, listLength=16;
    srand ( time(0) );

    for(int index=8; index<1025;index*=2){
        outputFile << "--CARDINALITY " << index << endl;
        if(doPrintToConsole)
            cout << "--CARDINALITY "<< index << endl;

        result=0;
        for(int i=0; i<runCount; i++ ){
            vector<int> cardinalitySet = createCardinalitySet(index);
            vector<int> multiset = populateMultiSet(cardinalitySet, listLength);
            result+= functionA(multiset, false);
        }
        result=result/runCount;
        if(doPrintToConsole)
            cout << "Mean deviation from the ideal partition of A is: "<< result <<endl;
        outputFile << result << endl;

        result=0;
        for(int i=0; i<runCount; i++ ){
            vector<int> cardinalitySet = createCardinalitySet(index);
            vector<int> multiset = populateMultiSet(cardinalitySet, listLength);
            result+= functionB(multiset, false);
        }
        result=result/runCount;
        if(doPrintToConsole)
            cout << "Mean deviation from the ideal partition of B is: "<< result <<endl;
        outputFile << result << endl;

        result=0;
        for(int i=0; i<runCount; i++ ){
            vector<int> cardinalitySet = createCardinalitySet(index);
            vector<int> multiset = populateMultiSet(cardinalitySet, listLength);
            result+= functionC(multiset, false);
        }
        result=result/runCount;
        if(doPrintToConsole)
            cout << "Mean deviation from the ideal partition of C is: "<< result <<endl;
        outputFile << result << endl;

        result=0;
        for(int i=0; i<runCount; i++ ){
            vector<int> cardinalitySet = createCardinalitySet(index);
            vector<int> multiset = populateMultiSet(cardinalitySet, listLength);
            result+= functionD(multiset, false);
        }
        result=result/runCount;
        if(doPrintToConsole)
            cout << "Mean deviation from the ideal partition of D is: "<< result <<endl;
        outputFile << result << endl;

        result=0;
        for(int i=0; i<runCount; i++ ){
            vector<int> cardinalitySet = createCardinalitySet(index);
            vector<int> multiset = populateMultiSet(cardinalitySet, listLength);
            result+= functionE(multiset, false);
        }
        result=result/runCount;
        if(doPrintToConsole)
            cout << "Mean deviation from the ideal partition of E is: "<< result <<endl;
        outputFile << result << endl;

        result=0;
        for(int i=0; i<runCount; i++ ){
            vector<int> cardinalitySet = createCardinalitySet(index);
            vector<int> multiset = populateMultiSet(cardinalitySet, listLength);
            result+= functionF(multiset, false);
        }
        result=result/runCount;
        if(doPrintToConsole)
            cout << "Mean deviation from the ideal partition of F is: "<< result <<endl;
        outputFile << result << endl;

        result=0;
        for(int i=0; i<runCount; i++ ){
            vector<int> cardinalitySet = createCardinalitySet(index);
            vector<int> multiset = populateMultiSet(cardinalitySet, listLength);
            result+= functionG(multiset, false);
        }
        result=result/runCount;
        if(doPrintToConsole)
            cout << "Mean deviation from the ideal partition of G is: "<< result <<endl;
        outputFile << result << endl;

        result=0;
        for(int i=0; i<runCount; i++ ){
            vector<int> cardinalitySet = createCardinalitySet(index);
            vector<int> multiset = populateMultiSet(cardinalitySet, listLength);
            result+= functionH(multiset, false);
        }
        result=result/runCount;
        if(doPrintToConsole)
            cout << "Mean deviation from the ideal partition of H is: "<< result <<endl;
        outputFile << result << endl;

        result=0;
        for(int i=0; i<runCount; i++ ){
            vector<int> cardinalitySet = createCardinalitySet(index);
            vector<int> multiset = populateMultiSet(cardinalitySet, listLength);
            result+= functionI(multiset);
        }
        result=result/runCount;
        if(doPrintToConsole)
            cout << "Mean deviation from the ideal partition of I is: "<< result <<endl;
        outputFile << result << endl << endl;
    }
    outputFile.close();
}