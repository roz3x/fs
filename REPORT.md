# project abstract 
	
```
implementation of file system , that supports basic commands as *nix system.
also the use of porper data structue (BTree) to perform operation such as search.
```

# navigation of project

```
-------------------------------------------------------------------------------------------|
| ./main.c :   	   |     contains the entry point of the program .  reads from the         |
|		   |     input the name of command and runs the appropriate                |
|		   |     function . if the function is not found , it wont break .         |
|                  |                                                                       |
|                  |                                                                       |
|./functions.c :   |     contains defination of all the functions the fs supports .        |
|		   |     and also a declaration array (F) .                                |
|                  |                                                                       |
|                  |                                                                       |
|./schema.h : 	   |     this contains the defination for the concreate type the           |
|		   |     project uses . like inode : a single instance of directory        |
|		   |     or file . and fs : which will contain the buffer of all files .   |
|		   |     the inode will itself contain the information where to find the   |
|		   |     content of file in start and end intergers.                       |
--------------------------------------------------------------------------------------------
```

	   
# group 

members:

* vishal guleria 
	* 185511
	* +91 8212702690
	* vishalguleriaiit@gmail.com

* ishant  kumar
	* 185501
	* +91 7807289552
	* ishantchoudhary508@gmail.com

* shivang upadhayay 
	* 185515
	* +91 7591886741
	* oroz3x@gmail.com


# working example 

a test run (test.sh) is also available in the github actions log . or consider following README.md for 
local setup . the test will automatically generate random file and directories name . sometimes
jump inside directories too . at last will call a find command from the root folder 
