void sort(int* array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void card_sort(int n, const int* array) {
    int* even = malloc(n * sizeof(int));
    int* odd = malloc(n * sizeof(int));
    int e = 0, o = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            even[e++] = array[i];
        } else {
            odd[o++] = array[i];
        }
    }
    sort(even, e);
    sort(odd, o);
    int* combined = malloc((e + o) * sizeof(int));
    for (int i = 0; i < e; i++) {
        combined[i] = even[i];
    }
    for (int j = 0; j < o; j++) {
        combined[e + j] = odd[j];
    }
    sort(combined, e + o);
    printf("\n");
    free(even);
    free(odd);
    free(combined);
}
