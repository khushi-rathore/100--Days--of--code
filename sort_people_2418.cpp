#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;

        vector<pair<int, string>> people;

        // Combine names and heights into a vector of pairs
        for (int i = 0; i < names.size(); i++) {
            people.push_back({heights[i], names[i]});
        }

        // Sort the vector of pairs in descending order based on height
        sort(people.rbegin(), people.rend());

        // Extract names from the sorted vector
        for (const auto& person : people) {
            ans.push_back(person.second);
        }

        return ans;
    }
};

int main() {
    // Example usage
    Solution solution;

    vector<string> names = {"Alice", "Bob", "Charlie", "David"};
    vector<int> heights = {170, 180, 160, 175};

    vector<string> sortedNames = solution.sortPeople(names, heights);

    cout << "Sorted Names based on Heights:" << endl;
    for (const auto& name : sortedNames) {
        cout << name << " ";
    }

    return 0;
}
