#include <stdio.h>
const int LIMIT=100;

int main() {
	int a;
	scanf("%d", &a);
	if(a<LIMIT){
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}
