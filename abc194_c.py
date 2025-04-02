def main():
    
    A = list(map(int, input().split()))
    del A[0]

    offset = 200
    freq = [0] * 401

    for a in A:
        freq[a + offset] += 1
    
    ans = 0

    for i in range(401):
        for j in range(i + 1, 401):
            diff = j - 1
            ans += freq[i] * freq[j] * (diff ** 2)

    
    print(ans)

if __name__ == "__main__":
    main()