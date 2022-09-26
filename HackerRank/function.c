int max_of_four(int a, int b, int c, int d){
    int f, s;
    f = max_of_two(a, b);
    s = max_of_two(c, d);
    return max_of_two(f, s);
}

int max_of_two(int a, int b){
    if (a > b) {
        return a;
    }
    return b;
}
