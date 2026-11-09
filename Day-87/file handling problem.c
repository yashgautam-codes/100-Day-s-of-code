/* Q 137. Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role. */
#include <stdio.h>
enum UserRole 
{
    ADMIN,
    USER,
    GUEST
};
int main() 
{
    enum UserRole currentRole = ADMIN;
    switch (currentRole) {
        case ADMIN:
            printf("Welcome, Administrator! You have full access to the system.\n");
            break;
            
        case USER:
            printf("Welcome back, User! You can view and edit your profile.\n");
            break;
            
        case GUEST:
            printf("Welcome, Guest! You have limited view-only access.\n");
            break;
            
        default:
            printf("Error: Unknown user role.\n");
            break;
    }
    return 0;
}
