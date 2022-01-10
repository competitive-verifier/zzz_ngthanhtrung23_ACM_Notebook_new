---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: DataStructure/test/dsu.test.cpp
    title: DataStructure/test/dsu.test.cpp
  - icon: ':heavy_check_mark:'
    path: DataStructure/test/dsu_aizu.test.cpp
    title: DataStructure/test/dsu_aizu.test.cpp
  _isVerificationFailed: false
  _pathExtension: h
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"DataStructure/DisjointSet.h\"\nstruct DSU {\n    vector<int>\
    \ lab;\n\n    DSU(int n) : lab(n+1, -1) {}\n\n    int getRoot(int u) {\n     \
    \   if (lab[u] < 0) return u;\n        return lab[u] = getRoot(lab[u]);\n    }\n\
    \n    bool merge(int u, int v) {\n        u = getRoot(u); v = getRoot(v);\n  \
    \      if (u == v) return false;\n        if (lab[u] > lab[v]) swap(u, v);\n \
    \       lab[u] += lab[v];\n        lab[v] = u;\n        return true;\n    }\n\n\
    \    bool same_component(int u, int v) {\n        return getRoot(u) == getRoot(v);\n\
    \    }\n\n    int component_size(int u) {\n        return -lab[getRoot(u)];\n\
    \    }\n};\n"
  code: "#pragma once\nstruct DSU {\n    vector<int> lab;\n\n    DSU(int n) : lab(n+1,\
    \ -1) {}\n\n    int getRoot(int u) {\n        if (lab[u] < 0) return u;\n    \
    \    return lab[u] = getRoot(lab[u]);\n    }\n\n    bool merge(int u, int v) {\n\
    \        u = getRoot(u); v = getRoot(v);\n        if (u == v) return false;\n\
    \        if (lab[u] > lab[v]) swap(u, v);\n        lab[u] += lab[v];\n       \
    \ lab[v] = u;\n        return true;\n    }\n\n    bool same_component(int u, int\
    \ v) {\n        return getRoot(u) == getRoot(v);\n    }\n\n    int component_size(int\
    \ u) {\n        return -lab[getRoot(u)];\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/DisjointSet.h
  requiredBy: []
  timestamp: '2022-01-07 04:54:04+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - DataStructure/test/dsu.test.cpp
  - DataStructure/test/dsu_aizu.test.cpp
documentation_of: DataStructure/DisjointSet.h
layout: document
redirect_from:
- /library/DataStructure/DisjointSet.h
- /library/DataStructure/DisjointSet.h.html
title: DataStructure/DisjointSet.h
---