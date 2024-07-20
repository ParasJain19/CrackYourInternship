// Approach 1 Time Limit Exceeded
class Solution {
public:
    string removeDuplicates(string s, int k) {
        for(int i=0;i<s.length()-k+1;i++)
        { int flag=0;
            for(int j=0;j<k-1;j++)
            {
                if(s[i+j]==s[i+j+1])
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                s.erase(s.begin() + i, s.begin() + i + k);
                i=-1;
            }
        }return s;
    }
};
Appr
class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> count_vec;

        for (char c : s) {
            if (!count_vec.empty() && count_vec.back().first == c) {
                // Increment the count if the current character matches the top of the stack
                count_vec.back().second++;
            } else {
                // Push a new pair if the current character is different
                // count_vec.emplace_back(c, 1);
                count_vec.push_back(make_pair(c, 1));
            //   make_pair is a utility function that constructs a 
            //   pair object from the arguments provided to it. It deduces the types
            //   of the elements automatically, so you don't need to specify them explicitly. 
            }

            // Remove the character if its count reaches k
            if (count_vec.back().second == k) {
                count_vec.pop_back();
            }
        }

        string result;
        for (const auto& p : count_vec) {
            result.append(p.second, p.first);
        }

        return result;
    }
};
