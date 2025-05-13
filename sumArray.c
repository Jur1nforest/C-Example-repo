#include <stdio.h> //printing and reading in console

int main(int argc, char *argv[]){
    int nums = {1, 2, 3, 4, 5};
    int numsL = 5;
    int sum = 0;
    for(int i = 0; i < numsL; ++i){
        sum += nums[i];
    }
    prinf("The sum is %i", sum);
}