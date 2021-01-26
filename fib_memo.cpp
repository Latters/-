#include <string.h>
#include <vector>
#include <iostream>
using namespace std;

int fib(int N) {
	int helper(vector<int>& memo,int n);
	if(N < 1) return 0;
	vector <int> memo(N+1,0);
	return helper(memo,N);
	
}

int helper(vector<int>& memo,int n){
	if (n == 1 || n == 2) return 1;
	if(memo[n] != 0) return memo[n];
	memo[n] = helper(memo,n-1) + helper(memo,n-2);
	return memo[n];
}

int main(){
	cout << fib(20) <<endl;
}
