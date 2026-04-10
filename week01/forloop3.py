# Read integer input
rows = int(input("Enter the number of rows: "))

for i in range(1, rows + 1):  # controls rows
    # Print spaces
    for j in range(rows - i):
        print(" ", end="")
        
    # Print left pyramid hashes
    for k in range(i):
        print("#", end="")
        
    # Print gap
    print("  ", end="")
    
    # Print right pyramid hashes
    for l in range(i):
        print("#", end="")
        
    # Move to the next line
    print()