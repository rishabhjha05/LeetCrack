class Solution {
public:
    int dayOfYear(string date) {
        int dt[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int year=stoi(date.substr(0,4)),month=stoi(date.substr(5,2)),day=stoi(date.substr(8,2));
        if(year%4==0 && month>2 &&(year%100!=0 || year%400==0)) day++;
        while(--month)
            day+=dt[month-1];
        return day;
    }
};