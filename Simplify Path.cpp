
class Solution {
public:
    string simplifyPath(string path) {
        stack<string> ans;
        int i = 0;

        while (i < path.length()) {
            // Skip all consecutive slashes
            while (i < path.length() && path[i] == '/') {
                i++;
            }

            //we cannot take dot cases in separate loop as
            // filename can be ..hidden also            
            string res = "";
            while (i < path.length() && path[i] != '/') {
                res += path[i];
                i++;
            }

            if (!res.empty()) {
                if (res == "..") {
                    if (!ans.empty()) {
                        ans.pop();
                    }
                } else if (res != ".") {
                    ans.push(res);
                }
            }
        }

        string path_upd = "";
        while (!ans.empty()) {
            path_upd = "/" + ans.top() + path_upd;
            ans.pop();
        }

        return path_upd.empty() ? "/" : path_upd;
    }
};
