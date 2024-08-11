#include <iostream>
#include <cmath>

using namespace std;
#define ll long long

ll cross_product(ll x1, ll y1, ll x2, ll y2) {
    return (x1 * y2) - (x2 * y1);
}

int orientation(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3) {
    ll val = cross_product(x2 - x1, y2 - y1, x3 - x2, y3 - y2);
    if (val == 0) return 0; // collinear
    return (val > 0) ? 1 : 2; // clockwise or counterclockwise
}

bool on_segment(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3) {
    if (x2 <= max(x1, x3) && x2 >= min(x1, x3) && y2 <= max(y1, y3) && y2 >= min(y1, y3))
        return true;
    return false;
}

bool do_intersect(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3, ll x4, ll y4) {
    // Find the four orientations needed for the general and special cases
    int o1 = orientation(x1, y1, x2, y2, x3, y3);
    int o2 = orientation(x1, y1, x2, y2, x4, y4);
    int o3 = orientation(x3, y3, x4, y4, x1, y1);
    int o4 = orientation(x3, y3, x4, y4, x2, y2);

    // General case
    if (o1 != o2 && o3 != o4)
        return true;

    // Special cases
    // x1, y1, x2, y2 and x3, y3 are collinear and x3, y3 lies on segment x1y1-x2y2
    if (o1 == 0 && on_segment(x1, y1, x3, y3, x2, y2)) return true;

    // x1, y1, x2, y2 and x4, y4 are collinear and x4, y4 lies on segment x1y1-x2y2
    if (o2 == 0 && on_segment(x1, y1, x4, y4, x2, y2)) return true;

    // x3, y3, x4, y4 and x1, y1 are collinear and x1, y1 lies on segment x3y3-x4y4
    if (o3 == 0 && on_segment(x3, y3, x1, y1, x4, y4)) return true;

    // x3, y3, x4, y4 and x2, y2 are collinear and x2, y2 lies on segment x3y3-x4y4
    if (o4 == 0 && on_segment(x3, y3, x2, y2, x4, y4)) return true;

    return false; // Doesn't fall in any of the above cases
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int q;
    cin >> q;
    while (q--) {
        ll x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        if (do_intersect(x1, y1, x2, y2, x3, y3, x4, y4))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
