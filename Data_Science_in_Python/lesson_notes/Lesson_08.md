# Lesson 8 Modeling and Prediction

## Predictive Modeling

Predictive modeling uses statistical and machine learning techniques on historical data to  predict outcomes.

Examples of predictive modeling:

* Spam
* Risk assessment
* Fraud detection
* Algorithmic trading

### Classification

Is when the process of leaning from a labled dataset to predict the class of unlabled data.

### Regression

Learn from an existing training dataset to predict a continous value.

## Finding  Patterns

It is usually a good idear to start by looking at the data to see if there are any patterns.

Making a scatter plot of the data can be a good way to start, as it shows many different aspects of the data.

Only looking at the mean and standard deviation of the data can be misleading, the best example of this is the [Anscombe's quartet](https://en.wikipedia.org/wiki/Anscombe%27s_quartet).

![Anscombe's quartet](https://upload.wikimedia.org/wikipedia/commons/thumb/e/ec/Anscombe%27s_quartet_3.svg/1200px-Anscombe%27s_quartet_3.svg.png)

### Correlation

Correlation is a measure of how much two variables change together.

The correlation coefficient is a number between -1 and 1 that measures the strength of the correlation.

* 1: Perfect positive correlation
* 0: No correlation
* -1: Perfect negative correlation

### Linear Regression

Linear regression is a statistical method for finding the best-fit straight line through a set of points.

The line is defined by the equation:
    $$y = mx + b$$

Where $m$ is the slope and $b$ is the intercept. The slope is defined as:
    $$m = \frac{\sum_{i=1}^{n} (x_i - \bar{x})(y_i - \bar{y})}{\sum_{i=1}^{n} (x_i - \bar{x})^2}$$

And the intercept is defined as:
    $$b = \bar{y} - m\bar{x}$$

The best-fit line is the line that minimizes the sum of the squared errors.

### Linear Regression in Python

```python
import numpy as np

def linear_regression(x, y):
    """
    Perform a linear regression
    """
    # Calculate the number of data points
    n = len(x)

    # Calculate the mean of x and y
    x_mean = np.mean(x)
    y_mean = np.mean(y)

    # Calculate the terms needed for the numerator and denominator of m
    numerator = 0
    denominator = 0
    for i in range(n):
        numerator += (x[i] - x_mean) * (y[i] - y_mean)
        denominator += (x[i] - x_mean) ** 2

    # Calculate the slope
    m = numerator / denominator

    # Calculate the intercept
    b = y_mean - (m * x_mean)

    # Return the slope and intercept
    return m, b
```

### R-Squared

R-squared is a measure of how well the regression line fits the data.

It is defined as:
    $$R^2 = 1 - \frac{\sum_{i=1}^{n} (y_i - f_i)^2}{\sum_{i=1}^{n} (y_i - \bar{y})^2}$$

Where $f_i$ is the predicted value of $y_i$.


## Multiple Regression

Multiple regression is a statistical method for finding the best-fit line through a set of points with more than one independent variable.

It is pretty much the same as linear regression, but with more than one independent variable.

The equation for the best-fit line is:
    $$y = m_1x_1 + m_2x_2 + ... + m_nx_n + b$$

Where $m_1$ is the slope for $x_1$, $m_2$ is the slope for $x_2$, and so on.

## Outliers

Especially in combinated with linear regression, outliers can have a big impact on the result. It is therefore important to look for outliers before doing any analysis.

Removing the outliers is an important step in the analysis, but it is important to be careful not to remove too many data points.

### Finding Outliers

One way to find outliers is to make a scatter plot of the data and look for points that are far away from the rest of the data.

To find outliers in a more systematic way, we can use the interquartile range (IQR).
The IQR is the difference between the third quartile and the first quartile. The first quartile is the value that is greater than 25% of the data, and the third quartile is the value that is greater than 75% of the data. The IQR is a measure of how spread out the data is.

The IQR is defined as:
    $$IQR = Q_3 - Q_1$$

Where $Q_1$ is the first quartile and $Q_3$ is the third quartile.

The IQR is used to find outliers by defining a range that contains most of the data. The range is defined as:
    $$[Q_1 - 1.5IQR, Q_3 + 1.5IQR]$$

Any data points that are outside of this range are considered outliers and should be removed.