#include <stdio.h>

int main()
{
	int n, m;
	printf("enter number of vertices and edges:");
	scanf("%d %d", &n, &m);
	int adjMat[n + 1][n + 1];
	printf("enter %d edges:",m)
	for (int i = 0; i < m; i++) {
		int u, v;
		scanf("%d %d", &u, &v);
		adjMat[u][v] = 1;
		adjMat[v][u] = 1;
	}

	return 0;
}

