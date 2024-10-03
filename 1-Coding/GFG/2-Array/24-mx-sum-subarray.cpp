#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  // int arr[] = {1, -2, 5, 4, 7, -1};
  int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  int n = 6;
  int size = sizeof(arr) / sizeof(arr[0]);

  int sum = 0;
  int mx = arr[0];
  int start = 0, end = 0, temp_start = 0;
  for (int i = 0; i < size; i++)
  {
    sum = sum + arr[i];
    if (sum > mx)
    {
      mx = sum;
      start = temp_start;
      end = i;
    }
    if (sum < 0)
    {
      sum = 0;
      temp_start = i + 1;
    }
  }

  cout << "\nMax :- " << mx;
  cout << "\nSubArry :- ";
  for (int i = start; i <= end; i++)
  {
    cout << arr[i] << ",";
  }
  return 0;
}
