#include <stdio.h>
#include <unistd.h>

int main(int argv, char* argc[]) {
	if (argv == 1) printf("Please insert at least one parameter.\n");
	else {
		if (atoi(argc[1]) > 50 || atoi(argc[1]) < 0) printf("Invalid parameter.\n");
		else {
			int n = atoi(argc[1]);
			int x;
			for (x = 0; x < n; x++) {
				printf("%d\n", x);
				fflush(stdout);
				sleep(1);
			}
		}
	}
	return 0;
}
