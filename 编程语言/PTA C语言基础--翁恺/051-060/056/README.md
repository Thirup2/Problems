# 求给定精度的简单交错序列部分和
本题要求编写程序，计算序列部分和 1 - 1/4 + 1/7 - 1/10 + ... 直到最后一项的绝对值不大于给定精度eps。

### 输入格式:
输入在一行中给出一个正实数eps。

### 输出格式:
在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围。

### 输入样例1:
```
4E-2
```
### 输出样例1:
```
sum = 0.854457
```
### 输入样例2:
```
0.02
```
### 输出样例2:
```
sum = 0.826310
```