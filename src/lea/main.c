#include <lea/lea.h>

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;

    LeaContext* ctx;

    ctx = leaCreateContext();
    leaDestroyContext(ctx);

    return 0;
}
