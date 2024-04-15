int commonFactors(int a, int b) {
    int number;
    if(a > b) {
        number = a;
    }
    else {
        number = b;
    }
    int count = 0;
    for(int i = 1; i <= number; i++) {
        if(a % i == 0 && b % i == 0) {
            count++;
        }
    }
    return count;
}
