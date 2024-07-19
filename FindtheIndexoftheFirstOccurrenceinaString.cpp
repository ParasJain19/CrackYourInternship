class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }

        int haystackLength = haystack.size();
        int needleLength = needle.size();

        if (needleLength > haystackLength) {
            return -1;
        }

        for (int i = 0; i <= haystackLength - needleLength; ++i) {
            if (haystack.substr(i, needleLength) == needle) {
                return i;
            }
        }

        return -1;
    }
};
