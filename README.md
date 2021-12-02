# **Binary trees in C**
### General
. What is a binary tree\
. What is the difference between a binary tree and a Binary Search Tree\
. What is the possible gain in terms of time complexity compared to linked lists\
. What are the depth, the height, the size of a binary tree\
. What are the different traversal methods to go through a binary tree\
. What is a complete, a full, a perfect, a balanced binary tree\

## Requirements
### General
. Allowed editors: ```vi```, ```vim```, ```emacs```\
. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89\
. All your files should end with a new line\
. A ```README.md``` file, at the root of the folder of the project, is mandatory\
. Your code should use the ```Betty``` style. It will be checked using betty-style.pl and betty-doc.pl\
. You are not allowed to use global variables\
. No more than 5 functions per file\
. You are allowed to use the standard library\
. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own ```main.c``` files at compilation. Our ```main.c``` files might be different from the one shown in the examples
. The prototypes of all your functions should be included in your header file called ```binary_trees.h```\
. Don’t forget to push your header file\
. All your header files should be include guarded\

## Tasks
### 0. New node
Write a function that creates a binary tree node\
&nbsp;&nbsp; . Prototype: binary_tree_t ```*binary_tree_node(binary_tree_t *parent, int value);```\
&nbsp;&nbsp; . Where ```parent``` is a pointer to the parent node of the node to create\
&nbsp;&nbsp; . And ```value``` is the value to put in the new node\
&nbsp;&nbsp; . When created, a node does not have any child\
&nbsp;&nbsp; . Your function must return a pointer to the new node, or ```NULL``` on failure\

### 1. Insert left
Write a function that inserts a node as the left-child of another node\
&nbsp;&nbsp; . Prototype: binary_tree_t ```*binary_tree_insert_left(binary_tree_t *parent, int value)```;\
&nbsp;&nbsp; . Where ```parent``` is a pointer to the node to insert the left-child in\
&nbsp;&nbsp; . And ```value``` is the value to store in the new node\
&nbsp;&nbsp; . Your function must return a pointer to the created node, or NULL on failure or if ```parent``` is ```NULL```\
&nbsp;&nbsp; . If ```parent``` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

### 2.Insert right
Write a function that inserts a node as the right-child of another node\
&nbsp;&nbsp; . Prototype: binary_tree_t ```*binary_tree_insert_right(binary_tree_t *parent, int value);```\
&nbsp;&nbsp; . Where ```parent``` is a pointer to the node to insert the right-child in\
&nbsp;&nbsp; . And ```value``` is the value to store in the new node\
&nbsp;&nbsp; . Your function must return a pointer to the created node, or NULL on failure or if ```parent``` is ```NULL```\
&nbsp;&nbsp; . If ```parent``` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

### 3. Delete
Write a function that deletes an entire binary tree\
&nbsp;&nbsp; . Prototype: void ```binary_tree_delete(binary_tree_t *tree);```\
&nbsp;&nbsp; . Where ```tree``` is a pointer to the root node of the tree to delete\
&nbsp;&nbsp; . If ```tree``` is ```NULL```, do nothing

### 4. Is leaf
Write a function that checks if a node is a leaf\
&nbsp;&nbsp; . Prototype: int ```binary_tree_is_leaf(const binary_tree_t *node);```\
&nbsp;&nbsp; . Where ```node``` is a pointer to the node to check\
&nbsp;&nbsp; . Your function must return ```1``` if ```node``` is a leaf, otherwise ```0```\
&nbsp;&nbsp; . If ```node``` is ```NULL```, return ```0```

### 5. Is root
Write a function that checks if a given node is a root\
&nbsp;&nbsp; . Prototype: ```int binary_tree_is_root(const binary_tree_t *node);```\
&nbsp;&nbsp; . Where ```node``` is a pointer to the node to check\
&nbsp;&nbsp; . Your function must return ```1``` if ```node``` is a root, otherwise ```0```
&nbsp;&nbsp; . If ```node``` is ```NULL```, return ```0```
