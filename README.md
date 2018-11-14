# moneyTracking

# I'll keep editing this file to keep updated on what I'll add next whoever is interested in this project. <br> If you have any suggestion feel free to email me(can be found on my profile)

this is an program that allows me to keep track of the money that I've spent and on what each month and save it on a file.

it allows to insert multiple lines of text, but it stops when given a blank.

## file format example:
```
this is ok: 
line1 
line2 
line3 

this isn't possible since it will stop when inserted the blank line, the only way to make it happen is putting even a single space in the blank line:
line1 
line2 
line3 
 
line4
````

# functions:

## drawtable() 
is the function used to draw a kind of table that shows the choices the user has.

## write()
is the function used to write on a clean file, if the file doesn't exist this function will create it.

## update() - still has to be implemented
is the function used to write on an already existing file, it will get to the end of the file and keep writing from there.

## read() 
is the function used to read the content of an existing file and print it in console.

## findWord (string wordToFind, string fileName, string sentence) <br> -- still has to be implemented
is the function used to find a word in the content of the file, I'll choose between just finding a word/counting how many times a word is found or make it so you can keep writing from that word on.

## checInputIsInt(int choice) 
is the function used to check if the input given is an int and, if not, makes the user input until he inputs a number and no something else.





