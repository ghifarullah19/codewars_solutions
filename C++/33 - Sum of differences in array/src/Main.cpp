#include <vector>
int sumOfDifferences(const std::vector<int>& arr){
  //your code here
  if (arr.size() == 0 || arr.size() == 1) {
    return 0;
  } else {
    int min = arr[0];
    int max = arr[0];
    for (unsigned i = 0; i < arr.size(); i++) {
      if (min > arr[i]) {
        min = arr[i];
      } else if (max < arr[i]) {
        max = arr[i];
      }
    }
    return max - min;
  }
}