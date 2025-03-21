#include <stdio.h>

#include "ssconfig.h"

int handler(const char* key, const char* value, size_t line_no, void* user) {
    printf("Key:%s, Value:%s, Line_no:%zu File:%s\n", key, value, line_no, (char*)user);
    return 0;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <config file>\n", argv[0]);
        return 1;
    }
    sscf_setup(256);
    sscf_parse(argv[1], handler, argv[1]);
    return 0;
}