class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        int days1 = 0;
        int days2 = 0;
        int monthAa = stoi(arriveAlice.substr(0, 2));
        int monthLa = stoi(leaveAlice.substr(0, 2));
        int monthAb = stoi(arriveBob.substr(0, 2));
        int monthLb = stoi(leaveBob.substr(0, 2));
        int dateAa = stoi(arriveAlice.substr(3, 2));
        int dateLa = stoi(leaveAlice.substr(3, 2));
        int dateAb = stoi(arriveBob.substr(3, 2));
        int dateLb = stoi(leaveBob.substr(3, 2));

        for (int i = 1; i < monthAa; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 ||
                i == 12) {
                days1 += 31;
            } else if (i == 4 || i == 6 || i == 9 || i == 11) {
                days1 += 30;
            } else {
                days1 += 28;
            }
        }
        days1 += dateAa;
        int startA = days1;
        days1 = 0;

        for (int i = 1; i < monthLa; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 ||
                i == 12) {
                days1 += 31;
            } else if (i == 4 || i == 6 || i == 9 || i == 11) {
                days1 += 30;
            } else {
                days1 += 28;
            }
        }
        days1 += dateLa;
        int endA = days1;

        for (int i = 1; i < monthAb; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 ||
                i == 12) {
                days2 += 31;
            } else if (i == 4 || i == 6 || i == 9 || i == 11) {
                days2 += 30;
            } else {
                days2 += 28;
            }
        }
        days2 += dateAb;
        int startB = days2;
        days2 = 0;

        for (int i = 1; i < monthLb; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 ||
                i == 12) {
                days2 += 31;
            } else if (i == 4 || i == 6 || i == 9 || i == 11) {
                days2 += 30;
            } else {
                days2 += 28;
            }
        }
        days2 += dateLb;
        int endB = days2;

        int start = max(startA, startB);
        int end = min(endA, endB);

        if (start > end)
            return 0;
        else
            return end - start + 1;
    }
};