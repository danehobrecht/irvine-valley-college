# Dane Hobrecht
# 1103521
# This program performs various functions on a given list.

# Define constant variables.
ONE_TEN = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
#ONE_TEN =  [12, 20, 10, 14, 54, 16, 75, 38, 79, 103]
#ONE_TEN = [1, 25, 25, 4, 5, 4, 7, 60, 9, 10]

def main():
	print("The original data for all functions is:", ONE_TEN)

	#a. Demonstrate swapping the first and last element.
	data = list(ONE_TEN)
	swapFirstLast(data)
	print("After swapping first and last:", data)

	#b. Demonstrate shifting to the right.
	data = list(ONE_TEN)
	shiftRight(data)
	print("After shifting right:", data)

	#c. Demonstrate replacing even elements with zero.
	data = list(ONE_TEN)
	replaceEven(data)
	print("After replacing even elements:", data)

	#d. Demonstrate replacing values with the larger of their neighbors.
	data = list(ONE_TEN)
	replaceNeighbors(data)
	print("After replacing with neighbors:", data)

	#e. Demonstrate removing the middle element.
	data = list(ONE_TEN)
	removeMiddle(data)
	print("After removing the middle element(s):", data)

	#f. Demonstrate moving even elements to the front of the list.
	data = list(ONE_TEN)
	evenToFront(data)
	print("After moving even elements:", data)

	#g. Demonstrate finding the second largest value.
	print("The second largest value is:", secondLargest(ONE_TEN))

	#h. Demonstrate testing if the list is in increasing order.
	print("The list is in increasing order:", isIncreasing(ONE_TEN))

	#i. Demonstrate testing if the list contains adjacent duplicates.
	print("The list has adjacent duplicates:", hasAdjacentDuplicate(ONE_TEN))

	#j. Demonstrate testing if the list contains duplicates.
	print("The list has duplicates:", hasDuplicate(ONE_TEN))

def swapFirstLast(data:list) -> list:
	'''Swaps the first and last elements.'''
	first = data[0]
	last = data[len(data) - 1]
	data.append(first)
	data.remove(last)
	data.insert(0, last)
	data.remove(data[1])

def shiftRight(data:list) -> list:
	'''Shifts the elements to the right.'''
	last = data[len(data) - 1]
	data.remove(last)
	data.insert(0, last)

def replaceEven(data:list) -> list:
	'''Replaces even elements with integer 0.'''
	for i in range(len(data)):
		if (data[i] % 2 == 0):
			data.insert(i, 0)
			data.remove(data[i + 1])

def replaceNeighbors(data:list) -> list:
	'''Replaces each element with it's greater neighbor.'''
	first = data[0]
	last = data[len(data) - 1]
	for i in range(len(data)):
		value = data[i]
		if (value != first and value != last):
			pre = data[i - 1]
			post = data[i + 1]
			if (pre > post):
				data.remove(value)
				data.insert(i, pre)
			elif (post > pre):
				data.remove(value)
				data.insert(i, post)

def removeMiddle(data:list) -> list:
	'''Removes the median(s).'''
	if (len(data) % 2 == 0):
		median1 = data[int(len(data) / 2)]
		median2 = data[int(len(data) / 2) - 1]
		data.remove(median1)
		data.remove(median2)
	else:
		median = data[int(len(data) / 2)]
		data.remove(median)

def evenToFront(data:list) -> list:
	'''Moves even elements to the front.'''
	i = 0
	a = 0
	temp = 0
	while (i < len(data)):
		if (data[i] % 2 == 0):
			j = i
			while (j > a):
				temp = data[j - 1]
				data[j - 1] = data[j]
				data[j] = temp
				j -= 1
			a += 1
		i += 1

def secondLargest(data:list) -> int:
	'''Finds the second largest value.'''
	maximum = 0
	new_maximum = 0
	new_data = list(data)
	for i in range(len(data)):
		if (data[i] > data[i - 1] and data[i] > maximum):
			maximum = data[i]
	new_data.remove(maximum)
	for i in range(len(new_data)):
		if (new_data[i] > new_data[i - 1] and new_data[i] > new_maximum):
			new_maximum = new_data[i]
	return new_maximum

def isIncreasing(data:list) -> bool:
	'''Checks for increasing order.'''
	i = 1
	state = True
	while (i < len(data)):
		if (data[i] < data[i - 1]):
			state = False
		i += 1
	return state

def hasAdjacentDuplicate(data:list) -> bool:
	'''Checks for adjacent duplicates.'''
	i = 1
	state = False
	while (i < len(data)):
		if (data[i] == data[i - 1]):
			state = True
		i += 1
	return state

def hasDuplicate(data:list) -> bool:
	'''Checks for duplicates.'''
	state = False
	if len(data) != len(set(data)):
		state = True
	else:
		state = False
	return state

if __name__ == "__main__":
	main()

##Test Run 1
##The original data for all functions is: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
##After swapping first and last: [10, 2, 3, 4, 5, 6, 7, 8, 9, 1]
##After shifting right: [10, 1, 2, 3, 4, 5, 6, 7, 8, 9]
##After replacing even elements: [1, 0, 3, 0, 5, 0, 7, 0, 9, 0]
##After replacing with neighbors: [1, 3, 4, 5, 6, 7, 8, 9, 10, 10]
##After removing the middle element(s): [1, 2, 3, 4, 7, 8, 9, 10]
##After moving even elements: [2, 4, 6, 8, 10, 1, 3, 5, 7, 9]
##The second largest value is: 9
##The list is in increasing order: True
##The list has adjacent duplicates: False
##The list has duplicates: False
##
##Test Run 2
##The original data for all functions is: [12, 20, 10, 14, 54, 16, 75, 38, 79, 103]
##After swapping first and last: [103, 20, 10, 14, 54, 16, 75, 38, 79, 12]
##After shifting right: [103, 12, 20, 10, 14, 54, 16, 75, 38, 79]
##After replacing even elements: [0, 0, 0, 0, 0, 0, 75, 0, 79, 103]
##After replacing with neighbors: [12, 12, 14, 54, 54, 75, 75, 79, 103, 103]
##After removing the middle element(s): [12, 20, 10, 14, 75, 38, 79, 103]
##After moving even elements: [12, 20, 10, 14, 54, 16, 38, 75, 79, 103]
##The second largest value is: 79
##The list is in increasing order: False
##The list has adjacent duplicates: False
##The list has duplicates: False
##
##Test Run 3
##The original data for all functions is: [1, 25, 25, 4, 5, 4, 7, 60, 9, 10]
##After swapping first and last: [10, 25, 25, 4, 5, 4, 7, 60, 9, 1]
##After shifting right: [10, 1, 25, 25, 4, 5, 4, 7, 60, 9]
##After replacing even elements: [1, 25, 25, 0, 5, 0, 7, 0, 9, 0]
##After replacing with neighbors: [1, 25, 25, 25, 25, 25, 60, 60, 60, 10]
##After removing the middle element(s): [1, 25, 25, 4, 7, 60, 9, 10]
##After moving even elements: [4, 4, 60, 10, 1, 25, 25, 5, 7, 9]
##The second largest value is: 25
##The list is in increasing order: False
##The list has adjacent duplicates: True
##The list has duplicates: True
