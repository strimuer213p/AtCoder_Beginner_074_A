/*
問題文
N×N のマス目があります。
このマス目の各マスを白色または黒色に塗ることにしました (すべてのマスをどちらか片方の色に塗ります)。
ちょうど A マスを白色に塗るとき、黒色に塗ることになるマスはいくつあるでしょうか。
*/

#include<iostream>

int main() {
	int n, a;
	std::cin >> n >> a;

	std::cout << n * n - a << std::endl;

	return 0;
}