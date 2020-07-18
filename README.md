## filesystem



```
currently supported commands
---------------------------------------------------------------------------
| cat    | makes a file if doesnt exist reading from stdin , or prints it |
| mkdir  | makes a directory                                              |
| ls     | just like ls                                                   |
| cd     | just like cd                                                   |
| find   | finds the name in all the tree onwards from pwd                |
| all    | prints all the files and folders                               |
| exit   | duh                                                            |
---------------------------------------------------------------------------
```



### usage
if any arg is given to binary it will run in interative mode , else no prompt
``` 
source test.sh
```  
contains a basic performace test for the binary , i'd recommend 
using values lesser then 500 for test . also a sample input and output is given
correspondingly named fils  . to run the test your self 
```
cat input | ./bin 
```
to run the interative mode 
```
./bin  1
```

### build 
```
make gen
```
or just checkout logs on github itself [rickRoll](https://github.com/roz3x/fs/runs/885605575?check_suite_focus=true)

### deps
```
gcc & xxd 
```


