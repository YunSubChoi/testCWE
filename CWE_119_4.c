//c 119_4
int getValueFromArray(int *array, int len, int index) {

int value;

// check that the array index is less than the maximum 

// length of the array 
if (index < len) {
/*이렇게 수정할 것
 (index> = 0 && index <len) { ... 
    배열 인덱스가 배열의 올바른 값 범위 내에 있는지 확인하십시오 .
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