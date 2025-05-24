//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//
////void funct(int* x, int* y, int*& z)
////{
////	z = x;
////	x = y;
////	*x = 200;
////}
////int main() {
////	int i = 10;
////	int j = 20;
////	int* p = &j;
////	funct(&i, &j, p);
////	cout << "i is = " << i << endl;// write your output here: 10
////	cout << "j is = " << j << endl;// write your output here: 200
////	cout << "p is = " << --(*p) << endl;// write your output here: 9
////}
////
//
////int main(){
////	char arr[20];
////	
////	int i;
////	for ( i = 0; i < 10; i++) {
////		*(arr + i) = 65 + i;
////	}
////	*(arr + i) = '\0';
////	cout << arr; //ABCDEFGHIJ
////
////	return 0;
////}
////
//
////int main() {
////
////	char *ptr;
////	char arr[] = "abcdefgh";
////	ptr = arr;
////	ptr += 5;
////	cout << ptr;  //fgh
////
////	return 0;
////}
//
////int main() {
////
////	int x = 50;
////	int* ptr = &x;
////	ptr = ptr + 1;
////	cout << *(ptr - 1);
////
////	return 0;
////}
//
//#include <string>
//
//
////// Function to check if a word exists in the dictionary
////bool isWordInDict(const string& word, const string dict[], int dictSize) {
////    for (int i = 0; i < dictSize; i++) {
////        if (dict[i] == word) return true;
////    }
////    return false;
////}
////
////// Helper function to perform word break and print valid words
////void wordBreakHelper(const string& s, const string dict[], int dictSize, int start, string current) {
////    if (start == s.size()) {
////        cout << current << endl; // Print the current valid combination
////        return;
////    }
////
////    for (int i = start; i < s.size(); i++) {
////        string sub = s.substr(start, i - start + 1);
////        if (isWordInDict(sub, dict, dictSize)) {
////            // Recursive call with the current word appended
////            wordBreakHelper(s, dict, dictSize, i + 1, current.empty() ? sub : current + " " + sub);
////        }
////    }
////}
////
////// Main function
////int main() {
////    string dict[] = { "leet", "code" };
////    int dictSize = sizeof(dict) / sizeof(dict[0]);
////
////    cout << "Valid combinations for 'leetcode':" << endl;
////    wordBreakHelper("leetcode", dict, dictSize, 0, "");
////
////    return 0;
////}
////void reverse(string *word, int a) {
////	int len = 
////}
//
//////Reversing the string
////void reverse(string& word, int n) {
////
////	if ( n < 0) {
////		return;
////	}
////	
////	cout << word[n] << "";
////	reverse(word, n-1);
////	
////}
////
//////Joining two words
////void copy(string& word, string& w, int l, int i = 0) {
////
////	if (i == l) {
////		return;
////	}
////
////	word += w[i];
////	i++;
////
////	copy(word, w, l, i);
////}
////
////void segmentFun(string& w1, string& w2, int l1, int l2, int l, string word = "") {
////		
////	copy(word, w1, l1);
////	copy(word, w2, l2);
////
////	cout << "Word : " << word << " \n";
////}
////
////int main() {
////
////	string word1 = "alliswell";
////	string word2 = "AmirKhan";
////	int len1 = word1.length();
////	int len2 = word2.length();
////	int l = len1 + len2;
////
////	cout << "Len 1: " << len1 << endl;
////	cout << "Len 2: " << len2 << endl;
////	//reverse(word1,len1 -1);
////	segmentFun(word1, word2, len1, len2, l);
////
////	return 0;
////}
//
//
//bool isValidSegment(const char* s, int start, int end) {
//    if (end - start + 1 > 3)
//        return false;
//    if (s[start] == '0' && start != end)
//        return false;
//    int num = 0;
//    for (int i = start; i <= end; i++) {
//        num = num * 10 + (s[i] - '0');
//    }
//    return num >= 0 && num <= 255;
//}
//
//void generateIPHelper(const char* s, int start, int dots, char ip[], int ipPos) {
//    int len = strlen(s);
//
//    if (dots == 3) {
//        if (isValidSegment(s, start, len - 1)) {
//            strcpy(ip + ipPos, s + start);
//            cout << ip << endl;
//        }
//        return;
//    }
//
//    for (int i = start; i < len && i < start + 3; i++) {
//        if (isValidSegment(s, start, i)) {
//            int segmentLength = i - start + 1;
//            strncpy(ip + ipPos, s + start, segmentLength);
//            ip[ipPos + segmentLength] = '.';
//            generateIPHelper(s, i + 1, dots + 1, ip, ipPos + segmentLength + 1);
//        }
//    }
//}
//
//void generateIP(const char* s) {
//    int len = strlen(s);
//    if (len < 4 || len > 12)
//        return;
//
//    char ip[20];
//    generateIPHelper(s, 0, 0, ip, 0);
//}
//
//int main() {
//    generateIP("25525511135");
//
//    return 0;
//}
