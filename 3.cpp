#include <iostream>
#include <cmath>
using namespace std;

void computeStatistics(double* arr, int n, double& sum, double& mean, double& stddeviation) {
    sum = 0.0;
    mean = 0.0;
    stddeviation = 0.0;

    
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }

   
    mean = sum / n;

 
    double variance = 0.0;
    for (int i = 0; i < n; i++) {
        variance += pow(*(arr + i) - mean, 2);
    }
    stddeviation = sqrt(variance / n);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    double* arr = new double[n];
    cout << "Enter " << n << " real numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    double sum, mean, stddeviation;
    computeStatistics(arr, n, sum, mean, stddeviation);

    cout << "Sum: " << sum << endl;
    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << stddeviation << endl;

    delete[] arr;
    return 0;
}
