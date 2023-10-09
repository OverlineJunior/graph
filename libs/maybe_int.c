#include <stdbool.h>

typedef struct {
    int value;
    bool is_some;
} MaybeInt;

MaybeInt some(int value) {
    MaybeInt s = {
        .value = value,
        .is_some = true
    };

    return s;
}

MaybeInt none(void) {
    MaybeInt n = {
        .value = 0,
        .is_some = false
    };

    return n;
}
