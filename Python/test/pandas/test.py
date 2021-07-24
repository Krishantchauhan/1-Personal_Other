print("Krishant")

import os

import pandas as pd

df = pd.read_csv(r'/Users/krishant/Documents/Study/1-Personal_Other/Python/test/pandas/salaries.csv')

print(df['Salary'].max())

check = df['Age'] > 30
print(check)
