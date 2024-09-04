class Solution {
private:
    int convert_transform(const string& s) {
        int number = 0;
        int sz = s.size();
        int sum = 0;
        for (int i = 0; i < sz; i++) {
            int number = (s[i] - 'a' + 1);
            while (number >= 1) {
                sum += number % 10;
                number /= 10;
            }
        }
        return sum;
    }

    int Transform(int number) {
        int sum = 0;
        while(number >= 1) {
            sum += number % 10;
            number /= 10;
        }
        return sum;
    }

public:
    int getLucky(string s, int k) {
        int newS = convert_transform(s);
        for (int i = 0; i < k-1; i++) {
            newS = Transform(newS);
        }
        return newS;
    }
};