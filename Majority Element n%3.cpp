#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& a) {
    int n = a.size();
    int el1 = INT_MIN, el2 = INT_MIN, count1 = 0, count2 = 0;

    for (int num : a) {
        if (num == el1) count1++;
        else if (num == el2) count2++;
        else if (count1 == 0) el1 = num, count1 = 1;
        else if (count2 == 0) el2 = num, count2 = 1;
        else count1--, count2--;
    }

    count1 = count2 = 0;
    for (int num : a) {
        if (num == el1) count1++;
        else if (num == el2) count2++;
    }

    vector<int> result;
    if (count1 > n / 3) result.push_back(el1);
    if (count2 > n / 3) result.push_back(el2);

    sort(result.begin(), result.end());
    return result;
}
