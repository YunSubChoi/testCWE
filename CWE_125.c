//c 125
int getValueFromArray(int *array, int len, int index) {

int value;

// check that the array index is less than the maximum 

// length of the array 
if (index < len) {
/* 이렇게 수정할 것
 // check that the array index is within the correct 
 //range of values for the array 
if (index >= 0 && index < len) {
    */
// get the value at the specified index of the array 
value = array[index];
}
// if array index is invalid then output error message 

// and return value indicating error 
else {
printf("Value is: %d\n", array[index]);
value = -1;
}

return value;
}