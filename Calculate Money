class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;        // Variable to store the total money earned
        int monday = 1;     // Represents the amount earned on Monday
        
        while (n > 0) {     // Continue the loop until 'n' days are exhausted
            for (int day = 0; day < min(n, 7); day++) {  // Iterate for each day of the week or until 'n' days are left
                ans += monday + day;  // Increment 'ans' by the amount earned on the current day (monday + day)
            }
            
            n -= 7;         // Deduct 7 days (a week) from the total number of days left
            monday++;       // Increment the amount earned on Monday for the next week
        }
        
        return ans;        // Return the total amount earned over 'n' days
    }
};

