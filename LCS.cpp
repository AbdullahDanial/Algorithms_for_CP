#include <iostream>
#include <vector>

using namespace std;

string findLCS(const string& s1, const string& s2) {
    int m = s1.length();
    int n = s2.length();
    int dp[m+1][n+1]={0};

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    string lcs;
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            lcs = s1[i - 1] + lcs;
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    return lcs;
}

int main() {
    string s1, s2;
    cin >> s1;
    cin >> s2;

    string lcs = findLCS(s1, s2);

    cout << "Longest Common Subsequence: " << lcs << endl;

}
