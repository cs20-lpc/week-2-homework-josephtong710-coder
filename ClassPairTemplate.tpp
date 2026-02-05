// Implement ClassPairTemplate class constructor and print methods 
template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 val1, T2 val2) {
    first = val1;
    second = val2;
}

template <typename T1, typename T2>
void Pair<T1, T2>::print() {
    std::cout << "(" << first << ", " << second << ")" << std::endl;
}