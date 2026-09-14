// Online C compiler to run C program online
#include <stdio.h>
// Hello
     unsigned int securityConfig = 0;
     unsigned int GUEST_ACCESS = 1 << 0;
     unsigned int REMOTE_ACCESS = 1 << 1;
     unsigned int LOGGING = 1 << 2;
     unsigned int ENCRYPTION = 1 << 3;
     unsigned int FIREWALL = 1 << 4;
     unsigned int TWO_FACTOR = 1 << 5;
     unsigned int AUTO_UPDATE = 1 << 6;
     unsigned int ADMIN_MODE = 1 << 7;
//Uses mask to enable specific bit
    void enableFeature(unsigned int *config, unsigned int mask) {
    *config = *config | mask;
}
//Uses mask to disable specific bit
    void disableFeature(unsigned int *config, unsigned int mask) {
    *config = *config &~ mask;
}
//Uses mask to toggle specific bit
    int isFeatureEnabled(unsigned int config, unsigned int mask) {
    if ((config & mask) != 0) {
        return 1;
    } else {
        return 0;
    }
}
    void displayConfiguration(unsigned int config) {
        printf("\n===== SECURITY CONFIGURATION =====\n\n");
        if (config & GUEST_ACCESS) {
            printf("Guest Access:  ON\n");
        } else {
            printf("Guest Access:  OFF\n");
        }

        if (config & REMOTE_ACCESS) {
            printf("Remote Access: ON\n");
        } else {
            printf("Remote Access: OFF\n");
        }

        if (config & LOGGING) {
            printf("Logging:       ON\n");
        } else {
            printf("Logging:       OFF\n");
        }

        if (config & ENCRYPTION) {
            printf("Encryption:    ON\n");
        } else {
            printf("Encryption:    OFF\n");
        }

        if (config & FIREWALL) {
            printf("Firewall:      ON\n");
        } else {
            printf("Firewall:      OFF\n");
        }

        if (config & TWO_FACTOR) {
            printf("Two Factor:    ON\n");
        } else {
            printf("Two Factor:    OFF\n");
        }

        if (config & AUTO_UPDATE) {
            printf("Auto Update:   ON\n");
        } else {
            printf("Auto Update:   OFF\n");
        }

        if (config & ADMIN_MODE) {
            printf("Admin Mode:    ON\n");
        } else {
            printf("Admin Mode:    OFF\n");
        }
    }
    void displayBinary(unsigned int config){
        printf("Security Configuration:\n\n");
        for(int i = 7; i >= 0; i--){
        int bit = (config >> i) & 1;
        printf("%d", bit );
    }
    }

int main() {

    enableFeature(&securityConfig, FIREWALL);
    enableFeature(&securityConfig, LOGGING);
    enableFeature(&securityConfig, ENCRYPTION);
    displayBinary(securityConfig);
    displayConfiguration(securityConfig);
    // Architect's Challenge — Bit Shift Investigation
    int x = 2;
    int bitShift1 = x << 1;
    int bitShift2 = x << 2;
    int bitShift3 = x << 3;
    int bitShift4 = x >> 1;
    printf("\n\nArchitect's Challenge \n%d\n%d\n%d\n%d", bitShift1,bitShift2,bitShift3,bitShift4);
    //What mathematical operation does x << 1 generally represent? n^2
        
    //What does x << 2 generally represent? n^3

    //What does x << 3 generally represent? n^4

    //What happens when you right-shift a positive integer? it works as division by 2^n

    //Are there situations where shifting cannot safely be treated as multiplication/division? if the number is negative or there is overflow
        return 0;
}
//Consider the 8-bit binary value: 11111011
//1. Is this value positive or negative if interpreted as an 8-bit two's complement number? It is a negative number because the leading bit is 1

//2. What decimal value does it represent? -5

//3. Show the steps you used to determine the answer. 1st: Invert the bits 2nd: add 1 3rd: convert back to digits







