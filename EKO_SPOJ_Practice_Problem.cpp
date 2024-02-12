#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ispossible(vector<long long int> &trees, long long int m, long long int mid) {
    long long int woodCollected = 0;
    for (int i = 0; i < trees.size(); i++) {
        if (trees[i] > mid) {
            woodCollected += (trees[i] - mid); // Accumulate wood collected from all trees
        }
    }
    return woodCollected >= m;
}

long long int MaxSawBladeHeight(vector<long long int> &trees, long long int m) {
    long long int s = 0, e, ans = -1;
    e = *max_element(trees.begin(), trees.end());

    while (s <= e) {
        long long int mid = s + (e - s) / 2;
        if (ispossible(trees, m, mid)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    long long int n, m;
    cin >> n >> m;
    vector<long long int> trees;
    while (n--) {
        long long int height;
        cin >> height;
        trees.push_back(height);
    }
    cout << MaxSawBladeHeight(trees, m);
    return 0;
}
