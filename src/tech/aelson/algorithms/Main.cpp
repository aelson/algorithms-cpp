#include "search/find_smallest/FindSmallestTester.h"
#include "search/find_smaller_elements/FindSmallerElementsTester.h"
#include "search/pivot/PivotTester.h"
#include "sort/selection_sort/SelectionSortTester.h"
#include "sort/insertion_sort/InsertionSortTester.h"
#include "sort/merge_sort/MergeSortOneArrayTester.h"
#include "sort/merge_sort/MergeSortTwoArraysTester.h"
#include "sort/quick_sort/QuickSortTester.h"

int main() {
    testFindSmallest();
    testFindSmallerElements();
    testPivot();
    testSelectionSort();
    testInsertionSort();
    testMergeSortOneArray();
    testMergeSortOneArray();
    testQuickSort();
}