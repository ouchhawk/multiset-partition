#ifndef MYHEADER_H
#define MYHEADER_H

#include <cmath>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int functionA(vector<int> multiset, bool doPrint);
int functionB(vector<int>& multiset, bool doPrint);
int functionC(vector<int> multiset, bool doPrint);
int functionD(vector<int> multiset, bool doPrint);
int functionE(vector<int>& multiset, bool doPrint);
int functionF(vector<int> multiset, bool doPrint);
int functionG(vector<int> multiset, bool doPrint);
int functionH(vector<int> multiset, bool doPrint);
int functionI(vector<int> multiset);
vector<int> knapsack(vector<int> multiset, vector<int> weights, int target);
vector<int>& createCardinalitySet(int size);
vector<int>& populateMultiSet(vector<int> cardinalitySet, int count);
int generateRandomNumberInRange(int startingNumber, int endingNumber);
void sortVectorList(vector<int>& list, bool isAscending);
int calculateDeviation(vector<int>& S1,vector<int>& S2);
bool doesInclude(vector<int>& list, int item);
long sumList(vector<int> list);
int printPartitions(vector<int>& S1,vector<int>& S2);
vector<int> getDifference(vector<int> multiset, vector<int> otherList);
// Test Methods
void testHarness(bool doPrintToConsole);
void compareWithExample();
#endif
