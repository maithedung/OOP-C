#include <bits/stdc++.h>
using namespace std;

#define INFINITY 9999
#define MAX 10

void dijkstra(int G[MAX][MAX], int n, int startnode)
{

	int cost[MAX][MAX], distance[MAX], pred[MAX];
	int visited[MAX], count, mindistance, nextnode, i, j;

	//pred[] luu cac dinh ma khoang cach ngan nhat tu no den dinh nguon
	//count dem so nut ma di qua den den dich
	//Tao ma tran trong so
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (G[i][j] == 0)
				cost[i][j] = INFINITY;
			else
				cost[i][j] = G[i][j];

	//Khoi tao mang pred[],distance[] and visited[]
	for (i = 0; i < n; i++)
	{
		distance[i] = cost[startnode][i];
		pred[i] = startnode;
		visited[i] = 0;
	}

	distance[startnode] = 0;
	visited[startnode] = 1;
	count = 1;

	while (count < n - 1)
	{
		mindistance = INFINITY;

		//Nut ke tiep co khoang cach nho nhat
		for (i = 0; i < n; i++)
			if (distance[i] < mindistance && !visited[i])
			{
				mindistance = distance[i];
				nextnode = i;
			}

		//Kiem tra neu co duong dan tot hon: tinh lai khoang cach cac nut chua duoc tham
		visited[nextnode] = 1;
		for (i = 0; i < n; i++)
			if (!visited[i])
				if (mindistance + cost[nextnode][i] < distance[i])
				{
					distance[i] = mindistance + cost[nextnode][i];
					pred[i] = nextnode;
				}
		count++;
	}

	//In ra duong di va khoang cach den moi nut
	for (i = 0; i < n; i++)
		if (i != startnode)
		{
			printf("\nKhoang cac toi nut %d=%d", i, distance[i]);
			printf("\nDuong di =%d", i);

			j = i;
			do
			{
				j = pred[j];
				printf("<-%d", j);
			} while (j != startnode);
		}
}
//void dijkstra(int G[MAX][MAX], int n, int startnode);
// Xuat ket qua ma tran ke cua do thi ra man hinh.

void XuatMTKe(int G[][MAX], int n)
{
	printf("\nMa tran ke:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%3d ", G[i][j]);
		printf("\n");
	}
}

int main()
{
	int G[MAX][MAX], i, j, n, u;
	printf("Nhap vao so dinh cua do thi:");
	scanf("%d", &n);
	printf("\nNhap vao ma tran ke cua do thi:\n");

	for (i = 0; i<n; i++)
		for (j = 0; j<n; j++)
			scanf("%d", &G[i][j]);
	// FILE *f = fopen("test.txt", "rt");
	// if (f == NULL)
	// {
	// 	printf("Doc file loi !!!");
	// 	return 0;
	// }
	// fscanf(f, "%d", &n);
	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j = 0; j < n; j++)
	// 	{
	// 		fscanf(f, "%d", &(G[i][j]));
	// 	}
	// }

	XuatMTKe(G, n);

	printf("\nNhap vao nut nguon:");
	scanf("%d", &u);
	dijkstra(G, n, u);

	return 0;
}
