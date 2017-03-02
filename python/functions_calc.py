#!/usr/bin/python

# Functions
def add(Num,Num2) :
	return Num + Num2

def subtract(Num,Num2) :
	return Num2 - Num

def multiply(Num,Num2) :
	return Num * Num2

def divide(Num,Num2) :
	return Num / Num2

operation = 5
while operation != 5 :
	print "1. Add ( A to B)"
	print "2. Subtract ( A from B)"
	print "3. Multiply (A and B)"
	print "4. Divide (A by B)"
	print "5. Exit"

	operation = input("Operation : ")

	if operation == 1 :
		Num = input("A : ")
		Num2 = input("B : ")
		print add(Num,Num2)

	elif operation == 2 :
		Num = input("A : ")
		Num2 = input("B : ")
		print subtract(Num,Num2)

	elif operation == 3 :
		Num = input("A : ")
		Num2 = input("B : ")
		print multiply(Num,Num2)

	elif operation == 4 :
		Num = input("A : ")
		Num2 = input("B : ")
		print divide(Num,Num2)

	elif operation == 5 :
		break

