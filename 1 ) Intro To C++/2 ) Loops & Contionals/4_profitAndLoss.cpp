#include <iostream>
using namespace std;

int main() {
    float cost_price, selling_price, profit, loss;

    // Taking input from the user
    cout << "Enter the cost price of the item: ";
    cin >> cost_price;
    cout << "Enter the selling price of the item: ";
    cin >> selling_price;

    // Calculating profit or loss
    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        cout << "The seller has made a profit of " << profit << endl;
    }
    else if (selling_price < cost_price) {
        loss = cost_price - selling_price;
        cout << "The seller has incurred a loss of " << loss << endl;
    }
    else {
        cout << "There is no profit or loss. The selling price is equal to the cost price." << endl;
    }

    return 0;
}
