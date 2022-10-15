 #include <vector>

using namespace std;

long long sum(vector<int> &a) { // a : 합을 구해야 하는 정수 n개가 저장되어 있는 배열, n : 합을 구해야하는 정수의 개수
	long long result = 0;
	for (int i = 0; i < a.size(); i++) {
		result += a[i];
	}
	return result;
}
