#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    double arr[n], sum = 0, mean, variance = 0, stddev;
    
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    
    mean = sum / n;
    
    for (int i = 0; i < n; i++) {
        variance += (arr[i] - mean) * (arr[i] - mean);
    }
    
    variance /= n;
    stddev = sqrt(variance);
    
    printf("Mean: %.2lf\n", mean);
    printf("Variance: %.2lf\n", variance);
    printf("Standard Deviation: %.2lf\n", stddev);
    
    return 0;
}

