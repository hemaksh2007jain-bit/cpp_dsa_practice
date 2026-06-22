#include <iostream>
using namespace std;

int search(int *array, int target, int n) {
   int start = 0;
   int end = n - 1;

   while( start<=end ) {
      int mid =  (end + start) / 2;
      if (target == array[mid]) {
         return mid;
      } else if (target > array[mid]) {
         start = mid + 1;
      } else {
         end = mid - 1;
      }
   }

   return -1;
}

int main() {
   int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   int n = sizeof(array) / sizeof(int);
   cout << search(array, 1, n);
   return 0;
}