# Data prerocessing

## Data normalization

### Mean normalization

Scale the data to have zero mean.
Achieved by subtracting the mean from all data points.

### Max normalization

Divide each data point by the maximum value of the data set.

### min-max normalization

Scale the data to a fixed range of 0 to 1
It keeps the shape of the original distribution intact

### z-score normalization

Scale the data to have zero mean and unit variance.
Achieved by subtracting the mean and dividing by the standard deviation.

## Data binning

### Cross tabulation

Cross tabulation is a way to summarize the relationship between two categorical variables.
It is a table that shows the frequency of occurence of one variable with respect to another variable.

eg:
> how many countries are landlocked in each continent?

``` python

pd.crosstab(df['Continent'], df['Landlocked'])

```

|Landlocked|False|True|
|---|---|---|
|Africa|48|0|
|Asia|9|0|
|Europe|0|0|
|North America|2|0|
 
`These values are made up`

### Grouping

Categorises a dataset into groups based on a column value.
The groupby() function is used to group the data.

``` python

df.groupby('Continent').mean()
df.groupby('Continent').sum()


```

|Continent|Population|Live Exp|
|---|---|---|
|Africa|1.2|60|
|Asia|1.5|70|
|Europe|0.5|80|
...

|Continent|Population|Live Exp|
|---|---|---|
|Africa|6|300|
|Asia|15|350|
|Europe|2.5|400|
...

### Deduplication

Deduplication is the process of removing duplicate rows from a dataset.
Thed drop_duplicates() function is used to remove duplicate rows.

``` python

df.drop_duplicates()

```

### Missing Values

1. Missing Completely at Random (MCAR)
   1. No relationship between the missing data and any other values, observed or missing, within the dataset.
2. Missing at Random (MAR)
   1. There is a systematic relationship between the propensity of missing values and the observed data, but not the missing data.
   2. Eg: missing values in a survey are more likely to be from people who did not want to participate, but there is no relationship between whether a person participates and their income.
3. Missing Not at Random (MNAR)
    3. There is a systematic relationship between the propensity of a value to be missing and its values.
    4. Eg: missing values in a survey are more likely to be from people who did not want to participate, and those people are more likely to have lower incomes.

Missing values can be represented in a dataset in a number of ways:

1. Empty cell
2. Null value
3. NaN (Not a Number)

How to deal with missing values:

One way to deal with missing values is to remove the rows that contain them entirely.
Another way is to replace the missing values with a value:

Eg: replace missing values with the mean of the column.
