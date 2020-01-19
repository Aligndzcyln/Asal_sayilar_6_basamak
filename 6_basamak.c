#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdbool.h>

#define N (int)1E6   // =>3
bool isPrime(int num) {
	if(num % 2 == 0) {
		return false;
	}

	for(int i = 3, kok_num = sqrt(num); i <= kok_num; i += 2) {
		if(num % i == 0) {
			return false;
		}			
	}
	return true;	
}

int main()
{
	clock_t start, end;
	start = clock();
	
	printf("2 ");
	for(int j = 3; j <= N; j += 2) {
		if(isPrime(j)) {
			printf("%d\n", j);
		}
	}
	end = clock();
	printf("\n\nCalisma zamani  : %f\n\n", (float) (end - start) / CLK_TCK);		
	
	return 0;
}