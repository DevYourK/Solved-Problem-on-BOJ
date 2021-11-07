#include <iostream>
using namespace std;

/*
    XML
    1. 평문---32~127 사이에 있는(32, 127도 포함) ASCII코드값으로 이루어지며, 다음 문자는 포함되면 안 된다: <, >, &
    2. 다음과 같은 문자열:
        &lt;
        &gt;
        &amp;
       이것들은 각각 <, >, &를 인코딩한다.
    3. &xHEX; HEX는 양의 짝수 자릿수의 16진수여야 하며, 0~9 또는 알파벳 A~F 대소문자로 이루어진다.
    4. <tag> 여는 태그이다. 태그는 숫자 또는 알파벳 소문자로 이루어진 문자열이어야 한다. 이 태그는 context 스택에 push된다.
    5. <tag/> 이 태그는 context 스택에 push되지 않는다.
    6. </tag> 닫는 태그이다. context 스택의 맨 위에 있는 태그를 pop하게 된다. 단, 이때 맨 위에 있는 태그와 이 태그의 문자열이 일치해야 한다.
*/

int main() {
    while(1) {
        string s;
        cin >> s;
        if(cin.eof()) break;

    }
}