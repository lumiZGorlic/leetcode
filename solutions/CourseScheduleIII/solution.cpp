class Solution {
public:

    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), [](vector<int>& a, vector<int>& b){
            return a[1] < b[1]; // sort the courses by end time, cause the courses that end first should process in advance
        });

        int curDay = 0; // the day needed for course in duration.
        priority_queue<int> duration; // duration of the courses

        for(auto& c: courses) {
            curDay += c[0];
            duration.push(c[0]);
            if(curDay > c[1]) { 
                curDay -= duration.top();
                duration.pop();
            }
        }

        return duration.size();
    }

};
