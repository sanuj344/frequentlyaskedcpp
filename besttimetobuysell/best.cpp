// brute force

#include <bits/stdc++.h>
using namespace std;

int maxProfit(int prices[], int n) {
    int maxProfit = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            maxProfit = max(maxProfit, prices[j] - prices[i]);
        }
    }

    return maxProfit;
}



// optimal


#include <bits/stdc++.h>
using namespace std;

int maxProfit(int prices[], int n) {
    if (n == 0) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {

        // If we sell today
        int profit = prices[i] - minPrice;

        // Update best profit
        maxProfit = max(maxProfit, profit);

        // Update minimum buy price
        minPrice = min(minPrice, prices[i]);
    }

    return maxProfit;
}
