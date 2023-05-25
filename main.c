#include <stdio.h>

void combineStudents(int a[], int b[], int m, int n) {
// your code here  
int size=m+n;
int j=0;  
for(int i=m;i<size;i++)
{
    a[i]=b[j];
    j++;
}
}

int main() {
    int n,m;
    int a[100],b[100];
    
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    for(int i=0; i<m; i++) scanf("%d",&b[i]);


    combineStudents(a, b, n, m);

    for (int i = 0; i < m + n; i++) {
        printf("%d", a[i]);
    }

    return 0;
}
