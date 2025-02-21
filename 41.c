#include <stdio.h>

int main() {
    float cost_price, selling_price, profit_loss;
    scanf("%f %f", &cost_price, &selling_price);

    profit_loss = selling_price - cost_price;

    if (profit_loss > 0) {
        printf("Profit: %.2f\n", profit_loss);
    } else if (profit_loss < 0) {
        printf("Loss: %.2f\n", -profit_loss);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
