#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i=0; i<n; i++){
        cin >> numbers[i];
    }
    int count = 0;
    int maxScore = numbers[0];
    int minScore = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > maxScore) {
            count++;
            maxScore = numbers[i];
        } 
        else if (numbers[i] < minScore) {
            count++;
            minScore = numbers[i];
        }
    }
    cout << count;
}