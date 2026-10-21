#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isPalindrome(int x) {
    char nums[12];
    char converted_nums[12];
    bool result = false;

    // nums: 결과를 저장할 배열
    // "%d": 정수를 십진수 문자로 표현하라는 뜻
    // x: 변환할 값
    sprintf(nums, "%d", x);

    int n = strlen(nums);

    if (x >= 0) {
        for (int i = 0, j = n - 1; i < n; i++, j--) {
            converted_nums[i] = nums[j];

            converted_nums[n] = '\0';  // 문자열 끝 표시
        }
    }
    
    // sprintf, strlen, strcmp와 같은 함수를 쓰기 위해 int 대신 char 배열로 만들었다.
    // int 배열로 만들 경우 나머지 연산으로 각 자릿수를 빼주는 과정이 O(n)만큼 추가된다.
    if (strcmp(converted_nums, nums) == 0) {
        result = true;
    }

    return result;
}