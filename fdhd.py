def max_draws(t, test_cases):
    results = []
    for case in test_cases:
        p1, p2, p3 = case
        if (p1 + p2 + p3) % 2 != 0:
            results.append(-1)
            continue
        
        total_games = (p1 + p2 + p3) // 2
        
        if p3 > total_games:
            results.append(-1)
            continue
        
        max_possible_draws = total_games - (p3 - p1) // 2
        
        if max_possible_draws < 0:
            results.append(-1)
        else:
            results.append(max_possible_draws)

    return results

# Read input
t = int(input().strip())
test_cases = [tuple(map(int, input().strip().split())) for _ in range(t)]

# Get results
results = max_draws(t, test_cases)

# Print results
for result in results:
    print(result)
