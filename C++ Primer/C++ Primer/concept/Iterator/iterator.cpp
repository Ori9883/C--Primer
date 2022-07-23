////#include <iostream>
////#include <string>
////#include <vector>
////using namespace std;
////
////int main() {
////	string v = "name";
////	auto iterator = v.begin();
////	++iterator;
////	--iterator;
////
////}
////
////
//// C++ program for the above approach
//
//#include <bits/stdc++.h>
//using namespace std;
//
//// Function to find the largest possible
//// subset having Bitwise AND positive
//void largestSubset(int a[], int N)
//{
//	// Stores the number of set bits
//	// at each bit position
//	int bit[32] = { 0 };
//
//	// Traverse the given array arr[]
//	for (int i = 0; i < N; i++) {
//
//		// Current bit position
//		int x = 31;
//
//		// Loop till array element
//		// becomes zero
//		while (a[i] > 0) {
//
//			// If the last bit is set
//			if (a[i] & 1 == 1) {
//
//				// Increment frequency
//				bit[x]++;
//			}
//
//			// Divide array element by 2
//			a[i] = a[i] >> 1;
//
//			// Decrease the bit position
//			x--;
//		}
//	}
//
//	// Size of the largest possible subset
//	cout << *max_element(bit, bit + 32);
//}
//
//// Driver Code
//int main()
//{
//	int arr[] = { 7, 13, 8, 2, 3 };
//	int N = sizeof(arr) / sizeof(arr[0]);
//	largestSubset(arr, N);
//
//	return 0;
//}
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <algorithm>
#include <string>
#include <vector>

// int GetMaxDigit(int n);
// string ConvertToBitString(int num);
// string AndOperator(string& a, string& b);
int GetNum(int num);

int solution(vector<int>& A) {
	// write your code in C++14 (g++ 6.2.0)
	//convert to binary
	// sort(A.begin(),A.end());
	// int max = A.back();
	// int length = GetMaxDigit(max);

	// vector<string> Astr;
	// for(auto i : A){
	//     string tempStr = ConvertToBitString(*i);
	//     Astr.emplace_back(tempStr);
	// }
	int n = A.length();
	int possibleTimes = 1 << n;
	int best = 0;
	for (int i = 0; i < possibleTimes; i++) {
		int temp = -1;
		for (int j = 0; j < n; j++) {
			if (possibleTimes & (1 << j) != 0)
			{
				temp &= nums[j];
			}
		}
		if (temp != 0) {
			int num = GetNum(temp);
			if (num > best) {
				best = num;
			}
		}
	}
	string a.append()
	return best;
}

// int GetMaxDigit(int n){
//     int temp = n;
//     string bitString = NULL;
//     while(n != 0){
//         temp = n % 2;
//         n >> 1;
//         bitString.append('temp');
//     }
//     int length = bitString.size();
//     return length;
// }

int GetNum(int n) {
	int temp = n;
	string bitString = NULL;
	while (n != 0) {
		temp = n % 2;
		n >> 1;
		bitString.append(temp);
	}
	int num = 0;
	for (auto i = bitString.begin; i != bitString.end(); i++) {
		if (*i == 1)
			num++;
		else
			continue;;
	}
	return num;
}

// string AndOperator(string& a, string& b){
//     string result = NULL;
//     for(auto i = a.begin, j = b.begin; i < a.size(); i++,j++){
//         if(*i == 1 && *j == 1){
//             result.append('1');
//         }
//         else {
//             result.append('0');
//         }
//     }
//     return result;
// }
