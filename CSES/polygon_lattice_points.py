from math import gcd

def lattice_points(x1, y1, x2, y2):
    """Calculate number of lattice points between two points (x1, y1) and (x2, y2)."""
    dx = abs(x2 - x1)
    dy = abs(y2 - y1)
    return gcd(dx, dy) - 1

def polygon_area(x, y):
    """Calculate the signed area of the polygon using the Shoelace formula."""
    q = len(x)
    res = 0
    for i in range(q - 1):
        res += x[i] * y[i + 1] - x[i + 1] * y[i]
    res += x[q - 1] * y[0] - x[0] * y[q - 1]
    return res

def calculate_points(x, y):
    """Calculate boundary and inside lattice points for a given polygon."""
    q = len(x)
    boundary_points = 0
    
    # Calculate boundary points
    for i in range(q - 1):
        boundary_points += abs(lattice_points(x[i], y[i], x[i + 1], y[i + 1]) + 1)
    boundary_points += abs(lattice_points(x[0], y[0], x[q - 1], y[q - 1]) + 1)
    
    # Calculate area using Shoelace formula
    area = polygon_area(x, y)
    if area < 0:
        area = -area
    
    # Calculate inside points using Pick's Theorem
    inside_points = (area // 2) + 1 - (boundary_points // 2)
    
    return inside_points, boundary_points

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    
    data = input().strip().split()
    
    # Number of vertices
    q = int(data[0])
    
    # Read the vertices
    x = []
    y = []
    index = 1
    for _ in range(q):
        a = int(data[index])
        b = int(data[index + 1])
        x.append(a)
        y.append(b)
        index += 2
    
    # Calculate and print the results
    inside_points, boundary_points = calculate_points(x, y)
    print(inside_points, boundary_points)
