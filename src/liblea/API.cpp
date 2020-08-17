#include <new>

#include <lea/lea.h>
#include <liblea/Context.h>

using namespace lea;

LEA_API LeaContext* leaCreateContext(void)
{
    Context* ctx;

    ctx = new (std::nothrow) Context;
    return (LeaContext*)ctx;
}

LEA_API void leaDestroyContext(LeaContext* ctx)
{
    Context* c;

    c = (Context*)ctx;
    delete c;
}
