/* Q134. Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly. */
#include <stdio.h>
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main() {
    enum Status currentStatus = SUCCESS;
    switch (currentStatus) {
        case SUCCESS:
            printf("Operation completed successfully!\n");
            break;
        case FAILURE:
            printf("Error: Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Warning: Operation timed out.\n");
            break;
    }
    return 0;
}
