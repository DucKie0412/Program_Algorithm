#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int n;
vector<int> a;
vector<int> bestP, bestQ;
int minDiff = INT_MAX;

void backtrack(int index, vector<int>& P, vector<int>& Q, int sumP, int sumQ) {
    if (index == n) {
        int diff = abs(sumP - sumQ);
        if (diff < minDiff) {
            minDiff = diff;
            bestP = P;
            bestQ = Q;
        }
        return;
    }

    // Include a[index] in group P
    P.push_back(a[index]);
    backtrack(index + 1, P, Q, sumP + a[index], sumQ);
    P.pop_back();

    // Include a[index] in group Q
    Q.push_back(a[index]);
    backtrack(index + 1, P, Q, sumP, sumQ + a[index]);
    Q.pop_back();
}

int main() {

    cout << "Input number of elements in array: ";
    cin >> n;
    a.resize(n);
    cout << "Input element(s): ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> P, Q;
    backtrack(0, P, Q, 0, 0);

    cout << "P group: { ";
    for (int i = 0; i < bestP.size(); ++i) {
        cout << bestP[i] << " ";
    }
    cout << "}" << endl;

    cout << "Q group: { ";
    for (int i = 0; i < bestQ.size(); ++i) {
        cout << bestQ[i] << " ";
    }
    cout << "}" << endl;

    cout << "Minimum different: " << minDiff << endl;
    cout << endl;

    return 0;
}
