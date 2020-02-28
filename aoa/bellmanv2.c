/*
Aim : Write a program to implement a Single Source Shortest Path Algorithm
(Bellman-Ford).
*/

#include<stdio.h>
#include<stdlib.h>
#define max_value 100
struct Edge{
	int source,dest,weight;

};
struct Graph{
int V,E;

struct Edge* edge;

};
struct Graph* creategraph(int V,int E)
{
   struct Graph* graph = (struct Graph*) malloc( sizeof(struct Graph));
   graph->V=V;
   graph->E=E;
   graph->edge =(struct Edge*)malloc(graph->E* sizeof(struct Edge));
   return graph;
}
void FinalSolution(int dist[], int n)
{
    printf("\nVertex\tDistance from Source Vertex\n");
    int i; 
    for (i = 0; i < n; ++i){
		printf("%d \t\t %d\n", i, dist[i]);
	}
}
void BellmanFord(struct Graph* graph,int source)
{
int V,E,i,j;
int v,u,e,weight;
V=graph->V;
E=graph->E;
int strdistance[V];
for(i=0;i<V;i++)
{
strdistance[i]=max_value;
}
strdistance[source]=0;
for(i=1;i<=(V-1);i++)
{
for(j=0;j<E;j++)
{
  u = graph->edge[j].source;
  v = graph->edge[j].dest;
  weight = graph->edge[j].weight;
      if (strdistance[u] + weight < strdistance[v])
                strdistance[v]=strdistance[u]+weight;

   
}
}
FinalSolution(strdistance,V);
}
int main()
{
int v,e,s,i;
printf("Enter the number of vertices :");
scanf("%d",&v);
printf("Enter the number of edges :");
scanf("%d",&e);
printf("Enter the number of source vertex :");
scanf("%d",&s);
struct Graph* graph = creategraph(v,e);
for(i=0;i<e;i++){
        
        printf("Enter %d edge source :",i+1);
        scanf("%d",&graph->edge[i].source);
        printf("Enter %d edge destinition :",i+1);
        scanf("%d",&graph->edge[i].dest);
  		printf("Enter %d edge weight :",i+1);
        scanf("%d",&graph->edge[i].weight);
    }
BellmanFord(graph,s);
return 0;
}
/*
OUTPUT:
Enter the number of vertices :4
Enter the number of edges :4
Enter the number of source vertex :0
Enter 1 edge source :0
Enter 1 edge destinition :1
Enter 1 edge weight :4
Enter 2 edge source :0
Enter 2 edge destinition :3
Enter 2 edge weight :5
Enter 3 edge source :3
Enter 3 edge destinition :2
Enter 3 edge weight :3
Enter 4 edge source :2
Enter 4 edge destinition :1
Enter 4 edge weight :-10

Vertex	Distance from Source Vertex
0 		 0
1 		 -2
2 		 8
3 		 5

*/
















