---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: h
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://oj.vnoi.info/problem/hello22_schoolplan
  bundledCode: "#line 1 \"DataStructure/DSU_partially_persistent.h\"\n// Partially\
    \ persistent DSU\n//\n// Supports:\n// - Linear history (version t+1 always build\
    \ on top of version t)\n// - Query history information at version t\n//\n// Tested:\n\
    // - https://oj.vnoi.info/problem/hello22_schoolplan\nstruct PartiallyPersistentUnionFind\
    \ {\n    vector<int> lab, colors, t_unite;  // colors[u] = 0/1 -> same/diff colors\
    \ from parent\n\n    PartiallyPersistentUnionFind(int n)\n            : lab(n\
    \ + 1, -1), colors(n + 1, 0), t_unite(n + 1, INT_MAX) {\n    }\n\n    // return\
    \ {root, u same color as root?}\n    pair<int,int> getRoot(int t, int x) {\n \
    \       if (t_unite[x] > t) {\n            return { x, 0 };\n        }\n     \
    \   auto [r, col] = getRoot(t, lab[x]);\n        return {r, col ^ colors[x]};\n\
    \    }\n\n    // return false if cannot merge u and v\n    bool canMerge(int t,\
    \ int x, int y) {\n        auto [root_x, color_x] = getRoot(t, x);\n        auto\
    \ [root_y, color_y] = getRoot(t, y);\n        if (root_x == root_y) {\n      \
    \      return color_x != color_y;\n        }\n        return true;\n    }\n\n\
    \    bool merge(int t, int x, int y) {\n        auto [root_x, color_x] = getRoot(t,\
    \ x);\n        auto [root_y, color_y] = getRoot(t, y);\n        x = root_x; y\
    \ = root_y;\n        if (x == y) {\n            return color_x != color_y;\n \
    \       }\n        if (lab[x] > lab[y]) {\n            std::swap(x, y);\n    \
    \        std::swap(color_x, color_y);\n        }\n        lab[x] += lab[y];\n\
    \        lab[y] = x;\n        // Note that here we are connecting x and y, not\
    \ root_x and root_y\n        // So we need to set colors according to colors of\
    \ x and y\n        // (relative to their roots)\n        colors[y] = color_x ==\
    \ color_y;\n        t_unite[y] = t;\n        return true;\n    }\n};\n"
  code: "// Partially persistent DSU\n//\n// Supports:\n// - Linear history (version\
    \ t+1 always build on top of version t)\n// - Query history information at version\
    \ t\n//\n// Tested:\n// - https://oj.vnoi.info/problem/hello22_schoolplan\nstruct\
    \ PartiallyPersistentUnionFind {\n    vector<int> lab, colors, t_unite;  // colors[u]\
    \ = 0/1 -> same/diff colors from parent\n\n    PartiallyPersistentUnionFind(int\
    \ n)\n            : lab(n + 1, -1), colors(n + 1, 0), t_unite(n + 1, INT_MAX)\
    \ {\n    }\n\n    // return {root, u same color as root?}\n    pair<int,int> getRoot(int\
    \ t, int x) {\n        if (t_unite[x] > t) {\n            return { x, 0 };\n \
    \       }\n        auto [r, col] = getRoot(t, lab[x]);\n        return {r, col\
    \ ^ colors[x]};\n    }\n\n    // return false if cannot merge u and v\n    bool\
    \ canMerge(int t, int x, int y) {\n        auto [root_x, color_x] = getRoot(t,\
    \ x);\n        auto [root_y, color_y] = getRoot(t, y);\n        if (root_x ==\
    \ root_y) {\n            return color_x != color_y;\n        }\n        return\
    \ true;\n    }\n\n    bool merge(int t, int x, int y) {\n        auto [root_x,\
    \ color_x] = getRoot(t, x);\n        auto [root_y, color_y] = getRoot(t, y);\n\
    \        x = root_x; y = root_y;\n        if (x == y) {\n            return color_x\
    \ != color_y;\n        }\n        if (lab[x] > lab[y]) {\n            std::swap(x,\
    \ y);\n            std::swap(color_x, color_y);\n        }\n        lab[x] +=\
    \ lab[y];\n        lab[y] = x;\n        // Note that here we are connecting x\
    \ and y, not root_x and root_y\n        // So we need to set colors according\
    \ to colors of x and y\n        // (relative to their roots)\n        colors[y]\
    \ = color_x == color_y;\n        t_unite[y] = t;\n        return true;\n    }\n\
    };\n"
  dependsOn: []
  isVerificationFile: false
  path: DataStructure/DSU_partially_persistent.h
  requiredBy: []
  timestamp: '2022-01-12 00:52:55+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: DataStructure/DSU_partially_persistent.h
layout: document
redirect_from:
- /library/DataStructure/DSU_partially_persistent.h
- /library/DataStructure/DSU_partially_persistent.h.html
title: DataStructure/DSU_partially_persistent.h
---