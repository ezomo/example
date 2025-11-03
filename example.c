
// putcharと同様，標準の関数
void cellout(int a);

// 再帰関数。aからzまで出力
void print_rec(int a, int z, void (*out)(int)) {
    if (a > z) return;         // 終了条件
    (*out)(a);                 // 関数ポインタで出力
    print_rec(a + 1, z, out);  // 再帰
    return;                    // 一応，なくても良い．
}

void main(void) {
    void (*fptr)(int) = &cellout;  // 関数ポインタ
    print_rec(97, 97 + 25, fptr);  // 'a'から'z'まで出力
    return;
}