class Solution {
public:
    
    bool test(string s, string p, int k, vector<int>& removable) {
        for (int i = 0; i <= k; i++) {
            s[removable[i]] = '*'; 
        }
        string filtered = "";
        for (char c : s) {
            if (c != '*') filtered += c;
        }
        int j = 0;
        for (char c : filtered) {
            if (j < p.size() && c == p[j]) j++;
        }
        return j == p.size();
    }

    int maximumRemovals(string s, string p, vector<int>& removable) {
        int r = removable.size() - 1;
        int l = 0;

        while (l <= r) { // corrigé : boucle correcte
            int mid = l + ((r - l) / 2); // corrigé : 1 → l, point-virgule ajouté

            if (test(s, p, mid, removable)) { // appel correct avec args
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        return l; 
    }
};
