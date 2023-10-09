#include <stdbool.h>

typedef struct {
    int value;
    bool is_some;
} MaybeInt;

MaybeInt some(int value);
MaybeInt none(void);
