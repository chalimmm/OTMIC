t = int(input());
for i in range(0, t):
	n = int(input());
	ans = 0
	j = 1
	while j<=n:
		ans += 8*(j/2)*(j/2)
		j += 2
	print(int(ans))
