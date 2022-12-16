#pragma GCC optimize(3)
#include <stdio.h>
#define MAX 2000001
#define BUFMAX 1048576
long long sum, w[MAX];
int kase, n, k, length = BUFMAX, a[MAX], v[MAX];
char buf[BUFMAX], tmp, * pt = buf, * end = buf;
inline char freadChar(){
    if (pt == end){
        if (length < BUFMAX)return EOF;
        length = fread(buf, 1, BUFMAX, stdin);
        end = buf + length;
        pt = buf;
    }
    return *pt++;
}
inline void freadUInt(int* val){
    while ((tmp = freadChar()) < '0')if (tmp == EOF) return;
    for(*val = tmp - '0';(tmp = freadChar()) >= '0';* val = (*val << 3) + (*val << 1) + (tmp - '0'));
}
inline void freadLongLong(long long* val){
    while ((tmp = freadChar()) < '-')if (tmp == EOF) return;
    if (tmp == '-'){
        for(*val = freadChar() - '0';(tmp = freadChar()) >= '0';* val = (*val << 3) + (*val << 1) + (tmp - '0'));
        *val = -*val;
    }
    else{
        for(*val = tmp - '0';(tmp = freadChar()) >= '0';* val = (*val << 3) + (*val << 1) + (tmp - '0'));
    }
}
int main(){
    for(scanf(" %d", &kase);kase--;printf("%lld\n", sum)){
        sum = 0;
        freadUInt(&n), freadUInt(&k);
        for (int i = 1; i <= n; )freadUInt(&a[i++]);
        for (int i = 1, s = 1; i <= n; ++i){
            for(;a[i] - a[s] > k;++s);
            v[i] = s - 1;
        }
        for (int i = 1; i <= n; ++i){
            freadLongLong(&w[i]);
            sum += w[v[i]] * w[i];
            w[i] += w[i - 1];
        }
    }
}
