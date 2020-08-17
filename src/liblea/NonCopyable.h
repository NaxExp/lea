#ifndef LIBLEA_INCLUDED_NONCOPYABLE_H
#define LIBLEA_INCLUDED_NONCOPYABLE_H 1

namespace lea
{

class NonCopyable
{
public:
    NonCopyable() {}
    ~NonCopyable() {}

    NonCopyable(const NonCopyable& other) = delete;
    NonCopyable& operator=(const NonCopyable& other) = delete;
};

} // namespace lea

#endif
