import random
import os

#this program will create empty c function
#each function in a random named file with
#an .c extension.
# then it  will create a C static library
#made for task zero 0x09-static_libraries

def create_c_file(str_param):


	# this variable contains a template code
	#for an empty function in c.
	
	code = \
	"""
	#include \"holberton.h\"
	
	{}
	""".format(str_param)
	with open("file-{}.c".format(random.randint(0,50)),"a") as c_file:
		c_file.write(code)
	
		

with open("holberton.h", "r") as content:
	functions = content.read().split(';')

	for elem in functions:	
		create_c_file(elem.strip()+ '{}')

#execute command that creats a static lib
os.system("ar rc libholberton.a *.c")

#remove .c files
os.system("rm *.c")
