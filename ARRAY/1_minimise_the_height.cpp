#include<bits/stdc++.h>
using namespace std;
   int getMinDiff(int A[], int n, int K){
      
         sort(A, A+n);
        int res = A[n - 1] - A[0];
        int left = A[0] + K, right = A[n - 1] - K;
        for (int i = 0; i < n - 1; i++) {
            int maxi = max(A[i] + K, right);
            int  mini = min(left, A[i + 1] - K);
            res = min(res, maxi - mini);
        }
        return res;
    }
    int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  