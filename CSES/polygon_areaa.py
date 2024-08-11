def polygon_area(x, y):
    q = len(x)
    res = 0
    for i in range(q - 1):
        res += x[i] * y[i + 1] - x[i + 1] * y[i]
    res += x[q - 1] * y[0] - x[0] * y[q - 1]
    return abs(res)

if __name__ == "__main__":
    import sys
    input = sys.stdin.read

    # Read input
    data = input().strip().split()
    
    # Number of points
    q = int(data[0])
    
    # Initialize lists for x and y coordinates
    x = []
    y = []
    
    # Read the points
    index = 1
    for i in range(q):
        a = int(data[index])
        b = int(data[index + 1])
        x.append(a)
        y.append(b)
        index += 2
    
    # Compute the area using the Shoelace formula
    area = polygon_area(x, y)
    
    # Print the result
    print(area)
