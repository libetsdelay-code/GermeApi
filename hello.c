#include <windows.h>

int main() {
    MessageBoxW(
        NULL,
        L"Hello, world!",
        L"My Title",
        MB_YESNOCANCEL | MB_ICONEXCLAMATION
    );

    return EXIT_SUCCESS;
}