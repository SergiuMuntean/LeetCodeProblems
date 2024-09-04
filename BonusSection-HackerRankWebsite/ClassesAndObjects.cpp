// Write your Student class here
class Student {
private:
    vector<int> scores;
public:
    void input();
    int calculateTotalScore();
};

void Student::input() {
    int value;
    for(int i{0}; i < 5; i++) {
        cin >> value;
        scores.push_back(value);
    }
}

int Student::calculateTotalScore() {
    int sum{0};
    for(int i{0}; i < 5; i++) {
        sum += scores.at(i);
    }
    return sum;
}
