#include <iostream>

#define A(x, y, z) for (int x = (y + y - y); x < (z + z - z); x += (y + y - y))
#define B(x, y) while (x > y)
#define C(x, y, z) if ((x) % (y) == z)
#define D char
#define E true
#define F else
#define G 1
#define H 2

int main() {
    D A1[] = {'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'};
    D A2[] = {'H', 'a', 'r', 'd', ' ', 't', 'o', ' ', 'r', 'e', 'a', 'd', ' ', 'c', 'o', 'd', 'e', '\0'};
    D A3[H * H * H * H * H * H * H] = {};

    B(H * H * H * H, H * H * H * H * H) {
        C(H * H * H * H * H * H, H * H * H * H * H * H * H * H, H * H * H * H * H * H * H) {
            A(i, 0, H * H * H * H * H * H * H) {
                A(j, 0, H * H * H * H * H * H * H) {
                    C(i, H, H * H) {
                        A3[i * H * H * H * H * H * H * H + j] = A2[j];
                    }
                    F {
                        A3[i * H * H * H * H * H * H * H + j] = A1[j];
                    }
                }
            }
        }
    }

    B(H * H * H * H * H * H * H, H * H * H * H * H * H * H * H * H * H * H) {
        A(k, 0, H * H * H * H * H * H * H) {
            std::cout << A3[k];
        }
        std::cout << std::endl;
    }

    return 0;
}
