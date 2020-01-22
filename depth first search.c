#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int a[10][10], visited[10],n;

void dfs(int i) {
	int j;
	printf("%d\t", i);
	visited[i] = 1;    // mark it as visited

    //find the unvisited adjacent vertex
	for(j=0; j<n; ++j) {
		if(visited[j]==0 && a[i][j]!=0) {
			dfs(j);
		}
	}
}

int main() {
	int i, j, start;
	clrscr();
	printf("Enter no.of vertices");
	scanf("%d", &n);
	
	printf("Enter the adjacency matrix: ");
	for(i=0; i<n; ++i) {
		for(j=0; j<n; ++j) {
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter the starting vertex");
	scanf("%d", &start);
	
	// Initially all vertices are unvisited 
	for(i=0; i<n; ++i) {
		visited[i] = 0;
	}
	// start traversing from 
	printf("Starting vertex: %d\n", start);
	printf("Visited vertices: ");
	// calling dfs function
	dfs(start);
	getch();
	return 0;
}
