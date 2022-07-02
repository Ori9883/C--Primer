//#include <iostream>
//#include "3.36.h"
//using namespace std;
//
//int main() {
//	int arr1[5] = { '1','2','3','4','5' };
//	int* s1 = arr1;
//	int* t1 = end(arr1);
//
//	int arr2[5] = { '1','2','3','4','5' };
//	int* s2 = arr2;
//	int* t2 = end(arr2);
//
//	int arr3[5] = { '1','2','4','4','5' };
//	int* s3 = arr3;
//	int* t3 = end(arr3);
//
//	bool arr12 = IsArrayEqual(s1, s2, t1, t2);
//	bool arr13 = IsArrayEqual(s1, s3, t1, t3);
//	cout << "Is 1 and 2 equal: " << arr12 << endl;
//	cout << "Is 1 and 3 equal: " << arr13 << endl;
//	return 0;
//}
//
//template<typename T>
//bool IsArrayEqual(T* start1, T* start2, T* tail1, T* tail2) {
//	if ((tail1 - start1) != (tail2 - start2))
//		return false;
//
//	for (; start1 < tail1; start1++, start2++) {
//		if (*start1 == *start2) {
//			continue;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	return true;
//}