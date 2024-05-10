template <int N> struct factorial_calc {
    constexpr static unsigned long long value() {
        
        if constexpr  (N == 1)
            return 1;
        else
            return N * factorial_calc<N - 1>::value();
    }
};
