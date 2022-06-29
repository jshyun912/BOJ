import pandas as pd

A, B, C = map(int,input().split())
D = A * B // C
E = (A * B % C) / C
print(D+E)