#include <stdio.h>
#include <Windows.h>
;
int main(int argc, char* argv[]) {
	float x, y, a;
	for (y = 1.5; y > -1.5; y -= 0.1) {
		for (x = -1.5; x < 1.5; x += 0.05) {
			a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0 ? '*' : ' ');
		}
		system("color 0c");
		putchar('\n');
	}
	printf("           Ä³Ä³\n");
	printf("           ÓÀÔ¶¿ªÐÄ¿ìÀÖ£¡\n");
	return 0;
}