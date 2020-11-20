#include <stdio.h>
#include <stdlib.h>

void ShellSort (int arr[], int size);

int main() {
    int n=0;
    printf("Size of array:");
    scanf("%d",&n);
    int *arr = (int *) malloc(n * sizeof(int));
    printf("Elements of array:");
    for (int h = 0; h < n; ++h) {
        scanf("%d", &arr[h]);
    }
    ShSr(arr,n);
    for (int i=0;i<n;i++) {
        printf("\n%d ",arr[i]);
    }
    free(arr);
    return 0;
}

void ShellSort (int arr[], int size){
    for (int s = size / 2; s > 0; s /= 2)
        for (int i = s; i < size; i++)
            for (int j = i - s; j >= 0 && arr[j] > arr[j + s]; j -= s)
            {
                int v = arr[j];
                arr[j] = arr[j + s];
                arr[j + s] = v;
            }
}
