#if defined(__cplusplus)
#    define LEA_API_EXTERN extern "C"
#else
#    define LEA_API_EXTERN
#endif

#if defined(LEA_STATIC)
#    define LEA_API_DECLSPEC
#else
#    if defined(WIN32) || defined(_WIN32)
#        if defined(LEA_DLL)
#            define LEA_API_DECLSPEC __declspec(dllexport)
#        else
#            define LEA_API_DECLSPEC __declspec(dllimport)
#        endif
#    else
#        define LEA_API_DECLSPEC
#    endif
#endif

#define LEA_API LEA_API_EXTERN LEA_API_DECLSPEC
