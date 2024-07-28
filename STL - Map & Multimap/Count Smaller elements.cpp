#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int> ans;
    void mergeSort(vector<pair<int, int>>& indexedArr, int low, int high) {
        if (low < high) {
            int mid = low + (high - low) / 2;
            mergeSort(indexedArr, low, mid);
            mergeSort(indexedArr, mid + 1, high);
            merge(indexedArr, low, mid, high);
        }
    }

    void merge(vector<pair<int, int>>& indexedArr, int low, int mid, int high) {
        vector<pair<int, int>> temp(high - low + 1);
        int i = low, j = mid + 1, k = 0;
        int rightCount = 0;
        while (i <= mid && j <= high) {
            if (indexedArr[i].first > indexedArr[j].first) {
                rightCount++;
                temp[k++] = indexedArr[j++];
            }else {
                ans[indexedArr[i].second] += rightCount;
                temp[k++] = indexedArr[i++];
            }
        }

        while (i <= mid) {
            ans[indexedArr[i].second] += rightCount;
            temp[k++] = indexedArr[i++];
        }

        while (j <= high) {
            temp[k++] = indexedArr[j++];
        }

        for (int p = 0; p < temp.size(); p++) {
            indexedArr[low + p] = temp[p];
        }
    }

public:
    vector<int> constructLowerArray(vector<int>& arr) {
        int n = arr.size();
        ans.resize(n, 0);
        vector<pair<int, int>> indexedArr(n);
        for (int i = 0; i < n; i++) {
            indexedArr[i] = {arr[i], i};
        }
        mergeSort(indexedArr, 0, n - 1);
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
