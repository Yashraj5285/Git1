 #include <stdio.h>

int main(void)
{
	int n;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("The array must contain at least one element.\n");
		return 1;
	}

	int array[n];
	printf("Enter %d elements: ", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	int largest = array[0];
	for (int i = 1; i < n; i++) {
		if (array[i] > largest) {
			largest = array[i];
		}
	}

	printf("The largest number is %d\n", largest);
	return 0;
}
