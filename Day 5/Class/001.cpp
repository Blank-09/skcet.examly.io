#include <bits/stdc++.h>
using namespace std;

int main() {
  int size, sum = 0;
  cin >> size;

  int *arr = new int(size);

  for (int i = 0; i < size; i++) {
    cin >> arr[i];
    sum += arr[i] * (i + 1);
  }

  cout << sum;

  return 0;
}