Current location of the players is [32 , -64] wrong result 
correct was supposed to be [31,-63] 
why? C sends arguments as values
When the computer calls the go_south_east() function, it
copies the value of the longitude variable to the lon argument.
This is just an assignment from the longitude variable to the lon
variable. When you call a function, you don’t send the variable as an
argument, just its valu
:
