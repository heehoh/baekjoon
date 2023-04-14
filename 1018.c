#include <stdio.h>
#include <stdlib.h>

int	main(void){
	int	n;
	int	*array;
	int	count = 0;
	int j;

	scanf("%d", &n);
	array = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++){
		scanf("%d", &(array[i]));
	}
	for (int i = 0; i < n; i++){
		for (j = 2; j < array[i]; j++){
			if (array[i] % j == 0)
				break ;
		}
		if (j == array[i])
			++count;
	}
	free(array);
	printf("%d", count);
	return (0);
}