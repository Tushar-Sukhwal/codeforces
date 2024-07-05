import math

def solve():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    index = 0
    t = int(data[index])
    index += 1
    results = []
    
    for _ in range(t):
        x = int(data[index])
        y = int(data[index+1])
        z = int(data[index+2])
        k = int(data[index+3])
        index += 4
        
        max_locations = 0
        
        # Iterate over possible width (a)
        for a in range(1, int(math.isqrt(k)) + 1):
            if k % a != 0:
                continue
            # Iterate over possible height (b)
            for b in range(1, int(math.isqrt(k // a)) + 1):
                c = k // (a * b)
                if a * b * c == k and 1 <= a <= x and 1 <= b <= y and 1 <= c <= z:
                    placements = (x - a + 1) * (y - b + 1) * (z - c + 1)
                    max_locations += placements
        
        results.append(max_locations)
    
    for result in results:
        print(result)

