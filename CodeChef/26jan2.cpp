#include<vector>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int workDone(int n, vector<int> &a, int cap) {
        unordered_set<int> conveyer;
        deque<int> line;
		int zero = 0;
        int kaam = zero;
        for (int i = zero; i < n; i=i+1) {
            if (conveyer.count(a[i]) == zero) {
                kaam = kaam +1;
                if (line.size() == cap) {
					int first = line.back();
                    int final = first;
                    conveyer.erase(final);
                    line.pop_back();
                }
                line.push_front(a[i]);
                conveyer.insert(a[i]);
            }
        }
		int solution = kaam ;
        return solution;
    }
};