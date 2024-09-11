#include <iostream>

int main() {
    int numbers[] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109,

                     112, 113, 116, 117, 118};

    int sizeArr = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;
    int min = numbers[0];

    for (int i = 0; i < sizeArr; i++) {
        sum += numbers[i];
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    int acc = 0;
    for (int i = 0; i < sizeArr; i++) {
        acc += min + i;
    }

    int result = min + sizeArr - (acc - sum + 1);

    if (result == min + sizeArr - 1) {
        std::cout << "No repeated number: " << min << std::endl;
    } else {
        std::cout << "Repeated number: " << result << std::endl;
    }
    return 0;
}
