#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int apartment[3][3][3] = {
	{{3, 1, 5}, {4, 1, 8}, {1, 5, 3}},
	{{9, 0, 3}, {8, 1, 1}, {4, 3, 4}},
	{{7, 3, 4}, {6, 3, 9}, {2, 2, 2}},
	};
	int building=0, floor = 0, room = 0, sumbuilding = 0, sumfloor = 0, sumroom = 0;
	int buildcnt[3] = { 0,0,0 };
	int floorcnt[3] = { 0,0,0 };
	scanf("%d %d %d", &building, &floor, &room);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				if (building == i) sumbuilding += apartment[i][j][k];
				if (floor == j) sumfloor += apartment[i][j][k];
				if (room == k) sumroom += apartment[i][j][k];
				buildcnt[i] += apartment[i][j][k];
				floorcnt[j] += apartment[i][j][k];
			}
		}
	}
	printf("%d동에 거주 중인 인원은 %d명입니다\n%d층에 거주 중인 인원은 %d명입니다\n%d호에 거주 중인 인원은 %d명입니다\n", building, sumbuilding, floor, sumfloor, room, sumroom);
	printf("=================================\n");
	for (int i = 0; i < 3; i++) printf("%d동에 거주 중인 인원은 %d명입니다\n", i, buildcnt[i]);
	for (int i = 0; i < 3; i++) printf("%d층에 거주 중인 인원은 %d명입니다\n", i, floorcnt[i]);
	return 0;
}