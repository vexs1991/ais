/*
 * parasite.c
 *
 *  Created on: Dec 21, 2015
 *      Author: klaus
 */


char code[] = "\x68\x01\x01\x01\x01\x81\x34\x24\x2c\x28\x20\x0b\x48\xb8\x20\x76"
        "\x69\x72\x75\x73\x20\x3b\x50\x48\xb8\x6d\x20\x61\x6e\x20\x65\x6c"
        "\x66\x50\x48\xb8\x48\x65\x79\x21\x20\x49\x20\x61\x50\x6a\x01\x5f"
        "\x48\x89\xe6\x6a\x1c\x5a\x6a\x01\x58\x0f\x05\x31\xff\x6a\x3c\x58"
        "\x0f\x05";

int main(int argc, char **argv) {
    void (*x)();
    x = &code;
    x();
}
