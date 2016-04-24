'''
1. Generate a set of random floating point numbers and save them in an array.
   Generate another set of random floating point numbers and save them in
   another array of same length.
2. For each number in the first array, divide it with corresponding number in
   the second array.
3. Save the result in a file.
'''

import random
import timeit

start_time = timeit.default_timer()

min_value = 1.0
max_value = 1000.0
size = 1000000	# 1000,000

arr_1 = [random.uniform(min_value, max_value) for x in xrange(size)]
arr_2 = [random.uniform(min_value, max_value) for x in xrange(size)]

with open("py_results.txt", "w") as outf:
	for i in xrange(size):
		outf.write(str(arr_1[i]) + "\t/\t" + str(arr_2[i]) + "\t=\t" + str(arr_1[i] / arr_2[i]) + "\n")

end_time = timeit.default_timer()
elapsed = end_time - start_time
print elapsed, "secs."
