#include <stdio.h>
#include <conio.h>
#include <windows.h>

int i, j, height = 20, width = 20;
int gameover;
int x, y, fruitx, fruity, score;
int tailX[100], tailY[100];
int nTail;
enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirecton dir;

void setup() {
    gameover = 0;

    // Snake's starting position
    x = width / 2;
    y = height / 2;

    // Initial fruit position
    fruitx = rand() % width;
    fruity = rand() % height;

    score = 0;
}

void draw() {
    system("cls");
    for (i = 0; i < width + 2; i++)
        printf("#");
    printf("\n");

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (j == 0)
                printf("#");
            if (i == y && j == x)
                printf("O");
            else if (i == fruity && j == fruitx)
                printf("F");
            else {
                int print = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o");
                        print = 1;
                    }
                }
                if (print == 0)
                    printf(" ");
            }
            if (j == width - 1)
                printf("#");
        }
        printf("\n");
    }

    for (i = 0; i < width + 2; i++)
        printf("#");
    printf("\n");
    printf("Score:%d", score);
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                gameover = 1;
                break;
        }
    }
}

void logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }

    // Check for collision with walls
    if (x >= width) x = 0; else if (x < 0) x = width - 1;
    if (y >= height) y = 0; else if (y < 0) y = height - 1;

    // Check for collision with tail
    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y)
            gameover = 1;
    }

    // Check for collision with fruit
    if (x == fruitx && y == fruity) {
        score += 10;
        fruitx = rand() % width;
        fruity = rand() % height;
        nTail++;
    }
}

int main() {
    setup();

    while (!gameover) {
        draw();
        input();
        logic();
        Sleep(10);  // Platform-specific delay
    }

    return 0;
}

