#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n, m;
        cin >> a >> b >> n >> m;
        int minCoins = 0;
        int k = n / (m + 1);
        int rem = n - k * (m + 1);
        int coinsWithPromotion = k * (m * a + b);
        int coinsWithoutPromotion = rem * a;
        int coinsWithPromotionForRemaining = (rem + m - 1) / m * a;
        minCoins = min(coinsWithPromotion + coinsWithoutPromotion, coinsWithPromotion + coinsWithPromotionForRemaining);
        cout << minCoins << endl;
    }
    return 0;
}
