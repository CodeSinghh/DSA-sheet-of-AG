#include <vector>
#include <iostream>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int n = prices.size();
        if (n == 0) {
            return 0;
        }
        
        // Find the smallest number and its index
        int smallest = prices[0];
        int smallestIndex = 0;
        for (int i = 1; i < n; i++) {
            if (prices[i] < smallest) {
                smallest = prices[i];
                smallestIndex = i;
            }
        }
        
        if (smallestIndex == n - 1) {
            return 0;
        }
        
        // Create a new vector and push elements from the smallest number index to the end
        std::vector<int> newPrices;
        for (int i = smallestIndex; i < n; i++) {
            newPrices.push_back(prices[i]);
        }
        
        // Find the smallest and largest numbers in the new vector
        int newSmallest = newPrices[0];
        int newLargest = newPrices[0];
        for (int i = 1; i < newPrices.size(); i++) {
            if (newPrices[i] < newSmallest) {
                newSmallest = newPrices[i];
            } else if (newPrices[i] > newLargest) {
                newLargest = newPrices[i];
            }
        }
        
        return newLargest - newSmallest;
    }
};

int main() {
    // Example usage
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    Solution solution;
    int maxProfit = solution.maxProfit(prices);
    std::cout << "Max Profit: " << maxProfit << std::endl;
    
    return 0;
}
