char str[] = "";                 // 구분할 문자열
char* ptr = strtok(str, " ");    // 공백을 기준으로 구분
while (ptr != NULL) {            // 더이상 구분할 것이 없을 떄까지
  ptr = strtok(NULL, " ");       // 다음 문자 구분
}
