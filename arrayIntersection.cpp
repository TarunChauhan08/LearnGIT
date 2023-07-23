#include <iostream>
#include <vector>

using namespace std;

vector<int> get_array_intersection(vector<int> array1, vector<int> array2) {
  // Create a vector to store the intersection of the two arrays.
  vector<int> intersection;

  // Iterate over the first array.
  for (int i = 0; i < array1.size(); i++) {
    // Check if the current element is present in the second array.
    bool is_present = false;
    for (int j = 0; j < array2.size(); j++) {
      if (array1[i] == array2[j]) {
        is_present = true;
        break;
      }
    }

    // If the current element is present in the second array, add it to the intersection vector.
    if (is_present) {
      intersection.push_back(array1[i]);
    }
  }

  // Return the intersection vector.
  return intersection;
}

int main() {
  // Create two arrays.
  vector<int> array1 = {1, 2, 3, 4, 5};
  vector<int> array2 = {2, 4, 6, 8, 10};

  // Get the intersection of the two arrays.
  vector<int> intersection = get_array_intersection(array1, array2);

  // Print the intersection of the two arrays.
  for (int i = 0; i < intersection.size(); i++) {
    cout << intersection[i] << " ";
  }

  return 0;
}