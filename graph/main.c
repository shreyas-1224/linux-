#include<stdio.h>
#include<stdlib.h>
#include "graph.h"

int main(){
	
	graph g ;
	g_init(&g , "adj_matrix.txt");
	print(g);
	printf("\n");
	BFS(g,0);
	printf("\n");
	prims(g , 0);
	return 1 ;
}
