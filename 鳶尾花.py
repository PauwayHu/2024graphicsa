import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns

from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import accuracy_score 

df = pd.read_csv('iris/iris.data')
print(df.head())
print(df.describe())
print(df.info())

df = df.dropna(subset=['petal_width_cm'])
print(df.describe())
print(df.info())

sns.pairplot(df, hue='class', size=2.5)
print(df['class'].value_counts())

df['class'].replace(["Iris-setossa","versicolor"], ["Iris-setosa","Iris-versicolor"], inplace=True)
df['class'].value_counts()