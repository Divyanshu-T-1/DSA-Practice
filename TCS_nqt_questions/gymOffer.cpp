// A gym offers memberships:
// duration(months): 3, 6, 9, 12
// cost(rs): 5000, 7000, 12000, 15000
// given an input no. of months, return the total cost. ifthe input can't be formed using these plans -> print "Error".

// Approach is : If the input month is form using the given months then we can find total cost 

// Time Complexity: O(1)
// Space Complexity: O(1)


#include <iostream>
using namespace std;

int main() 
{
    int months;
    cout << "Enter the no. of months:" << endl;
    cin >> months;

    int cost = 0;

    cost += (months / 12) * 15000;
    months %= 12;

    cost += (months / 9) * 12000;
    months %= 9;

    cost += (months / 6) * 7000;
    months %= 6;

    cost += (months / 3) * 5000;
    months %= 3;

    if (months == 0) {
        cout << "Total cost is " << cost << " ";
    } else {
        cout << " Error ";
    }

    return 0;
}