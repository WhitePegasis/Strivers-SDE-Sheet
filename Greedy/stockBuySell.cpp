#include<bits/stdc++.h>

using namespace std;
int maxProfit(int arr[]) {
  int ma = 0;
  int minPrice = INT_MAX;
  for (int i = 0; i < 6; i++) {
    minPrice = min(minPrice, arr[i]);
    ma = max(ma, arr[i] - minPrice);
  }
  return ma;
}
int main() {
  int arr[] = {7,1,5,3,6,4};
  int maxPro = maxProfit(arr);
  cout << "Max profit is: " << maxPro << endl;
}