#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int left, int right) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) return mid;
    else if (arr[mid] > target) return binarySearch(arr, target, left, mid - 1);
    else return binarySearch(arr, target, mid + 1, right);
}

int main() {
    int arr[] = { 1, 3, 5, 7, 9, 11 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "число для поиска ";
    cin >> target;

    int result = binarySearch(arr, target, 0, size - 1);

    if (result != -1) cout << "Элемент найден " << result << endl;
    else cout << "Элемент не найден" << endl;

    return 0;
}
