// 에라토스테네스의 체

bool prime[10000]; //false로 초기화, 다 소수라고 가정

void eratos() {
    prime[0] = prime[1] = true;//0과 1은 소수가 아님
    
    for(int i=2; i<10000; i++) {
        if (prime[i]) continue;//소수가 아닌 애들은 패스
        
        for(int j=2; i*j<10000; j++) {
            //범위내에서 배수 구하기
            prime[i*j] = true;//소수의 배수들은 소수가 아니다.
        }
    }
}
