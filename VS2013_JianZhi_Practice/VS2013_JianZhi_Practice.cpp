#include <iostream>
#include "stdafx.h"
#include <stdio.h>
using namespace std;

#define N 1002
int number[N][N];
int m, n, t;
int main(){
	while (scanf_s("%d %d %d", &m, &n, &t) != EOF){
		for (int i = 0; i < m; ++i){
			for (int j = 0; j < n; ++j){
				scanf_s("%d", &number[i][j]);
			}
		}
		int r = 0, c = n - 1;
		bool found = false;
		while (r < m && c >= 0){
			if (number[r][c] == t){
				found = true;
				break;
			}
			else if (number[r][c] > t){
				--c;
			}
			else {
				++r;
			}
		}
		if (found){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
}