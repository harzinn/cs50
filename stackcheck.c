#include <stdio.h>
#include <sys/resource.h>

void set_stack_size(size_t size) {
    struct rlimit rl;
    getrlimit(RLIMIT_STACK, &rl);
    rl.rlim_cur = size;
    setrlimit(RLIMIT_STACK, &rl);
}

void recursive_function(int n) {
    if (n == 0) {
        return;
    }
    printf("Recursion depth: %d\n", n);
    recursive_function(n - 1);
}

int main() {
    size_t new_stack_size = 16 * 1024 * 1024; // 16 MB
    set_stack_size(new_stack_size);
    
    int depth = 1000000; // Example recursion depth
    recursive_function(depth);
    
    return 0;
}