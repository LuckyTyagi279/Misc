#!/usr/bin/python

print "Hello World!"

# Lists, Tuples and Dictionaries
'''
Lists are what they seem - a list of values. 
			* Each one of them is numbered, starting from zero. 
			* You can remove values from the list, and add new values to the end.

Tuples are just like lists, but you can't change their values. 
			* The values that you give it first up, are the values that you are stuck with for the rest of the program. 
			* Each value is numbered starting from zero.

Dictionaries are similar to what their name suggests - a dictionary. 
			* In a dictionary, you have an 'index' of words, and for each of them a definition. 
			* In python, the word is called a 'key', and the definition a 'value'. 
			* You have an 'index' of words, and for each of them a definition. 
			* The values in a dictionary aren't numbered - they aren't in any specific order, either - the key does the same thing. 
			* You can add, remove, and modify the values in dictionaries.
'''
print "Here"

# TUPLES
tuple = ("Jan",'Feb', "Mar",'Apr', 'May', 'Jun', \
	 'Jul','Aug','Sep','Oct',"Nov",'Dec')

print tuple[0:3]

# LISTS
list = ["Jan",'Feb', "Mar",'Apr', 'May', 'Jun', \
	 'Jul','Aug','Sep','Oct',"Nov",'Dec']

list.append("lucky")
print list[0:13]

del list[12]
print list[0:13]

# DICTIONARIES
#Make the phone book:
phonebook = {'Andrew Parson':8806336, \
'Emily Everett':6784346, 'Peter Power':7658344, \
'Lewis Lame':1122345}

print phonebook['Andrew Parson']

phonebook['Lucky Tyagi'] = 1234567890
print phonebook['Lucky Tyagi']

print phonebook.keys()
