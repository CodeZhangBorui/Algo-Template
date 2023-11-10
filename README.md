# Algo-Template

用 C++ 实现的一些有用的算法和数据结构。

> [!WARNING]
> 部分算法依赖于其他算法，在此仓库中使用 `#include` 的方式引入，因此在使用时需要注意。

## 输入 (Input)

| 项目 | 文件名 | 依赖 |
| :--- | :--- | :--- |
| 快速输入 | [Fast_Input.cpp](./Input/Fast_Input.cpp) | / |

## 数论 (Number Theory)

| 项目 | 文件名 | 依赖 |
| :--- | :--- | :--- |
| 最大公约数 | [Greatest_Common_Divisor.cpp](./Number_Theory/Greatest_Common_Divisor.cpp) | / |
| 最小公倍数 | [Least_Common_Multiple.cpp](./Number_Theory/Least_Common_Multiple.cpp) | 最大公约数 |
| 快速幂 | [Quick_Power.cpp](./Number_Theory/Quick_Power.cpp) | / |
| 欧拉筛素数 | [Euler_Sieve_Prime.cpp](./Number_Theory/Euler_Sieve_Prime.cpp) | / |
| 模意义下的乘法逆元 | [Modular_Multiplicative_Inverse.cpp](./Number_Theory/Modular_Multiplicative_Inverse.cpp) | / |
| 裴蜀定理 | [Bezout_Theorem.cpp](./Number_Theory/Bezout_Theorem.cpp) | 最大公约数 |

## 数据结构 (Data Structure)

| 项目 | 文件名 | 依赖 |
| :--- | :--- | :--- |
| ST表 | [ST_Table.cpp](./Data_Structure/ST_Table.cpp) | / |
| 并查集 | [Union_Find_Set.cpp](./Data_Structure/Union_Find_Set.cpp) | / |
| 树状数组 (区间加/区间求和) | [Binary_Tree.cpp](/Data_Structure/Binary_Tree.cpp) | / |
| 线段树 (区间加/区间求和) | [Segment_Tree.cpp](./Data_Structure/Segment_Tree.cpp) | / |
| 字典树（Trie） | [Trie.cpp](./Data_Structure/Trie.cpp) | / |

## 图论 (Graph Theory)

| 项目 | 文件名 | 依赖 |
| :--- | :--- | :--- |
| 邻接表 | [Adjacency_Matrix.cpp](./Graph_Theory/Adjacency_Matrix.cpp) | / |
| 链式前向星 | [Star_Representation.cpp](./Graph_Theory/Star_Representation.cpp) | / |
| 深度优先搜索 | [Depth_First_Search.cpp](./Graph_Theory/Depth_First_Search.cpp) | / |
| 广度优先搜索 | [Breadth_First_Search.cpp](./Graph_Theory/Breadth_First_Search.cpp) | / |
| 最短路 (Dijkstra) | [Dijkstra.cpp](./Graph_Theory/Dijkstra.cpp) | / |
| 最短路 (Floyd) | [Floyd.cpp](./Graph_Theory/Floyd.cpp) | / |
| 最短路 (Spfa) | [Spfa.cpp](./Graph%20Theory/Spfa.cpp) | / |
| 最小生成树 (Kruskal) | [Kruskal.cpp](./Graph_Theory/Kruskal.cpp) | / |
