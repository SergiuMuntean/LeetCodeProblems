int minimumSum(int num) {
    int a = num;
    int arr[4];
    int i = 0;
    while(a > 0) {
        arr[i++] = a % 10;
        a /= 10;
    }
    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 4; j++) {
            if(arr[i] > arr[j]) {
                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
    return arr[0] * 10 + arr[1] * 10 + arr[2] + arr[3];
}
