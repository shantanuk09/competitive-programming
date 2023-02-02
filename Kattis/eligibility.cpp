#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string name;
    int year1, month1, day1, year2, month2, day2, courses, n;
    cin >> n;
    while(n--){
        cin >> name;
        scanf("%d/%d/%d %d/%d/%d %d", &year1, &month1, &day1, &year2, &month2, &day2, &courses);
        cout << name << " ";
        if(year1 >= 2010 || year2 >= 1991) cout << "eligible" << endl;
        else if(courses >= 41) cout << "ineligible" << endl;
        else cout << "coach petitions" << endl;
    }

    return 0;
}