double mean(int length, int* arr) {
    int sum = 0;

    int i;
    for (i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum / length;
}