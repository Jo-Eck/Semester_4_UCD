# Lesson 7: Text Mining
# Text mining

## Unstructured text

- Unstructured text is text that is not in a structured format
    - Examples:
        - Emails
        - Tweets
        - News articles
        - Blog posts
        - PDFs
        - Word documents
        - etc.


## Things to mine for

- Sentiment
    - Positive
    - Negative
    - Neutral
- Topics
    - What is the text about?

- Entities
    - People
    - Places
    - Organizations
    - Dates
    - etc.

- Keywords
    - What are the important words in the text?


### Tokenising text

- Tokenising text is the process of splitting text into smaller units
    - Examples:
        - Sentences
        - Words
        - Characters
        - N-grams
        - etc.
    ```python
    from nltk.tokenize import sent_tokenize, word_tokenize

    text = "Hello Mr. Smith, how are you doing today? The weather is great, and Python is awesome. The sky is pinkish-blue. You shouldn't eat cardboard."

    print(sent_tokenize(text))
    print(word_tokenize(text))
    ```
    ``` bash
    ['Hello Mr. Smith, how are you doing today?', 'The weather is great, and Python is awesome.', 'The sky is pinkish-blue.', "You shouldn't eat cardboard."]
    ['Hello', 'Mr.', 'Smith', ',', 'how', 'are', 'you', 'doing', 'today', '?', 'The', 'weather', 'is', 'great', ',', 'and', 'Python', 'is', 'awesome', '.', 'The', 'sky', 'is', 'pinkish-blue', '.', 'You', 'should', "n't", 'eat', 'cardboard', '.']
    ```

### Frequency distribution of tokens

- Frequency distribution of tokens is the process of counting the number of times each token appears in a text
    ```python
    from nltk.tokenize import sent_tokenize, word_tokenize
    from nltk.probability import FreqDist

    text = "Hello Mr. Smith, how are you doing today? The weather is great, and Python is awesome. The sky is pinkish-blue. You shouldn't eat cardboard."

    word_tokens = word_tokenize(text)

    fdist = FreqDist(word_tokens)

    print(fdist)
    print(fdist.most_common(2))
    ```
    ``` bash
    FreqDist({'.': 4, 'is': 3, ',': 2, 'The': 2, 'you': 1, 'doing': 1, 'weather': 1, 'great': 1, 'and': 1, 'Python': 1})
    [('.', 4), ('is', 3)]
    ```

## Bag of words

- Bag of words is a representation of text that describes the occurrence of words within a document
    - It involves two things:
        - A vocabulary of known words
        - A measure of the presence of known words


## N-grams

- N-grams are a contiguous sequence of n items from a given sample of text or speech
    - Examples:
        - Unigrams
        - Bigrams
        - Trigrams
        - 4-grams
        - etc.
    ```python
    from nltk.util import ngrams

    sentence = "The quick brown fox jumps over the lazy dog"

    n = 2

    bigrams = ngrams(sentence.split(), n)

    for grams in bigrams:
        print(grams)
    ```
    ``` bash
    ('The', 'quick')
    ('quick', 'brown')
    ('brown', 'fox')
    ('fox', 'jumps')
    ('jumps', 'over')
    ('over', 'the')
    ('the', 'lazy')
    ('lazy', 'dog')
    ```

## Reducing the dimensionality of text

- Case folding
    - Converting all characters to lowercase
- Stop word removal
    - Removing common words that don't add much meaning to the text
    - eg "the", "a", "is", "are", "was", "were", "and", "or", "but", "not", "etc."
- Stemming
    - Reducing words to their root form
    - eg "cats", "catlike", "catty" -> "cat"
- Lemmatization
    - Reducing words to their root form, ensuring that the reduced form is a valid word
    - eg "better" -> "good"
    - NLTK has a built-in lemmatizer

- Minimum document frequency
    - Removing words that appear in less than a specified number of documents

## TF-IDF

- To differenciate between words which are so common that they are useless for classification and words which are rare but carry a lot of information, we can use the TF-IDF (term frequency-inverse document frequency) score
    - TF-IDF is a numerical statistic that is intended to reflect how important a word is to a document in a collection or corpus
    - The TF-IDF score is composed by two terms: the first computes the normalized Term Frequency (TF), aka. the number of times a word appears in a document, divided by the total number of words in that document; the second term is the Inverse Document Frequency (IDF), computed as the logarithm of the number of the documents in the corpus divided by the number of documents where the specific term appears
    - The TF-IDF score is the product of these two terms
    - The TF-IDF score increases proportionally to the number of times a word appears in the document but is offset by the frequency of the word in the corpus
    - TF-IDF is one of the most popular term-weighting schemes today; a survey conducted in 2015 showed that 83% of text-based recommender systems in digital libraries use TF-IDF
    - One of the simplest ranking functions is computed by summing the TF-IDF for each query term; many more sophisticated ranking functions are variants of this simple model