#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    ll total_cubes = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_cubes += a[i];
    }

    vector<int> b = a;
    sort(b.begin(), b.end());

    // Step 1: Find the first occurrence of every value in the sorted array
    // This tells us which column in the final state is affected if we remove a cube of height 'v'
    map<int, int> first_idx_in_b;
    for (int i = 0; i < n; i++) {
        if (first_idx_in_b.find(b[i]) == first_idx_in_b.end()) {
            first_idx_in_b[b[i]] = i;
        }
    }

    // Step 2: Base 'staying' calculation
    ll base_staying = 0;
    for (int i = 0; i < n; i++) {
        base_staying += min(a[i], b[i]);
    }

    // Option 1: Do nothing
    ll max_moving = total_cubes - base_staying;

    // Step 3: Iterate through each column to try removing one cube
    // We use a map to avoid re-calculating for the same height 'v'
    map<int, bool> processed_height;

    for (int i = 0; i < n; i++) {
        int v = a[i];
        if (processed_height[v]) continue;
        processed_height[v] = true;

        // Index in b where the 'v' is "located" in the sorted version
        int j = first_idx_in_b[v];

        // Impact of removing a cube from column i (original)
        ll delta_i = (ll)min(v - 1, b[i]) - min(v, b[i]);
        
        // Impact of the sorted array b losing a 'v' at index j
        // (Note: if i == j, we've already handled part of it, but the logic holds)
        ll delta_j = 0;
        if (i != j) {
            delta_j = (ll)min(a[j], v - 1) - min(a[j], v);
        } else {
            // If the column we remove from is the same as the sorted index,
            // we just look at the single change: min(v-1, v-1) - min(v, v)
            // which is already covered by delta_i.
        }

        ll new_staying = base_staying + delta_i + delta_j;
        max_moving = max(max_moving, (total_cubes - 1) - new_staying);
    }

    cout << max_moving << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}