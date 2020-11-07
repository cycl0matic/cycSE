# cySE Search Engine

Datasets lighting fast fully functional Search Engine in C++ that using the Trie data structure to achieve High speed search and performance

# what is cySE

- cySE is a search tool that can help you wile dealing with any documents or any kind of datasets (text or whatever )

- Use it to search for a specific word in many datasets at no time.

- Use it to search for a specific query in many datasets at no time.

- Use it to match and compare a specific query in many datasets at a time.

- store multiple text data randomely and retrieve them as you want .

# How to use it

There are many commands that you can use just type `/help` and you will be fine.

### Example

```
/tf      ->   /tf 0 hi
```

- From the 0 document tell how many times the word `hi` exist in this document

```
/df hello
```

- Tells how many times the word `hello` is existed inside the all of your datasets

```
/search "any query here"
```

- This will present all the documents that contains this query and explains how relevant these documnets with our search query with underlining the query we search for if the whole query matched

### note :

`you can specify what ever you want after the parameter like : /search 0 "any query here" that will search in the 0 document and /search 'file name' "any query here" `

```
/exit
```

- Exit the program
