int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
    int sum = 0;
    for(int i = 0; i < studentsSize - 1; i++) {
        for(int j = i + 1; j < studentsSize; j++) {
            if(students[i] > students[j]) {
                int aux = students[i];
                students[i] = students[j];
                students[j] = aux;
            }
        }
    }
     for(int i = 0; i < seatsSize - 1; i++) {
        for(int j = i + 1; j < seatsSize; j++) {
            if(seats[i] > seats[j]) {
                int aux = seats[i];
                seats[i] = seats[j];
                seats[j] = aux;
            }
        }
    }
    int value = 0;
    for(int i = 0; i < seatsSize; i++) {
        if(students[i] > seats[i]) {
            value = students[i] - seats[i];
        }
        else {
            value = seats[i] - students[i];
        }
        sum += value;
    }
    return sum;
}
