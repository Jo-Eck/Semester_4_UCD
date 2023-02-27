# Lesson 5: Data Preparation

## Data preparation

- Data cleaning: remove missing values, remove outliers, remove duplicates, etc.
- Data selection: filtering and subsetting
- Normalization: scaling, centering, conforming to a standard scale
- Handling missing values: replacing with a constant, replacing with a mean, median, mode, etc.
- Data integration: merging, joining, concatenating
- Feature engineering: creating new features from existing features

## Pandas

defacto standard for data analysis in Python
highly performant, in-memory, 2D data structure with labeled axes
built on top of NumPy

### Data structures

#### Series

- 1D array of indexed data (like a column in a spreadsheet)
- must be homogeneous (all values must be of the same type) but can be any NumPy data type
- each value can be accessed by its index label or by its integer position

```IPython
import pandas as pd

values = [1, 2, 3, 4, 5]
index = ['a', 'b', 'c', 'd', 'e']

s = pd.Series(values, index=index)
print(s)

    a    1
    b    2
    c    3
    d    4
    e    5
    dtype: int64

print(s[0]) # is the same as
print(s['a'])

    1
    1

print(s[0:3]) # is the same as
print(s['a':'c'])

    a    1
    b    2
    c    3
    dtype: int64
    a    1
    b    2
    c    3
    dtype: int64

```

##### Useful methods

A Series can be filtered by passing a boolean Series to it.
The result is a Series with only the values where the boolean Series is True.
A boolean Series can be created by comparing a Series to a value.

```IPython
print(s > 2)

    a    False
    b    False
    c     True
    d     True
    e     True
    dtype: bool

print(s[s > 2])
    
    c    3
    d    4
    e    5
    dtype: int64
    
```

The `describe()` function returns a Series with descriptive statistics for the Series.

```IPython
print(s.describe())

    count    5.000000
    mean     3.000000
    std      1.581139
    min      1.000000
    25%      2.000000
    50%      3.000000
    75%      4.000000
    max      5.000000
    dtype: float64

```

The `sort_values()` function returns a Series with the values sorted.
It creates a new Series, it does not modify the original Series.
It accepts the `ascending` parameter to specify whether the values should be sorted in ascending or descending order.

```IPython
print(s.sort_values(ascending=False))
    
        e    5
        d    4
        c    3
        b    2
        a    1
        dtype: int64
    
```

#### DataFrame

- 2D array of indexed data (like a spreadsheet)
- Every column is a Series in its own right
- A row can have many different data types but a column must be homogeneous

eg:

|Row position| Row index | Region | Population |Live Expectancy|
|------------|-----------|--------|------------|---------------|
|0           |Argentina  |South America        | 44000000|   75|
|1           |Spain      |Europe  | 46000000| 80|
|2           |Australia |Oceania | 24000000| 82|

creating a DataFrame

```IPython

countries = ['Argentina', 'Spain', 'Australia']
regions = ['South America', 'Europe', 'Oceania']
population = [44000000, 46000000, 24000000]
life_expectancy = [75, 80, 82]

data = {'Region': regions, 'Population': population, 'Life Expectancy': life_expectancy}
df = pd.DataFrame(data, index=countries)

print(df)

                Life Expectancy  Population         Region
    Argentina                75    44000000  South America
    Spain                    80    46000000         Europe
    Australia                82    24000000        Oceania

```

##### Useful methods

Loading data from a CSV file is as simple as calling the `read_csv()` function.

```IPython
df = pd.read_csv('data.csv')

```

The `head()` function returns the first n rows of the DataFrame.
The `tail()` function returns the last n rows of the DataFrame.

```IPython
print(df.head(2))

    Country  Life Expectancy  Population         Region
    0  Argentina                75    44000000  South America
    1      Spain                80    46000000         Europe

print(df.tail(2))
    
        Country  Life Expectancy  Population         Region
     1  Spain                80    46000000         Europe
     2  Australia            82    24000000        Oceania

```

The `describe()` function returns a DataFrame with descriptive statistics for each column.

```IPython
print(df.describe())

    Life Expectancy    Population
    count    3.000000  3.000000e+00
    mean     79.000000  4.466667e+07
    std       3.605551  1.154701e+07
    min      75.000000  2.400000e+07
    25%      77.500000  3.700000e+07
    50%      80.000000  4.600000e+07
    75%      81.000000  5.300000e+07
    max      82.000000  5.600000e+07

```

To get a single column, use the column name as a string.

```IPython
print(df['Region'])

    0    South America
    1           Europe
    2          Oceania
    Name: Region, dtype: object

```

But to get multiple columns, use the column names as a list.

```IPython
print(df[['Region', 'Population']])

            Region  Population
    0  South America    44000000
    1         Europe    46000000
    2        Oceania    24000000

```

To get a single row use the `loc` attribute.

```IPython
print(df.loc['Argentina'])

    Life Expectancy          75
    Population         44000000
    Region         South America
    Name: Argentina, dtype: object

```

Alternatively, use the `iloc` attribute to get a row by its integer position.

```IPython
print(df.iloc[0])

    Life Expectancy          75
    Population         44000000
    Region         South America
    Name: Argentina, dtype: object

```

Both `loc` and `iloc` can be used to get multiple rows.

```IPython
print(df.loc[['Argentina', 'Spain']])

                Life Expectancy  Population         Region
    Argentina                75    44000000  South America
    Spain                    80    46000000         Europe

print(df.iloc[[0, 1]])

                Life Expectancy  Population         Region
    Argentina                75    44000000  South America
    Spain                    80    46000000         Europe
```