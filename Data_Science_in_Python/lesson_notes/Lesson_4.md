# Lesson 4

## Data formats

### CSV

- Comma Separated Values
- Simple text format
- divided by commas and newlines

### JSON

- JavaScript Object Notation
- Simple text format
- similar to Python dictionaries
- can be nested even different collections
- separated by brackets, curly braces, and commas
- whitespace is ignored

> in python it can be represented as a dictionary or a sting

### XML

- eXtensible Markup Language
- text format
- usually parsed in a tree structure
- can be nested

### HTML

- Hypertext Markup Language
- usually badly written and inconsistent

## Web Scraping

### Reading the page source

- Extracting data from web pages
- websites often change their structure
- hammering a website with requests can get you blocked
- use sparingly

### APIs

- Application Programming Interface
- can interact with a website programmatically
- circumvent the the entire human interface
- can be more reliable than scraping

## Data Serialization

converts data structures into a format that can be stored or transmitted

### JSON

- open standard
- language independent
- human readable
- doesnt support custom data types

### Pickle

- Python specific
- binary format
- non human readable
- takes any Python object
