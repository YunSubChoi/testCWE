//c 362_2

void f(pthread_mutex_t *mutex) {
pthread_mutex_lock(mutex);

/* access shared resource */ 


pthread_mutex_unlock(mutex);
}

/* 이렇게 수정할 것
int f(pthread_mutex_t *mutex) {
int result;

result = pthread_mutex_lock(mutex);
if (0 != result)
return result;


// access shared resource 


return pthread_mutex_unlock(mutex);
}
*/