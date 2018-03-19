#include <stdio.h>
int ans = 0;
int a[3] = {1, 2, 5};
void dfs(int s, int m) {
    int i;
    if (s == 0) {
        ans++;
        return ;
    }
    for (i = m; i < 3; i++) {
        if (s >= a[i])
            dfs(s - a[i], i);
    }
}
int main() {
    ans = 0;
    dfs(10, 0);
    printf("%d", ans);
    int n;
    scanf("%d",&n);
    return 0;
}