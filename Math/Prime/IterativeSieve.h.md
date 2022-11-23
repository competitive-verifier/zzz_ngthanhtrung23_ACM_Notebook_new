---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Math/tests/sieve.test.cpp
    title: Math/tests/sieve.test.cpp
  _isVerificationFailed: false
  _pathExtension: h
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links:
    - https://judge.yosupo.jp/problem/enumerate_primes
    - https://judge.yosupo.jp/submission/50677
    - https://www.spoj.com/problems/KPRIMES2/
    - https://www.spoj.com/problems/PRIMES2/
  bundledCode: "#line 1 \"Math/Prime/IterativeSieve.h\"\n// Tested:\n// - (up to 5e8)\
    \ https://judge.yosupo.jp/problem/enumerate_primes\n//\n// Notes:\n// - There's\
    \ faster sieve using Segmented Sieve + Wheel factorization.\n//   (can run upto\
    \ 2^31)\n//   See: https://judge.yosupo.jp/submission/50677\n//   Problems: https://www.spoj.com/problems/KPRIMES2/\n\
    //         or: https://www.spoj.com/problems/PRIMES2/\ntypedef unsigned int uint;\n\
    \n// NOTE: gP(n) is incorrect for even values of n\nconst uint N = 5e8 + 11;\n\
    uint mark[N / 64 + 1];\n// DO NOT USE gP(n) directly.\n#define gP(n) (mark[(n)>>6]&(1<<(((n)>>1)&31)))\n\
    #define rP(n) (mark[(n)>>6]&=~(1<<(((n)>>1)&31)))\n\n// prime indexed from 0\n\
    uint prime[30111000], nprime;\n\nvoid sieve() {\n    memset(mark, -1, sizeof mark);\n\
    \    uint i;\n    uint sqrtN = (uint)sqrt((double) N) + 1;\n\n    for (i = 3;\
    \ i < sqrtN; i += 2) if (gP(i)) {\n        uint i2 = i + i;\n        for (uint\
    \ j = i * i; j < N; j += i2) rP(j);\n    }\n    nprime = 0;\n    prime[nprime++]\
    \ = 2;\n    for (i = 3; i < N; i += 2)\n        if (gP(i)) prime[nprime++] = i;\n\
    }\n\nbool isPrime(uint n) {\n    if (n <= 1) return false;\n    if (n == 2) return\
    \ true;\n    if (n % 2 == 0) return false;\n\n    if (gP(n)) return true;\n  \
    \  return false;\n}\n"
  code: "// Tested:\n// - (up to 5e8) https://judge.yosupo.jp/problem/enumerate_primes\n\
    //\n// Notes:\n// - There's faster sieve using Segmented Sieve + Wheel factorization.\n\
    //   (can run upto 2^31)\n//   See: https://judge.yosupo.jp/submission/50677\n\
    //   Problems: https://www.spoj.com/problems/KPRIMES2/\n//         or: https://www.spoj.com/problems/PRIMES2/\n\
    typedef unsigned int uint;\n\n// NOTE: gP(n) is incorrect for even values of n\n\
    const uint N = 5e8 + 11;\nuint mark[N / 64 + 1];\n// DO NOT USE gP(n) directly.\n\
    #define gP(n) (mark[(n)>>6]&(1<<(((n)>>1)&31)))\n#define rP(n) (mark[(n)>>6]&=~(1<<(((n)>>1)&31)))\n\
    \n// prime indexed from 0\nuint prime[30111000], nprime;\n\nvoid sieve() {\n \
    \   memset(mark, -1, sizeof mark);\n    uint i;\n    uint sqrtN = (uint)sqrt((double)\
    \ N) + 1;\n\n    for (i = 3; i < sqrtN; i += 2) if (gP(i)) {\n        uint i2\
    \ = i + i;\n        for (uint j = i * i; j < N; j += i2) rP(j);\n    }\n    nprime\
    \ = 0;\n    prime[nprime++] = 2;\n    for (i = 3; i < N; i += 2)\n        if (gP(i))\
    \ prime[nprime++] = i;\n}\n\nbool isPrime(uint n) {\n    if (n <= 1) return false;\n\
    \    if (n == 2) return true;\n    if (n % 2 == 0) return false;\n\n    if (gP(n))\
    \ return true;\n    return false;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: Math/Prime/IterativeSieve.h
  requiredBy: []
  timestamp: '2022-11-23 19:16:36+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Math/tests/sieve.test.cpp
documentation_of: Math/Prime/IterativeSieve.h
layout: document
redirect_from:
- /library/Math/Prime/IterativeSieve.h
- /library/Math/Prime/IterativeSieve.h.html
title: Math/Prime/IterativeSieve.h
---
