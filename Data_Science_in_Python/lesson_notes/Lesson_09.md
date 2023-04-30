# Lesson 9 Classification and Evaluation

Predictive modelling uses statistical and machine learning techniques on historical data to  predict outcomes.

Examples of predictive modelling:

* Spam
* Risk assessment
* Fraud detection
* Algorithmic trading
* Recommendation engines

## Classification

### Binary Classification

Splitting  data into two classes.
Eg determining wheather to give a person a morgage based on their income and savings.

![binary classification](/.images/2023-04-28-13-34-04.png)

### Multi-class Classification

Splitting data into more than two classes.
eg determining what number is in a picture of a handwritten digit.


## Classification Algorithms

Many differnet algorithms can be used for classification. Some of the most common are:

* k-nearest neighbors
* Decision trees
* Naive Bayes
* support vector machines

The fundamental idea is to look at past examples and repeat the past decision.

### Feature space

The n dimentiional space that the data lives in is called the feature space.

Distance:
For simple numerical data the euclidean distance can be used to measure the distance between two points.
But here it is important to normalize the data so that the different features are on the same scale.

### Decision boundary

The boundary between the classes is called the decision boundary.

### k-nearest neighbors

The k-nearest neighbors algorithm is a simple algorithm that can be used for classification.

The algorithm works by looking at the k nearest neighbors and then taking a majority vote.

![](/.images/k_neares_neigbour.png)

### Decision trees

Decision trees are a simple algorithm that can be used for classification.

pretty much a flow chart for making a decision.

## Evaluation

Assessing how well a model performs is an important part of the modelling process.
This is often done by splitting the data into a training set and a test set.

### Hold out method

The hold out method is a simple way to evaluate a model.
A certain percentage of the data is held out and not used for training. This data is then used to evaluate the model.

### Overfitting

Why not simply use all the data for training?
If we use all the data for training we might get a model that is very good at predicting the training data but not very good at predicting new data. Without having an opportunity to actually know how it works on new data we can't know if it is overfitting.

### Criteria for evaluation

There are many different criteria for evaluating a model. Some of the most common are:

* Accuracy - the percentage of correct predictions
* Confusion matrix - a table showing the number of correct and incorrect predictions (true positives, true negatives, false positives, false negatives)

### Cross validation

Cross validation is a technique for evaluating a model that uses all the data for both training and testing. The data is split into k folds. The model is trained on k-1 folds and tested on the remaining fold. This is repeated k times so that each fold is used as the test set once. The results are then averaged.

### ROC curve
