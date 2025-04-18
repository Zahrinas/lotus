#ifndef WPDS_COMPAT_H
#define WPDS_COMPAT_H

// Compatibility shims for modern C++ standards
// These definitions replace the deprecated std::unary_function and std::binary_function

namespace std {
    #if __cplusplus < 201103L
    // Replacement for std::unary_function
    template<typename Arg, typename Result>
    struct unary_function {
        typedef Arg argument_type;
        typedef Result result_type;
    };

    // Replacement for std::binary_function
    template<typename Arg1, typename Arg2, typename Result>
    struct binary_function {
        typedef Arg1 first_argument_type;
        typedef Arg2 second_argument_type;
        typedef Result result_type;
    };
    #endif
}

#endif // WPDS_COMPAT_H 