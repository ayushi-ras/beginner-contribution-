def print_complex_pattern(n):
    for i in range(1, n + 1):
        # Print spaces before the numbers
        for j in range(n - i):
            print(" ", end=" ")
        
        # Print increasing numbers
        for j in range(1, i + 1):
            print(j, end=" ")
        
        # Print decreasing numbers
        for j in range(i - 1, 0, -1):
            print(j, end=" ")
        
        # Move to the next line
        print()

if __name__ == "__main__":
    n = int(input("Enter the number of rows: "))
    print_complex_pattern(n)
