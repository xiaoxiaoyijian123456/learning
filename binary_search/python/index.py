# -*- coding: utf-8 -*-

# run it with: 
#   python index.py

def binary_search(data, val, low, high):
    mid = (low + high)/2

    midVal = data[mid]
    if midVal == val:
		return mid 
    if mid == low or mid == high:
		return -1

    if midVal > val:
		return binary_search(data, val, low, mid)
    else: 
		return binary_search(data, val, mid, high)

if __name__ == "__main__":
    data = [1, 3, 7, 8, 9, 19, 21, 49, 56]
    
    val = 8
    i = binary_search(data, val, 0, len(data)-1)
    print("val=%d, i=%d" % (val, i))

    val = 18
    i = binary_search(data, val, 0, len(data)-1)
    print("val=%d, i=%d" % (val, i))
